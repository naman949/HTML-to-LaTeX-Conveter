%{
    #include<iostream>
    #include<string>
    #include<stdio.h>
    #include<cstring>
    #include "ast.h"
    using namespace std;
    
    extern int yylex();
    extern int yyparse();
    extern FILE *yyin;
    
    extern astNode* htmlRoot;
    
    extern astNode* newNode();
    
    vector<astNode*> bodyList;
    vector<astNode*> flineList;
    vector<astNode*> rowList;
    vector<astNode*> rowDataList;
    vector<astNode*> elementsList;
    vector<astNode*> listList;
    vector<astNode*> dlistList;
    
    void yyerror(const char *s);
%}

%union{
    char* sval;
    astNode* node;
}

%type <node> start head body title heading par table figure image dlist
%type <sval> line rows attr
%token <sval> WORD BORDER ATTR SRC HREF SIZE SPECIAL

%token OHTML OHEAD OTITLE OBODY ODIV OPAR OH1 OH2 OH3 OH4 OTABLE OTR OCAPTION OTD OTH OFIG OFIGCAPTION OIMG
%token CHTML CHEAD CTITLE CBODY CDIV CPAR CH1 CH2 CH3 CH4 CTABLE CTR CCAPTION CTD CTH CFIG CFIGCAPTION CIMG
%token OSUB OSUP OU OB OI OTT OEMP OSTRONG OSMALL OA OOL OUL OLI OF ODL ODT ODD OCEN
%token CSUB CSUP CU CB CI CTT CEMP CSTRONG CSMALL CA COL CUL CLI CF CDL CDT CDD CCEN
%token BR SPACE

%start start

%%

start:  OHTML head body CHTML   {   
									$$ = newNode();
                                    htmlRoot = $$;
                                    htmlRoot->nodeType = HTML;
                                    htmlRoot->children.push_back($2);
                                    htmlRoot->children.push_back($3);
                                }
    ;
    
head:   OHEAD title CHEAD       {
                                    $$ = newNode();
                                    $$->nodeType = HEAD;
                                    $$->children.push_back($2);
                                }
    ;
    
title:  OTITLE line CTITLE      {
                                    $$ = newNode();
                                    $$->nodeType = TITLE;
                                    string str($2);
                                    $$->data = str;
                                }
    ;
    
body:   OBODY content CBODY     {
                                    $$ = newNode();
                                    $$->nodeType = BODY;
                                    vector<astNode*>::iterator it;
                                    for(it=bodyList.begin();it!=bodyList.end();it++)
                                    	$$->children.push_back(*it);
                                }
    ;
    
content: 							{}
	|	 content heading			{bodyList.push_back($2);}
	|	 content par				{bodyList.push_back($2);}
	|	 content ODIV content CDIV	{}
	|	 content table				{bodyList.push_back($2);}
	|	 content figure				{bodyList.push_back($2);}
	|	 content list				{
										astNode* temp = newNode();
										temp->nodeType = LIST;
										vector<astNode*>::iterator it;
										for(it = listList.begin(); it != listList.end(); it++)
											temp->children.push_back(*it);
										listList.clear();
										bodyList.push_back(temp);
									}
	|	 content dlist				{bodyList.push_back($2);}
	|	 content BR					{bodyList.push_back(newNode(BREAK));}
	;
	
heading: OH1 fline CH1			{
									$$ = newNode();
									$$->nodeType = H1;
									vector<astNode*>::iterator it;
									for(it=flineList.begin();it!=flineList.end();it++)
										$$->children.push_back(*it);
									flineList.clear();
								}
	|	OH2 fline CH2			{
									$$ = newNode();
									$$->nodeType = H2;
									vector<astNode*>::iterator it;
									for(it=flineList.begin();it!=flineList.end();it++)
										$$->children.push_back(*it);
									flineList.clear();
								}
	|	OH3 fline CH3			{
									$$ = newNode();
									$$->nodeType = H3;
									vector<astNode*>::iterator it;
									for(it=flineList.begin();it!=flineList.end();it++)
										$$->children.push_back(*it);
									flineList.clear();
								}
	|	OH4 fline CH4			{
									$$ = newNode();
									$$->nodeType = H1;
									vector<astNode*>::iterator it;
									for(it=flineList.begin();it!=flineList.end();it++)
										$$->children.push_back(*it);
									flineList.clear();
								}
	;

par: 	OPAR fline CPAR			{
									$$ = newNode();
									$$->nodeType = P;
									vector<astNode*>::iterator it;
									for(it=flineList.begin();it!=flineList.end();it++)
										$$->children.push_back(*it);
									flineList.clear();
								}
	;
	
table:	OTABLE BORDER rows CTABLE	{
										$$ = newNode();
										$$->nodeType = TABLE;
										string s($2);
										int n = s.length();
										if(s[n-3]=='0' || s[n-4]=='0')
											$$->data="0";
										else
											$$->data="1";
										vector<astNode*>::iterator it;
										for(it=rowList.begin();it!=rowList.end();it++)
											$$->children.push_back(*it);
										rowList.clear();
									}
	;

