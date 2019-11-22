#include<iostream>
#include<string>
#include<stdio.h>
#include<cstring>
#include "ast.h"
#include "treeconverter.h"
#include "latextreetostring.h"
using namespace std;

extern int yyparse();
extern FILE *yyin;

extern void yyerror(const char *s);

astNode* htmlRoot;
extern string newLatexCode;
extern astNode* convertTree(astNode* htmlRoot);
extern void LatexTreeToString(astNode* LatexTree);

int main(int argc, char **argv){
    FILE *input = fopen(argv[1],"r");
    if(!input){
        printf("Could not open input file.\n");
        return -1;
    }
    else{
        yyin = input;
        yyparse();
    }
    astNode* LatexRoot = convertTree(htmlRoot);
    LatexTreeToString(LatexRoot);
    FILE *output = fopen(argv[2], "w");
    fprintf(output, "%s",newLatexCode.c_str());
    fclose(output);
}

void yyerror(const char *s){
    printf("Parser Error: %s\n",s);
    exit(-1);
}
