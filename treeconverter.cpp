#include<iostream>
#include<string>
#include<vector>
#include"ast.h"


astNode* convertHead(astNode* head)
{
	astNode* title = newNode(LatexTitle);
	title->data = (head->children)[0]->data;
	return title;
}

astNode* copy(astNode* it)
{
	if(it->nodeType == LINE)
	{
		astNode* temp = newNode(LINE);
		temp->data = it->data;
		return temp;
	}
	else if(it->nodeType == IMAGE)
	{
		astNode* temp = newNode(GRAPHICS);
		temp->data = it->data;
		if(it->children.size()!=0)
			temp->children = it->children;
		return temp;
	}
	else if(it->nodeType == OLINK)
	{
		astNode* temp = newNode(LINK);
		temp->data = it->data;
		return temp;
	}
	else
	{
		astNode* temp = newNode(FONT);
		temp->data = it->data;
		return temp;
	}
} 

vector<astNode*> createChildren(vector<astNode*> children)
{
	vector<astNode*> newChildren;
	
	vector<astNode*>::iterator it;
	for(it = children.begin(); it != children.end(); it++)
	{
		if(((*it)->nodeType == LINE)||((*it)->nodeType == IMAGE)||((*it)->nodeType == OLINK)||((*it)->nodeType == OFONT))
			newChildren.push_back(copy(*it));
		else if((*it)->nodeType == BREAK)
			newChildren.push_back(newNode(BREAK));
		else if(((*it)->nodeType == OBOLD)||((*it)->nodeType == OSTR))
			newChildren.push_back(newNode(TEXTBF));
		else if((*it)->nodeType == OUNDERLINED)
			newChildren.push_back(newNode(UNDERLINE));
		else if((*it)->nodeType == OITALICS)
			newChildren.push_back(newNode(TEXTIT));
		else if((*it)->nodeType == OTYPEWRITER)
			newChildren.push_back(newNode(TEXTTT));
		else if((*it)->nodeType == OEMPH)
			newChildren.push_back(newNode(EMPH));
		else if((*it)->nodeType == OSM)
			newChildren.push_back(newNode(SMALL));
		else if((*it)->nodeType == OSUBS)
			newChildren.push_back(newNode(SUBSCRIPT));
		else if((*it)->nodeType == OSUPS)
			newChildren.push_back(newNode(SUPERSCRIPT));
		else if((*it)->nodeType == OCENTER)
			newChildren.push_back(newNode(BEGINCENTER));
		else if((*it)->nodeType == CCENTER)
			newChildren.push_back(newNode(ENDCENTER));
		else if(((*it)->nodeType == CSUBS)||((*it)->nodeType == CSUPS))
			newChildren.push_back(newNode(END));
		else
			newChildren.push_back(newNode(CLOSE));
	}
	return newChildren;
}

astNode* createHeading(astNode* heading)
{
	astNode* temp = newNode();
	if(heading->nodeType == H1)
		temp->nodeType = H1HEADING;
	else if(heading->nodeType == H2)
		temp->nodeType = H2HEADING;
	else if(heading->nodeType == H3)
		temp->nodeType = H3HEADING;
	else
		temp->nodeType = H4HEADING;
		
	temp->children = createChildren(heading->children);
	return temp;
}

astNode* createPar(astNode* p)
{
	astNode* par = newNode(PAR);
	par->children = createChildren(p->children);
	return par;	
}

vector<astNode*> createRow(vector<astNode*> row)
{
	vector<astNode*> rowChildren;
	
	vector<astNode*>::iterator it;
	for(it = row.begin(); it != row.end(); it++)
	{
		astNode* temp = newNode();
		if((*it)->nodeType == ROWDATA)
			temp->nodeType = ROWDATA;
		else
		{
			temp->nodeType = ROWHEADER;
		}
		temp->children = createChildren((*it)->children);
		rowChildren.push_back(temp);
	}
	return rowChildren;
}

