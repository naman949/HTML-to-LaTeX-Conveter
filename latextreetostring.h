#ifndef _LATEXTREETOSTRING_H
#define _LATEXTREETOSTRING_H

#include<string>
#include<vector>
#include "ast.h"
using namespace std;

void writeLine(vector<astNode*> list);
void HeadingToString(astNode* heading);
void ParToString(astNode* par);
void writeCaption(astNode* caption);
void writeRow(astNode* row, int r);
void writeTabular(astNode* tabular);
void TableToString(astNode* table);
void writeGraphics(astNode* image);
void FigureToString(astNode* figure);
void ListToString(astNode* list);
void DescriptionToString(astNode* dlist);
void DocumentString(astNode* body);
void LatexTreeToString(astNode* root);


#endif
