#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include "ast.h"
#include "latextreetostring.h"
using namespace std;

string newLatexCode;
bool noLine;

void writeLine(vector<astNode*> list)
{
	vector<astNode*>::iterator it;
	for(it = list.begin(); it != list.end(); it++)
	{
		if((*it)->nodeType == LINE)
			newLatexCode = newLatexCode + (*it)->data;
		else if((*it)->nodeType == BREAK)
			newLatexCode = newLatexCode + "\\newline ";
		else if((*it)->nodeType == TEXTBF)
			newLatexCode = newLatexCode + "\\textbf{";
		else if((*it)->nodeType == UNDERLINE)
			newLatexCode = newLatexCode + "\\underline{";
		else if((*it)->nodeType == TEXTIT)
			newLatexCode = newLatexCode + "\\textit{";
		else if((*it)->nodeType == TEXTTT)
			newLatexCode = newLatexCode + "\\texttt{";
		else if((*it)->nodeType == EMPH)
			newLatexCode = newLatexCode + "\\emph{";
		else if((*it)->nodeType == SMALL)
			newLatexCode = newLatexCode + "{\\small ";
		else if((*it)->nodeType == SUBSCRIPT)
			newLatexCode = newLatexCode + "$_{";
		else if((*it)->nodeType == SUPERSCRIPT)
			newLatexCode = newLatexCode + "$^{";
		else if((*it)->nodeType == GRAPHICS)
			writeGraphics(*it);
		else if((*it)->nodeType == LINK)
			newLatexCode = newLatexCode + "\\href{" + (*it)->data + "}{";
		else if((*it)->nodeType == BEGINCENTER)
			newLatexCode = newLatexCode + "\\begin{center}";
		else if((*it)->nodeType == ENDCENTER)
			newLatexCode = newLatexCode + "\\end{center}";
		else if((*it)->nodeType == FONT)
		{
			int i = stoi((*it)->data);
			i = i*4;
			newLatexCode = newLatexCode + "{\\fontsize{" + to_string(i) + "}{" + to_string(1.2*i) + "}\\selectfont ";
		}
		else if((*it)->nodeType == END)
			newLatexCode = newLatexCode + "}$";
		else
			newLatexCode = newLatexCode + "}";	
	}
}

void HeadingToString(astNode* heading)
{
	if(noLine)
	{
		newLatexCode = newLatexCode + "\\textbf{";
		noLine = false;
	}
	else
		newLatexCode = newLatexCode + "\\newline\n\\textbf{";

	if(heading->nodeType == H1HEADING)
		newLatexCode = newLatexCode + "\\LARGE ";
	else if(heading->nodeType == H2HEADING)
		newLatexCode = newLatexCode + "\\Large ";
	else if(heading->nodeType == H3HEADING)
		newLatexCode = newLatexCode + "\\large ";
	else if(heading->nodeType == H4HEADING)
		newLatexCode = newLatexCode + "\\normalsize ";
	writeLine(heading->children);
	newLatexCode = newLatexCode + "}\n\\newline\n";
}

void ParToString(astNode* par)
{
	newLatexCode = newLatexCode + "\\par\n";
	writeLine(par->children);
	int n = par->children.size();
	if((par->children)[n-1]->nodeType == GRAPHICS || (par->children)[n-1]->nodeType == ENDCENTER)
	{
		newLatexCode = newLatexCode + "\n\n";
		noLine=true;
	}
	else
	{
		newLatexCode = newLatexCode + "\n\\newline\n";
		noLine=false;
	}
}

void printCaption(astNode* caption)
{
	newLatexCode = newLatexCode + "\\caption*{";
	writeLine(caption->children);
	newLatexCode = newLatexCode + "}\n";
}

void printRow(astNode* row, int r)
{
	if(r==1)
		newLatexCode = newLatexCode + "\\hline\\hline\n";
	
	int n = row->children.size();
	for(int i=0;i<n;i++)
	{
		if((row->children)[i]->nodeType == ROWDATA)
			writeLine((row->children)[i]->children);
		else
		{
			newLatexCode = newLatexCode + "\\textbf{";
			writeLine((row->children)[i]->children);
			newLatexCode = newLatexCode + "}";
		}
		
		if(i!=n-1)
			newLatexCode = newLatexCode + " & ";
		else
			newLatexCode = newLatexCode + "\\\\\n";
	}
}

void writeTabular(astNode* tabular)
{
	vector<astNode*>::iterator it;
	int columns = 0;
	for(it = tabular->children.begin(); it != tabular->children.end(); it++)
		columns = columns<(*it)->children.size()?(*it)->children.size():columns;
	
	if(tabular->data=="0")
	{
		newLatexCode = newLatexCode + "\\begin{tabular}{ ";
		for(int i=0;i<columns;i++)
			newLatexCode = newLatexCode + "c ";
		newLatexCode = newLatexCode + "}\n";
		
		for(it = tabular->children.begin(); it != tabular->children.end(); it++)
			printRow(*it,0);
		
		newLatexCode = newLatexCode + "\\end{tabular}\n";
	}
	else
	{
		newLatexCode = newLatexCode + "\\begin{tabular}{||";
		for(int i=0;i<columns;i++)
			newLatexCode = newLatexCode + "c||";
		newLatexCode = newLatexCode + "}\n";
	
		for(it = tabular->children.begin(); it != tabular->children.end(); it++)
			printRow(*it,1);
		
		newLatexCode = newLatexCode + "\\hline\\hline\n\\end{tabular}\n";
	}	
}