astNode* createTable(astNode* htmlTable)
{
	astNode* table = newNode(TABLE);
	astNode* tabular = newNode(TABULAR);
	tabular->data = htmlTable->data;
	
	vector<astNode*>::iterator it;
	for(it = htmlTable->children.begin(); it != htmlTable->children.end(); it++)
	{
		if((*it)->nodeType == CAPTION)
		{
			astNode* temp = newNode(CAPTION);
			temp->children = createChildren((*it)->children);
			table->children.push_back(temp);
		}
		else
		{
			astNode* temp = newNode(ROW);
			temp->children = createRow((*it)->children);
			tabular->children.push_back(temp);
		}
	}
	table->children.push_back(tabular);
	return table;
}

astNode* createFigure(astNode* htmlFigure)
{
	astNode* figure = newNode(FIGURE);
	
	vector<astNode*>::iterator it;
	for(it = htmlFigure->children.begin(); it != htmlFigure->children.end(); it++)
	{
		if((*it)->nodeType == IMAGE)
			figure->children.push_back(copy(*it));
		else
		{
			astNode* temp = newNode(CAPTION);
			temp->children = createChildren((*it)->children);
			figure->children.push_back(temp);
		}
	}
	return figure;
}

astNode* createList(astNode* htmlList)
{
	astNode* list = newNode(LIST);
	
	vector<astNode*>::iterator it;
	for(it = htmlList->children.begin(); it != htmlList->children.end(); it++)
	{
		if((*it)->nodeType == OORDEREDLIST)
			list->children.push_back(newNode(BEGINENUMERATE));
		else if((*it)->nodeType == CORDEREDLIST)
			list->children.push_back(newNode(ENDENUMERATE));
		else if((*it)->nodeType == OUNORDEREDLIST)
			list->children.push_back(newNode(BEGINITEMIZE));
		else if((*it)->nodeType == CUNORDEREDLIST)
			list->children.push_back(newNode(ENDITEMIZE));
		else
		{
			astNode* temp = newNode(ITEM);
			temp->children = createChildren((*it)->children);
			list->children.push_back(temp);
		}
	}
	return list;
}

astNode* createDescription(astNode* dlist)
{
	astNode* description = newNode(DESCRIPTION);

	vector<astNode*>::iterator it;
	for(it = dlist->children.begin(); it != dlist->children.end(); it++)
	{
		astNode* temp = newNode();
		if((*it)->nodeType == DT)
			temp->nodeType = TERM;
		else
			temp->nodeType = LINE;
		temp->children = createChildren((*it)->children);
		description->children.push_back(temp);
	}
	return description;
}

astNode* convertBody(astNode* body)
{
	astNode* document = newNode(DOCUMENT);	
	
	vector<astNode*>::iterator it;
	for(it = body->children.begin(); it != body->children.end(); it++)
	{
		if(((*it)->nodeType == H1)||((*it)->nodeType == H2)||((*it)->nodeType == H3)||((*it)->nodeType == H4))
			document->children.push_back(createHeading(*it));
		else if((*it)->nodeType == P)
			document->children.push_back(createPar(*it));
		else if((*it)->nodeType == TABLE)
			document->children.push_back(createTable(*it));
		else if((*it)->nodeType == FIGURE)
			document->children.push_back(createFigure(*it));
		else if((*it)->nodeType == LIST)
			document->children.push_back(createList(*it));
		else if((*it)->nodeType == DLIST)
			document->children.push_back(createDescription(*it));
		else if((*it)->nodeType == BREAK)
			document->children.push_back(newNode(BREAK));
	}
	return document;
}

astNode* convertTree(astNode* htmlTree)
{
	astNode* root = newNode(LaTeX);
		
	vector<astNode*>::iterator it;
	for(it=htmlTree->children.begin(); it!=htmlTree->children.end(); it++)
	{
		if((*it)->nodeType == HEAD)
			root->children.push_back(convertHead(*it));
		else if((*it)->nodeType == BODY)
			root->children.push_back(convertBody(*it));
		else
			cout<<"Invalid HTML Child Node\n";
	}
	return root;
}
