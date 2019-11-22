#include<iostream>
#include<string>
#include<stdio.h>
#include "ast.h"
using namespace std;

astNode* newNode(){
    return (new astNode());
}

astNode* newNode(AST_Node_Type type){
	astNode* temp = new astNode();
	temp->nodeType = type;
	return temp;
}

