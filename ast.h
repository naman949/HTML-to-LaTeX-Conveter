#ifndef _AST_H
#define _AST_H

#include<iostream>
#include<string>
#include<vector>
#include<stdio.h>
using namespace std;

enum AST_Node_Type{
    HTML, HEAD, BODY, TITLE, 
    H1, H2, H3, H4, 
    P, 
    OCENTER, CCENTER, 
    OBOLD, OITALICS, OUNDERLINED, OEMPH, OTYPEWRITER, OSTR, OSM, OSUBS, OSUPS,
    CBOLD, CITALICS, CUNDERLINED, CEMPH, CTYPEWRITER, CSTR, CSM, CSUBS, CSUPS,
    TABLE, TABLEROW, ROWDATA, ROWHEADER, CAPTION,
    FIGURE, IMAGE, FIGCAPTION,
    OLINK, CLINK, OFONT, CFONT,
    LIST, OORDEREDLIST, CORDEREDLIST, OUNORDEREDLIST, CUNORDEREDLIST, ITEM, DLIST, DT, DD,
    LINE, BREAK,
    LaTeX, LatexTitle, DOCUMENT,
    H1HEADING, H2HEADING, H3HEADING, H4HEADING,
    PAR,
    TABULAR, ROW,
    BEGINENUMERATE, ENDENUMERATE, BEGINITEMIZE, ENDITEMIZE, DESCRIPTION, TERM,
    LINK, FONT,
    TEXTBF, UNDERLINE, TEXTIT, TEXTTT, EMPH, SMALL, SUBSCRIPT, SUPERSCRIPT, BEGINCENTER, ENDCENTER, END, CLOSE, GRAPHICS
};

typedef struct astNode{
    AST_Node_Type nodeType;
    string data;
    vector<astNode*> children;
} astNode;

astNode* newNode();
astNode* newNode(AST_Node_Type type);

#endif
