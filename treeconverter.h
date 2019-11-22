#ifndef _TREECONVERTER_H
#define _TREECONVERTER_H

#include<string>
#include<vector>
#include"ast.h"
using namespace std;

astNode* converterHead(astNode* head);
astNode* copy(astNode* it);
vector<astNode*> createChildren(vector<astNode*> children);
astNode* createHeading(astNode* heading);
astNode* createPar(astNode* p);
vector<astNode*> createRow(vector<astNode*> row);
astNode* createTable(astNode* htmlTable);
astNode* createFigure(astNode* htmlFigure);
astNode* createList(astNode* htmlList);
astNode* createDescription(astNode* dlist);
astNode* convertBody(astNode* body);
astNode* convertTree(astNode* htmlTree);

#endif