rows:									{}
	|	rows OTR tdata CTR				{
											astNode* temp = newNode();
											temp->nodeType = TABLEROW;
											vector<astNode*>::iterator it;
											for(it = rowDataList.begin();it != rowDataList.end(); it++)
												temp->children.push_back(*it);
											rowDataList.clear();
											rowList.push_back(temp);
										}
	|	rows OCAPTION fline CCAPTION	{
											astNode* temp = newNode();
											temp->nodeType = CAPTION;
											vector<astNode*>::iterator it;
											for(it = flineList.begin();it!=flineList.end();it++)
												temp->children.push_back(*it);
											flineList.clear();
											rowList.push_back(temp);
										}
	;
	
tdata:	OTD fline CTD		{
								astNode* temp = newNode();
								temp->nodeType = ROWDATA;
								vector<astNode*>::iterator it;
								for(it=flineList.begin();it!=flineList.end();it++)
									temp->children.push_back(*it);
								flineList.clear();
								rowDataList.push_back(temp);
							}
	|	OTH fline CTH		{
								astNode* temp = newNode();
								temp->nodeType = ROWHEADER;
								vector<astNode*>::iterator it;
								for(it=flineList.begin();it!=flineList.end();it++)
									temp->children.push_back(*it);
								flineList.clear();
								rowDataList.push_back(temp);
							}
	|	tdata OTD fline CTD	{
								astNode* temp = newNode();
								temp->nodeType = ROWDATA;
								vector<astNode*>::iterator it;
								for(it=flineList.begin();it!=flineList.end();it++)
									temp->children.push_back(*it);
								flineList.clear();
								rowDataList.push_back(temp);
							}
	|	tdata OTH fline CTH	{
								astNode* temp = newNode();
								temp->nodeType = ROWHEADER;
								vector<astNode*>::iterator it;
								for(it=flineList.begin();it!=flineList.end();it++)
									temp->children.push_back(*it);
								flineList.clear();
								rowDataList.push_back(temp);
							}
	;
	
figure:	OFIG elements CFIG	{
								$$ = newNode();
								$$->nodeType = FIGURE;
								vector<astNode*>::iterator it;
								for(it=elementsList.begin();it!=elementsList.end();it++)
									$$->children.push_back(*it);
								elementsList.clear();
							}
	;

elements:										{}
	|	elements OFIGCAPTION fline CFIGCAPTION	{
													astNode* temp = newNode();
													temp->nodeType = FIGCAPTION;
													vector<astNode*>::iterator it;
													for(it = flineList.begin(); it != flineList.end(); it++)
														temp->children.push_back(*it);
													flineList.clear();
													elementsList.push_back(temp);
												}
	|	elements image							{elementsList.push_back($2);}	
	;
	
image:	OIMG SRC attr CIMG	{
								$$ = newNode();
								$$->nodeType = IMAGE;
								string src($2);
								$$->data = src;
								string a($3);
								if(a!="")
								{
									astNode* temp = newNode();
									temp->data = a;
									$$->children.push_back(temp);
								}
							}
	;

attr:						{
								string s = "";
								$$ = strdup(s.c_str());
							}
	| attr ATTR				{
								string a($1);
								string b($2);
								if(a!="")
									a = a + ", ";
								a = a + b;
								$$ = strdup(a.c_str());
							}
	;
	
list:	OOL	{listList.push_back(newNode(OORDEREDLIST));} items COL {listList.push_back(newNode(CORDEREDLIST));}
	|	OUL	{listList.push_back(newNode(OUNORDEREDLIST));} items CUL {listList.push_back(newNode(CUNORDEREDLIST));}
	;

items:	OLI fline CLI		{
								astNode* temp = newNode();
								temp->nodeType = ITEM;
								vector<astNode*>::iterator it;
								for(it = flineList.begin(); it != flineList.end(); it++)
									temp->children.push_back(*it);
								flineList.clear();
								listList.push_back(temp);
							}
	|	items OLI fline CLI	{
								astNode* temp = newNode();
								temp->nodeType = ITEM;
								vector<astNode*>::iterator it;
								for(it = flineList.begin(); it != flineList.end(); it++)
									temp->children.push_back(*it);
								flineList.clear();
								listList.push_back(temp);
							}
	|	items list			{}
	;
	
dlist: ODL dlitems CDL	{
							$$ = newNode();
							$$->nodeType = DLIST;
							vector<astNode*>::iterator it;
							for(it = dlistList.begin(); it != dlistList.end(); it++)
								$$->children.push_back(*it);
						}
	;
	