void TableToString(astNode* table)
{
	newLatexCode = newLatexCode + "\\begin{table}[h!]\n\\centering\n";

	vector<astNode*>::iterator it;
	for(it = table->children.begin(); it != table->children.end(); it++)
	{
		if((*it)->nodeType == CAPTION)
			printCaption(*it);
		else
			writeTabular(*it);
	}
	
	newLatexCode = newLatexCode + "\\end{table}\n";
	noLine = false;
}

void writeGraphics(astNode* image)
{
	newLatexCode = newLatexCode + "\\includegraphics";
	if(image->children.size()!=0)
	{
		newLatexCode = newLatexCode + "[" + (image->children)[0]->data + "]";
	}
	newLatexCode = newLatexCode + "{" + image->data + "}\n";
}

void FigureToString(astNode* figure)
{
	newLatexCode = newLatexCode + "\\begin{figure}[h!]\n";
	vector<astNode*>::iterator it;
	for(it = figure->children.begin(); it != figure->children.end(); it++)
	{
		if((*it)->nodeType==IMAGE)
			writeGraphics(*it);
		else
			printCaption(*it);
	}
	newLatexCode = newLatexCode + "\\end{figure}\n";
	noLine = true;
}

void ListToString(astNode* list)
{
	stack<bool> s;
	vector<astNode*>::iterator it;
	for(it = list->children.begin(); it != list->children.end(); it++)
	{
		if((*it)->nodeType == BEGINENUMERATE)
		{
			s.push(false);
			newLatexCode = newLatexCode + "\\begin{enumerate}[1.]\n";
		}
		else if((*it)->nodeType == ENDENUMERATE)
		{
			newLatexCode = newLatexCode + "\\end{enumerate}\n";
			s.pop();
		}
		else if((*it)->nodeType == BEGINITEMIZE)
		{
			newLatexCode = newLatexCode + "\\begin{itemize}\n";
			s.push(true);
		}
		else if((*it)->nodeType == ENDITEMIZE)
		{
			newLatexCode = newLatexCode + "\\end{itemize}\n";
			s.pop();
		}
		else
		{
			if(s.top())
				newLatexCode = newLatexCode + "\\item[\\textbullet] ";
			else
				newLatexCode = newLatexCode + "\\item ";
			writeLine((*it)->children);
			newLatexCode = newLatexCode + "\n";
		}	
	}
	noLine = true;
}

void DescriptionToString(astNode* dlist)
{
	newLatexCode = newLatexCode + "\\begin{description}\n";
	vector<astNode*>::iterator it;
	for(it = dlist->children.begin(); it != dlist->children.end(); it++)
	{
		if((*it)->nodeType == TERM)
		{
			newLatexCode = newLatexCode + "\\item[";
			writeLine((*it)->children);
			newLatexCode = newLatexCode + "]";
		}
		else
		{
			newLatexCode = newLatexCode + " \\hfill \\\\ ";
			writeLine((*it)->children);
			newLatexCode = newLatexCode + "\n";
		}
	}
	newLatexCode = newLatexCode + "\\end{description}\n";
	noLine = true;
}

void DocumentString(astNode* body)
{
	newLatexCode = newLatexCode + "\\setlength{\\parindent}{0pt}\n\\begin{document}\n\n\\maketitle\n\n";
	
	if((body->children).size()!=0){
		if((((body->children)[0])->nodeType == H1HEADING)||((body->children)[0]->nodeType == H2HEADING)||((body->children)[0]->nodeType == H3HEADING)||((body->children)[0]->nodeType == H4HEADING))
			noLine = true;
		else
			noLine = false;
	}
	vector<astNode*>::iterator it;
	for(it = body->children.begin(); it != body->children.end(); it++)
	{
		if(((*it)->nodeType == H1HEADING)||((*it)->nodeType == H2HEADING)||((*it)->nodeType == H3HEADING)||((*it)->nodeType == H4HEADING))
			HeadingToString(*it);
		else if((*it)->nodeType == PAR)
			ParToString(*it);
		else if((*it)->nodeType == TABLE)
			TableToString(*it);
		else if((*it)->nodeType == FIGURE)
			FigureToString(*it);
		else if((*it)->nodeType == LIST)
			ListToString(*it);
		else if((*it)->nodeType == DESCRIPTION)
			DescriptionToString(*it);
		else if((*it)->nodeType == BREAK)
			newLatexCode = newLatexCode + "\\newline\n";
	} 
	newLatexCode = newLatexCode + "\\end{document}";
}

void LatexTreeToString(astNode* root)
{
	if(root->nodeType==LaTeX)
	{
		newLatexCode = "\\documentclass[12pt]{article}\n\n\\usepackage{caption}\n\\usepackage{graphicx}\n\\usepackage{enumerate}\n\\usepackage{hyperref}\n";
		newLatexCode = newLatexCode + "\\hypersetup{\ncolorlinks=true,\nlinkcolor=purple,\n}\n\n";
		vector<astNode*>::iterator it;
		for(it=root->children.begin(); it != root->children.end(); it++)
		{
			if((*it)->nodeType==LatexTitle)
			{
				string s = "\\title{" + (*it)->data + "}\n\\date{\\vspace{-2em}}\n";
				newLatexCode = newLatexCode + s;
			}
			else if((*it)->nodeType==DOCUMENT)
				DocumentString(*it);
			else
				printf("Invalid Tree Constructed!");
		}
	}
	else
	{
		printf("Not a valid Tree!\n");
		exit(-1);
	}
}
