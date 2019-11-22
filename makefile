run.sh: lex.yy.c yacctest.tab.c main.cpp treeconverter.h treeconverter.cpp latextreetostring.h latextreetostring.cpp
	g++ main.cpp yacctest.tab.c lex.yy.c ast.cpp treeconverter.cpp latextreetostring.cpp -o run.sh

yacctest.tab.c: yacctest.y ast.h
	bison -d yacctest.y

lex.yy.c: lextest.l yacctest.tab.h ast.h
	flex lextest.l