dlitems: ODT fline CDT {
						astNode* temp = newNode(DT);
						vector<astNode*>::iterator it;
						for(it = flineList.begin(); it != flineList.end(); it++)
							temp->children.push_back(*it);
						flineList.clear();
						dlistList.push_back(temp);
					   } 
		ODD fline CDD  {
						astNode* temp = newNode(DD);
						vector<astNode*>::iterator it;
						for(it = flineList.begin(); it != flineList.end(); it++)
							temp->children.push_back(*it);
						flineList.clear();
						dlistList.push_back(temp);
					   }
	|	dlitems ODT fline CDT  {
								astNode* temp = newNode(DT);
								vector<astNode*>::iterator it;
								for(it = flineList.begin(); it != flineList.end(); it++)
									temp->children.push_back(*it);
								flineList.clear();
								dlistList.push_back(temp);
							   } 
		ODD fline CDD  {
						astNode* temp = newNode(DD);
						vector<astNode*>::iterator it;
						for(it = flineList.begin(); it != flineList.end(); it++)
							temp->children.push_back(*it);
						flineList.clear();
						dlistList.push_back(temp);
					   }
	;
	
fline:  																	{}
	|	fline line															{
																				string a($2);
																				if(a!=" "){
																				astNode* temp = newNode(LINE);
																				temp->data = a;
																				flineList.push_back(temp);
																				}
																			}
	| 	fline image															{flineList.push_back($2);}
	|	fline OA HREF {astNode* temp = newNode(OLINK);string s($3);temp->data=s;flineList.push_back(temp);} fline CA {flineList.push_back(newNode(CLINK));}
	|	fline OF SIZE {astNode* temp = newNode(OFONT);string s($3);temp->data=s;flineList.push_back(temp);} fline CF {flineList.push_back(newNode(CFONT));}	
	|	fline BR															{flineList.push_back(newNode(BREAK));}
	|	fline OB {flineList.push_back(newNode(OBOLD));} fline CB 			{flineList.push_back(newNode(CBOLD));}
	|	fline OU {flineList.push_back(newNode(OUNDERLINED));} fline CU		{flineList.push_back(newNode(CUNDERLINED));}
	|	fline OI {flineList.push_back(newNode(OITALICS));} fline CI	  		{flineList.push_back(newNode(CITALICS));}
	|	fline OTT {flineList.push_back(newNode(OTYPEWRITER));} fline CTT	{flineList.push_back(newNode(CTYPEWRITER));}
	|	fline OEMP {flineList.push_back(newNode(OEMPH));} fline CEMP  		{flineList.push_back(newNode(CEMPH));}
	|	fline OSUB {flineList.push_back(newNode(OSUBS));} fline CSUB		{flineList.push_back(newNode(CSUBS));}
	|	fline OSUP {flineList.push_back(newNode(OSUPS));} fline CSUP		{flineList.push_back(newNode(CSUPS));}
	|	fline OSTRONG {flineList.push_back(newNode(OSTR));} fline CSTRONG	{flineList.push_back(newNode(CSTR));}
	|	fline OSMALL {flineList.push_back(newNode(OSM));} fline CSMALL		{flineList.push_back(newNode(CSM));}
	|	fline OCEN {flineList.push_back(newNode(OCENTER));} fline CCEN		{flineList.push_back(newNode(CCENTER));}
    ;
    
line:	SPACE					{ 
                                    string s = " ";
                                    $$ = strdup(s.c_str());
                                }
    |	WORD					{
    								string s($1);
    								$$ = strdup(s.c_str());
    							}
    |	SPECIAL					{
    								string b($1);
    								if(b=="#"||b=="$"||b=="%"||b=="&"||b=="_"||b=="{"||b=="}")
    									b = "\\"+b;
    								else if(b=="~")
    									b = "$\\sim$";
    								else if(b=="\\")
    									b = "$\\backslash$";
    								else if(b=="^")
    									b = "\\^{}";
    								else if(b=="|")
    									b = "$\\|$";
    								else if(b==">"||b=="<")
    									b = "$"+b+"$";
    								$$ = strdup(b.c_str()); 
    							}                               
    |	line SPACE				{
    								string s($1);
    								s = s + " "; 
    								$$ = strdup(s.c_str());
    							}
    |   line WORD               { 
                                    string a($1);
                                    string b($2);
                                    string c = a + b;
                                    $$ = strdup(c.c_str());
                                }
    |	line SPECIAL			{
    								string a($1);
    								string b($2);
    								if(b=="#"||b=="$"||b=="%"||b=="&"||b=="_"||b=="{"||b=="}")
    									b = "\\"+b;
    								else if(b=="~")
    									b = "$\\sim$";
    								else if(b=="\\")
    									b = "$\\backslash$";
    								else if(b=="^")
    									b = "\\^{}";
    								else if(b=="|")
    									b = "$\\|$";
    								else if(b==">"||b=="<")
    									b = "$"+b+"$";
    								string c = a+b;
    								$$ = strdup(c.c_str());
    							}
    ;
    
%%
