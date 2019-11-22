/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_YACCTEST_TAB_H_INCLUDED
# define YY_YY_YACCTEST_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    WORD = 258,
    BORDER = 259,
    ATTR = 260,
    SRC = 261,
    HREF = 262,
    SIZE = 263,
    SPECIAL = 264,
    OHTML = 265,
    OHEAD = 266,
    OTITLE = 267,
    OBODY = 268,
    ODIV = 269,
    OPAR = 270,
    OH1 = 271,
    OH2 = 272,
    OH3 = 273,
    OH4 = 274,
    OTABLE = 275,
    OTR = 276,
    OCAPTION = 277,
    OTD = 278,
    OTH = 279,
    OFIG = 280,
    OFIGCAPTION = 281,
    OIMG = 282,
    CHTML = 283,
    CHEAD = 284,
    CTITLE = 285,
    CBODY = 286,
    CDIV = 287,
    CPAR = 288,
    CH1 = 289,
    CH2 = 290,
    CH3 = 291,
    CH4 = 292,
    CTABLE = 293,
    CTR = 294,
    CCAPTION = 295,
    CTD = 296,
    CTH = 297,
    CFIG = 298,
    CFIGCAPTION = 299,
    CIMG = 300,
    OSUB = 301,
    OSUP = 302,
    OU = 303,
    OB = 304,
    OI = 305,
    OTT = 306,
    OEMP = 307,
    OSTRONG = 308,
    OSMALL = 309,
    OA = 310,
    OOL = 311,
    OUL = 312,
    OLI = 313,
    OF = 314,
    ODL = 315,
    ODT = 316,
    ODD = 317,
    OCEN = 318,
    CSUB = 319,
    CSUP = 320,
    CU = 321,
    CB = 322,
    CI = 323,
    CTT = 324,
    CEMP = 325,
    CSTRONG = 326,
    CSMALL = 327,
    CA = 328,
    COL = 329,
    CUL = 330,
    CLI = 331,
    CF = 332,
    CDL = 333,
    CDT = 334,
    CDD = 335,
    CCEN = 336,
    BR = 337,
    SPACE = 338
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "yacctest.y" /* yacc.c:1909  */

    char* sval;
    astNode* node;

#line 143 "yacctest.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACCTEST_TAB_H_INCLUDED  */
