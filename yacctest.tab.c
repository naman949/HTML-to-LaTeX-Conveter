/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacctest.y" /* yacc.c:339  */

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

#line 93 "yacctest.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yacctest.tab.h".  */
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
#line 28 "yacctest.y" /* yacc.c:355  */

    char* sval;
    astNode* node;

#line 222 "yacctest.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACCTEST_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 239 "yacctest.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1665

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   338

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    56,    63,    71,    80,    81,    82,    83,
      84,    85,    86,    95,    96,    99,   107,   115,   123,   133,
     143,   159,   160,   169,   180,   189,   198,   207,   218,   228,
     229,   238,   241,   256,   260,   270,   270,   271,   271,   274,
     283,   292,   295,   304,   304,   320,   320,   338,   339,   347,
     348,   348,   349,   349,   350,   351,   351,   352,   352,   353,
     353,   354,   354,   355,   355,   356,   356,   357,   357,   358,
     358,   359,   359,   360,   360,   363,   367,   371,   387,   392,
     398
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WORD", "BORDER", "ATTR", "SRC", "HREF",
  "SIZE", "SPECIAL", "OHTML", "OHEAD", "OTITLE", "OBODY", "ODIV", "OPAR",
  "OH1", "OH2", "OH3", "OH4", "OTABLE", "OTR", "OCAPTION", "OTD", "OTH",
  "OFIG", "OFIGCAPTION", "OIMG", "CHTML", "CHEAD", "CTITLE", "CBODY",
  "CDIV", "CPAR", "CH1", "CH2", "CH3", "CH4", "CTABLE", "CTR", "CCAPTION",
  "CTD", "CTH", "CFIG", "CFIGCAPTION", "CIMG", "OSUB", "OSUP", "OU", "OB",
  "OI", "OTT", "OEMP", "OSTRONG", "OSMALL", "OA", "OOL", "OUL", "OLI",
  "OF", "ODL", "ODT", "ODD", "OCEN", "CSUB", "CSUP", "CU", "CB", "CI",
  "CTT", "CEMP", "CSTRONG", "CSMALL", "CA", "COL", "CUL", "CLI", "CF",
  "CDL", "CDT", "CDD", "CCEN", "BR", "SPACE", "$accept", "start", "head",
  "title", "body", "content", "heading", "par", "table", "rows", "tdata",
  "figure", "elements", "image", "attr", "list", "$@1", "$@2", "items",
  "dlist", "dlitems", "$@3", "$@4", "fline", "$@5", "$@6", "$@7", "$@8",
  "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "line", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338
};
# endif

#define YYPACT_NINF -36

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-36)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    22,    13,    30,    31,   -36,     2,    21,   -36,    25,
     -36,   -36,   -36,     1,   -36,    20,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,    50,   -36,   -36,
     -36,   -36,    -3,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,    94,   147,   200,   253,   306,   -36,    45,    16,    16,
     -36,   -35,   -36,    55,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,    71,    73,   -36,   -36,   -36,     3,
     -36,   -36,   -36,   -36,    68,   -36,   -36,   -36,   -36,   -28,
     -34,   359,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -16,   -36,   -36,
     412,   465,   -36,   -36,   -36,   -36,   -36,   518,     4,   571,
     624,   677,   730,   783,   836,   889,   942,   995,   -36,   -36,
    1048,   -36,   -36,    69,  1101,   -36,   -36,  1154,    29,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,  1207,  1260,   -36,  1313,  1366,   -36,   -36,   -36,   -36,
     -36,   -36,    32,   -36,   -36,   -36,   -36,  1419,  1472,  1525,
     -36,   -36,   -36,   -36,  1582,   -36
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,     6,     0,
      76,    77,    75,     0,     3,     0,     2,    79,    80,     4,
      78,     6,    47,    47,    47,    47,    47,     0,    29,     5,
      35,    37,     0,    14,     7,     8,    10,    11,    12,    13,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
      47,     0,     9,     0,    19,    65,    67,    57,    55,    59,
      61,    63,    69,    71,     0,     0,    73,    54,    49,    48,
      15,    16,    17,    18,     0,    47,    28,    31,    47,     0,
       0,     0,    47,    42,    33,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    50,    52,    47,     0,    47,    20,
       0,     0,    47,    36,    41,    38,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    47,
       0,    47,    47,     0,     0,    30,    39,     0,     0,    45,
      34,    32,    66,    68,    58,    56,    60,    62,    64,    70,
      72,     0,     0,    74,     0,     0,    47,    47,    22,    23,
      40,    47,     0,    51,    53,    24,    25,     0,     0,     0,
      47,    26,    27,    44,     0,    46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -36,   -36,   -36,   -36,   -36,    62,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,    40,   -36,   -32,   -36,   -36,    51,   -36,
     -36,   -36,   -36,   -23,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,    95
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,     7,     9,    15,    34,    35,    36,    74,
     123,    37,    47,    68,   108,    38,    48,    49,    79,    39,
      51,   128,   152,    41,   118,   119,    88,    87,    89,    90,
      91,    85,    86,    92,    93,    96,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      42,    43,    44,    45,    17,    10,    17,   121,   122,   130,
      18,    11,    18,     5,    21,    22,    23,    24,    25,    26,
      27,     1,    30,    31,   102,    28,    82,    81,    30,    31,
     102,    19,    52,     3,    21,    22,    23,    24,    25,    26,
      27,   105,     6,    83,     8,    28,   103,   104,   104,   131,
      14,    29,   100,    16,    46,   101,    30,    31,    50,   107,
      32,    84,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    75,    53,   120,    78,   124,    30,    31,    94,   127,
      32,    95,    33,    40,    20,    12,    20,    77,    76,    97,
      98,   151,   146,   147,   160,   141,   142,    10,   144,   145,
      80,    13,    33,    11,     0,     0,    99,     0,   148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,   157,   158,     0,     0,    54,   159,     0,
       0,     0,     0,     0,     0,     0,     0,   164,     0,     0,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      10,     0,     0,    65,     0,     0,    11,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,    67,    12,     0,     0,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    10,     0,     0,    65,     0,     0,    11,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     0,    67,
      12,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    10,     0,     0,    65,
       0,     0,    11,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,    67,    12,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    10,
       0,     0,    65,     0,     0,    11,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,     0,    67,    12,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    10,     0,     0,    65,     0,     0,    11,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,    67,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    10,     0,     0,    65,     0,
       0,    11,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   106,    53,
       0,    67,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    10,     0,
       0,    65,     0,     0,    11,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,    67,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    10,     0,     0,    65,     0,     0,    11,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,    53,     0,    67,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    10,     0,     0,    65,     0,     0,
      11,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,    53,     0,
      67,    12,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    10,     0,     0,
      65,     0,     0,    11,    66,   132,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,    67,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      10,     0,     0,    65,     0,     0,    11,    66,     0,   133,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,    67,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    10,     0,     0,    65,     0,     0,    11,
      66,     0,     0,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     0,    67,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    10,     0,     0,    65,
       0,     0,    11,    66,     0,     0,     0,   135,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,    67,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    10,
       0,     0,    65,     0,     0,    11,    66,     0,     0,     0,
       0,   136,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,     0,    67,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    10,     0,     0,    65,     0,     0,    11,    66,
       0,     0,     0,     0,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,    67,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    10,     0,     0,    65,     0,
       0,    11,    66,     0,     0,     0,     0,     0,     0,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,    67,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    10,     0,
       0,    65,     0,     0,    11,    66,     0,     0,     0,     0,
       0,     0,     0,   139,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,    67,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    10,     0,     0,    65,     0,     0,    11,    66,     0,
       0,     0,     0,     0,     0,     0,     0,   140,     0,     0,
       0,     0,     0,     0,     0,    53,     0,    67,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    10,     0,     0,    65,     0,     0,
      11,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,   143,
      67,    12,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   149,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    10,     0,     0,
      65,     0,     0,    11,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,    67,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      10,     0,     0,    65,     0,     0,    11,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     150,     0,     0,     0,    53,     0,    67,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    10,     0,     0,    65,     0,     0,    11,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     153,     0,     0,     0,     0,     0,     0,    53,     0,    67,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    10,     0,     0,    65,
       0,     0,    11,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   154,     0,     0,
      53,     0,    67,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   155,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    10,
       0,     0,    65,     0,     0,    11,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,     0,    67,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
       0,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    10,     0,     0,    65,     0,     0,    11,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,    67,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    10,     0,     0,    65,     0,
       0,    11,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,    67,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   162,     0,     0,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    10,     0,
       0,    65,     0,     0,    11,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,    67,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,    65,    10,     0,     0,    66,     0,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,     0,    67,    12,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,    65,     0,     0,     0,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   165,     0,    67,    12
};

static const yytype_int16 yycheck[] =
{
      23,    24,    25,    26,     3,     3,     3,    23,    24,     5,
       9,     9,     9,     0,    14,    15,    16,    17,    18,    19,
      20,    10,    56,    57,    58,    25,    61,    50,    56,    57,
      58,    30,    32,    11,    14,    15,    16,    17,    18,    19,
      20,    75,    12,    78,    13,    25,    74,    79,    80,    45,
      29,    31,    75,    28,     4,    78,    56,    57,    61,    82,
      60,     6,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    26,    27,    96,    58,    98,    56,    57,     7,   102,
      60,     8,    82,    21,    83,    83,    83,    47,    43,    21,
      22,    62,    23,    24,    62,   118,   119,     3,   121,   122,
      49,     6,    82,     9,    -1,    -1,    38,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,   146,   147,    -1,    -1,    33,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       3,    -1,    -1,    59,    -1,    -1,     9,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    82,    83,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     3,    -1,    -1,    59,    -1,    -1,     9,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    82,
      83,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     3,    -1,    -1,    59,
      -1,    -1,     9,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     3,
      -1,    -1,    59,    -1,    -1,     9,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     3,    -1,    -1,    59,    -1,    -1,     9,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     3,    -1,    -1,    59,    -1,
      -1,     9,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    27,
      -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     3,    -1,
      -1,    59,    -1,    -1,     9,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     3,    -1,    -1,    59,    -1,    -1,     9,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    27,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     3,    -1,    -1,    59,    -1,    -1,
       9,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    27,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     3,    -1,    -1,
      59,    -1,    -1,     9,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       3,    -1,    -1,    59,    -1,    -1,     9,    63,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     3,    -1,    -1,    59,    -1,    -1,     9,
      63,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     3,    -1,    -1,    59,
      -1,    -1,     9,    63,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     3,
      -1,    -1,    59,    -1,    -1,     9,    63,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     3,    -1,    -1,    59,    -1,    -1,     9,    63,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     3,    -1,    -1,    59,    -1,
      -1,     9,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     3,    -1,
      -1,    59,    -1,    -1,     9,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     3,    -1,    -1,    59,    -1,    -1,     9,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     3,    -1,    -1,    59,    -1,    -1,
       9,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    81,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     3,    -1,    -1,
      59,    -1,    -1,     9,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       3,    -1,    -1,    59,    -1,    -1,     9,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    27,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     3,    -1,    -1,    59,    -1,    -1,     9,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     3,    -1,    -1,    59,
      -1,    -1,     9,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      27,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     3,
      -1,    -1,    59,    -1,    -1,     9,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     3,    -1,    -1,    59,    -1,    -1,     9,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     3,    -1,    -1,    59,    -1,
      -1,     9,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     3,    -1,
      -1,    59,    -1,    -1,     9,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    59,     3,    -1,    -1,    63,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    82,    83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    85,    11,    86,     0,    12,    87,    13,    88,
       3,     9,    83,   120,    29,    89,    28,     3,     9,    30,
      83,    14,    15,    16,    17,    18,    19,    20,    25,    31,
      56,    57,    60,    82,    90,    91,    92,    95,    99,   103,
      89,   107,   107,   107,   107,   107,     4,    96,   100,   101,
      61,   104,    32,    27,    33,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    59,    63,    82,    97,   120,
      34,    35,    36,    37,    93,    26,    43,    97,    58,   102,
     102,   107,    61,    78,     6,   115,   116,   111,   110,   112,
     113,   114,   117,   118,     7,     8,   119,    21,    22,    38,
     107,   107,    58,    74,    99,    75,    79,   107,    98,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   109,
     107,    23,    24,    94,   107,    44,    76,   107,   105,    79,
       5,    45,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   107,   107,    81,   107,   107,    23,    24,    39,    40,
      76,    62,   106,    73,    77,    41,    42,   107,   107,   107,
      62,    41,    42,    80,   107,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    86,    87,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    90,    90,    91,
      92,    93,    93,    93,    94,    94,    94,    94,    95,    96,
      96,    96,    97,    98,    98,   100,    99,   101,    99,   102,
     102,   102,   103,   105,   104,   106,   104,   107,   107,   107,
     108,   107,   109,   107,   107,   110,   107,   111,   107,   112,
     107,   113,   107,   114,   107,   115,   107,   116,   107,   117,
     107,   118,   107,   119,   107,   120,   120,   120,   120,   120,
     120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     3,     0,     2,     2,     4,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       4,     0,     4,     4,     3,     3,     4,     4,     3,     0,
       4,     2,     4,     0,     2,     0,     4,     0,     4,     3,
       4,     2,     3,     0,     7,     0,     8,     0,     2,     2,
       0,     6,     0,     6,     2,     0,     5,     0,     5,     0,
       5,     0,     5,     0,     5,     0,     5,     0,     5,     0,
       5,     0,     5,     0,     5,     1,     1,     1,     2,     2,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 47 "yacctest.y" /* yacc.c:1646  */
    {   
									(yyval.node) = newNode();
                                    htmlRoot = (yyval.node);
                                    htmlRoot->nodeType = HTML;
                                    htmlRoot->children.push_back((yyvsp[-2].node));
                                    htmlRoot->children.push_back((yyvsp[-1].node));
                                }
#line 1748 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 56 "yacctest.y" /* yacc.c:1646  */
    {
                                    (yyval.node) = newNode();
                                    (yyval.node)->nodeType = HEAD;
                                    (yyval.node)->children.push_back((yyvsp[-1].node));
                                }
#line 1758 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 63 "yacctest.y" /* yacc.c:1646  */
    {
                                    (yyval.node) = newNode();
                                    (yyval.node)->nodeType = TITLE;
                                    string str((yyvsp[-1].sval));
                                    (yyval.node)->data = str;
                                }
#line 1769 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 71 "yacctest.y" /* yacc.c:1646  */
    {
                                    (yyval.node) = newNode();
                                    (yyval.node)->nodeType = BODY;
                                    vector<astNode*>::iterator it;
                                    for(it=bodyList.begin();it!=bodyList.end();it++)
                                    	(yyval.node)->children.push_back(*it);
                                }
#line 1781 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 80 "yacctest.y" /* yacc.c:1646  */
    {}
#line 1787 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 81 "yacctest.y" /* yacc.c:1646  */
    {bodyList.push_back((yyvsp[0].node));}
#line 1793 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 82 "yacctest.y" /* yacc.c:1646  */
    {bodyList.push_back((yyvsp[0].node));}
#line 1799 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 83 "yacctest.y" /* yacc.c:1646  */
    {}
#line 1805 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 84 "yacctest.y" /* yacc.c:1646  */
    {bodyList.push_back((yyvsp[0].node));}
#line 1811 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 85 "yacctest.y" /* yacc.c:1646  */
    {bodyList.push_back((yyvsp[0].node));}
#line 1817 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 86 "yacctest.y" /* yacc.c:1646  */
    {
										astNode* temp = newNode();
										temp->nodeType = LIST;
										vector<astNode*>::iterator it;
										for(it = listList.begin(); it != listList.end(); it++)
											temp->children.push_back(*it);
										listList.clear();
										bodyList.push_back(temp);
									}
#line 1831 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 95 "yacctest.y" /* yacc.c:1646  */
    {bodyList.push_back((yyvsp[0].node));}
#line 1837 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 96 "yacctest.y" /* yacc.c:1646  */
    {bodyList.push_back(newNode(BREAK));}
#line 1843 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 99 "yacctest.y" /* yacc.c:1646  */
    {
									(yyval.node) = newNode();
									(yyval.node)->nodeType = H1;
									vector<astNode*>::iterator it;
									for(it=flineList.begin();it!=flineList.end();it++)
										(yyval.node)->children.push_back(*it);
									flineList.clear();
								}
#line 1856 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 107 "yacctest.y" /* yacc.c:1646  */
    {
									(yyval.node) = newNode();
									(yyval.node)->nodeType = H2;
									vector<astNode*>::iterator it;
									for(it=flineList.begin();it!=flineList.end();it++)
										(yyval.node)->children.push_back(*it);
									flineList.clear();
								}
#line 1869 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 115 "yacctest.y" /* yacc.c:1646  */
    {
									(yyval.node) = newNode();
									(yyval.node)->nodeType = H3;
									vector<astNode*>::iterator it;
									for(it=flineList.begin();it!=flineList.end();it++)
										(yyval.node)->children.push_back(*it);
									flineList.clear();
								}
#line 1882 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 123 "yacctest.y" /* yacc.c:1646  */
    {
									(yyval.node) = newNode();
									(yyval.node)->nodeType = H1;
									vector<astNode*>::iterator it;
									for(it=flineList.begin();it!=flineList.end();it++)
										(yyval.node)->children.push_back(*it);
									flineList.clear();
								}
#line 1895 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 133 "yacctest.y" /* yacc.c:1646  */
    {
									(yyval.node) = newNode();
									(yyval.node)->nodeType = P;
									vector<astNode*>::iterator it;
									for(it=flineList.begin();it!=flineList.end();it++)
										(yyval.node)->children.push_back(*it);
									flineList.clear();
								}
#line 1908 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 143 "yacctest.y" /* yacc.c:1646  */
    {
										(yyval.node) = newNode();
										(yyval.node)->nodeType = TABLE;
										string s((yyvsp[-2].sval));
										int n = s.length();
										if(s[n-3]=='0' || s[n-4]=='0')
											(yyval.node)->data="0";
										else
											(yyval.node)->data="1";
										vector<astNode*>::iterator it;
										for(it=rowList.begin();it!=rowList.end();it++)
											(yyval.node)->children.push_back(*it);
										rowList.clear();
									}
#line 1927 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 159 "yacctest.y" /* yacc.c:1646  */
    {}
#line 1933 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 160 "yacctest.y" /* yacc.c:1646  */
    {
											astNode* temp = newNode();
											temp->nodeType = TABLEROW;
											vector<astNode*>::iterator it;
											for(it = rowDataList.begin();it != rowDataList.end(); it++)
												temp->children.push_back(*it);
											rowDataList.clear();
											rowList.push_back(temp);
										}
#line 1947 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 169 "yacctest.y" /* yacc.c:1646  */
    {
											astNode* temp = newNode();
											temp->nodeType = CAPTION;
											vector<astNode*>::iterator it;
											for(it = flineList.begin();it!=flineList.end();it++)
												temp->children.push_back(*it);
											flineList.clear();
											rowList.push_back(temp);
										}
#line 1961 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 180 "yacctest.y" /* yacc.c:1646  */
    {
								astNode* temp = newNode();
								temp->nodeType = ROWDATA;
								vector<astNode*>::iterator it;
								for(it=flineList.begin();it!=flineList.end();it++)
									temp->children.push_back(*it);
								flineList.clear();
								rowDataList.push_back(temp);
							}
#line 1975 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 189 "yacctest.y" /* yacc.c:1646  */
    {
								astNode* temp = newNode();
								temp->nodeType = ROWHEADER;
								vector<astNode*>::iterator it;
								for(it=flineList.begin();it!=flineList.end();it++)
									temp->children.push_back(*it);
								flineList.clear();
								rowDataList.push_back(temp);
							}
#line 1989 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 198 "yacctest.y" /* yacc.c:1646  */
    {
								astNode* temp = newNode();
								temp->nodeType = ROWDATA;
								vector<astNode*>::iterator it;
								for(it=flineList.begin();it!=flineList.end();it++)
									temp->children.push_back(*it);
								flineList.clear();
								rowDataList.push_back(temp);
							}
#line 2003 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 207 "yacctest.y" /* yacc.c:1646  */
    {
								astNode* temp = newNode();
								temp->nodeType = ROWHEADER;
								vector<astNode*>::iterator it;
								for(it=flineList.begin();it!=flineList.end();it++)
									temp->children.push_back(*it);
								flineList.clear();
								rowDataList.push_back(temp);
							}
#line 2017 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 218 "yacctest.y" /* yacc.c:1646  */
    {
								(yyval.node) = newNode();
								(yyval.node)->nodeType = FIGURE;
								vector<astNode*>::iterator it;
								for(it=elementsList.begin();it!=elementsList.end();it++)
									(yyval.node)->children.push_back(*it);
								elementsList.clear();
							}
#line 2030 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 228 "yacctest.y" /* yacc.c:1646  */
    {}
#line 2036 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 229 "yacctest.y" /* yacc.c:1646  */
    {
													astNode* temp = newNode();
													temp->nodeType = FIGCAPTION;
													vector<astNode*>::iterator it;
													for(it = flineList.begin(); it != flineList.end(); it++)
														temp->children.push_back(*it);
													flineList.clear();
													elementsList.push_back(temp);
												}
#line 2050 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 238 "yacctest.y" /* yacc.c:1646  */
    {elementsList.push_back((yyvsp[0].node));}
#line 2056 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 241 "yacctest.y" /* yacc.c:1646  */
    {
								(yyval.node) = newNode();
								(yyval.node)->nodeType = IMAGE;
								string src((yyvsp[-2].sval));
								(yyval.node)->data = src;
								string a((yyvsp[-1].sval));
								if(a!="")
								{
									astNode* temp = newNode();
									temp->data = a;
									(yyval.node)->children.push_back(temp);
								}
							}
#line 2074 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 256 "yacctest.y" /* yacc.c:1646  */
    {
								string s = "";
								(yyval.sval) = strdup(s.c_str());
							}
#line 2083 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 260 "yacctest.y" /* yacc.c:1646  */
    {
								string a((yyvsp[-1].sval));
								string b((yyvsp[0].sval));
								if(a!="")
									a = a + ", ";
								a = a + b;
								(yyval.sval) = strdup(a.c_str());
							}
#line 2096 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 270 "yacctest.y" /* yacc.c:1646  */
    {listList.push_back(newNode(OORDEREDLIST));}
#line 2102 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 270 "yacctest.y" /* yacc.c:1646  */
    {listList.push_back(newNode(CORDEREDLIST));}
#line 2108 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 271 "yacctest.y" /* yacc.c:1646  */
    {listList.push_back(newNode(OUNORDEREDLIST));}
#line 2114 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 271 "yacctest.y" /* yacc.c:1646  */
    {listList.push_back(newNode(CUNORDEREDLIST));}
#line 2120 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 274 "yacctest.y" /* yacc.c:1646  */
    {
								astNode* temp = newNode();
								temp->nodeType = ITEM;
								vector<astNode*>::iterator it;
								for(it = flineList.begin(); it != flineList.end(); it++)
									temp->children.push_back(*it);
								flineList.clear();
								listList.push_back(temp);
							}
#line 2134 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 283 "yacctest.y" /* yacc.c:1646  */
    {
								astNode* temp = newNode();
								temp->nodeType = ITEM;
								vector<astNode*>::iterator it;
								for(it = flineList.begin(); it != flineList.end(); it++)
									temp->children.push_back(*it);
								flineList.clear();
								listList.push_back(temp);
							}
#line 2148 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 292 "yacctest.y" /* yacc.c:1646  */
    {}
#line 2154 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 295 "yacctest.y" /* yacc.c:1646  */
    {
							(yyval.node) = newNode();
							(yyval.node)->nodeType = DLIST;
							vector<astNode*>::iterator it;
							for(it = dlistList.begin(); it != dlistList.end(); it++)
								(yyval.node)->children.push_back(*it);
						}
#line 2166 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 304 "yacctest.y" /* yacc.c:1646  */
    {
						astNode* temp = newNode(DT);
						vector<astNode*>::iterator it;
						for(it = flineList.begin(); it != flineList.end(); it++)
							temp->children.push_back(*it);
						flineList.clear();
						dlistList.push_back(temp);
					   }
#line 2179 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 312 "yacctest.y" /* yacc.c:1646  */
    {
						astNode* temp = newNode(DD);
						vector<astNode*>::iterator it;
						for(it = flineList.begin(); it != flineList.end(); it++)
							temp->children.push_back(*it);
						flineList.clear();
						dlistList.push_back(temp);
					   }
#line 2192 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 320 "yacctest.y" /* yacc.c:1646  */
    {
								astNode* temp = newNode(DT);
								vector<astNode*>::iterator it;
								for(it = flineList.begin(); it != flineList.end(); it++)
									temp->children.push_back(*it);
								flineList.clear();
								dlistList.push_back(temp);
							   }
#line 2205 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 328 "yacctest.y" /* yacc.c:1646  */
    {
						astNode* temp = newNode(DD);
						vector<astNode*>::iterator it;
						for(it = flineList.begin(); it != flineList.end(); it++)
							temp->children.push_back(*it);
						flineList.clear();
						dlistList.push_back(temp);
					   }
#line 2218 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 338 "yacctest.y" /* yacc.c:1646  */
    {}
#line 2224 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 339 "yacctest.y" /* yacc.c:1646  */
    {
																				string a((yyvsp[0].sval));
																				if(a!=" "){
																				astNode* temp = newNode(LINE);
																				temp->data = a;
																				flineList.push_back(temp);
																				}
																			}
#line 2237 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 347 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back((yyvsp[0].node));}
#line 2243 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 348 "yacctest.y" /* yacc.c:1646  */
    {astNode* temp = newNode(OLINK);string s((yyvsp[0].sval));temp->data=s;flineList.push_back(temp);}
#line 2249 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 348 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(CLINK));}
#line 2255 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 349 "yacctest.y" /* yacc.c:1646  */
    {astNode* temp = newNode(OFONT);string s((yyvsp[0].sval));temp->data=s;flineList.push_back(temp);}
#line 2261 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 349 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(CFONT));}
#line 2267 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 350 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(BREAK));}
#line 2273 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 351 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(OBOLD));}
#line 2279 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 351 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(CBOLD));}
#line 2285 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 352 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(OUNDERLINED));}
#line 2291 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 352 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(CUNDERLINED));}
#line 2297 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 353 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(OITALICS));}
#line 2303 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 353 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(CITALICS));}
#line 2309 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 354 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(OTYPEWRITER));}
#line 2315 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 354 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(CTYPEWRITER));}
#line 2321 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 355 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(OEMPH));}
#line 2327 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 355 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(CEMPH));}
#line 2333 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 356 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(OSUBS));}
#line 2339 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 356 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(CSUBS));}
#line 2345 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 357 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(OSUPS));}
#line 2351 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 357 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(CSUPS));}
#line 2357 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 358 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(OSTR));}
#line 2363 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 358 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(CSTR));}
#line 2369 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 359 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(OSM));}
#line 2375 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 359 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(CSM));}
#line 2381 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 360 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(OCENTER));}
#line 2387 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 360 "yacctest.y" /* yacc.c:1646  */
    {flineList.push_back(newNode(CCENTER));}
#line 2393 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 363 "yacctest.y" /* yacc.c:1646  */
    { 
                                    string s = " ";
                                    (yyval.sval) = strdup(s.c_str());
                                }
#line 2402 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 367 "yacctest.y" /* yacc.c:1646  */
    {
    								string s((yyvsp[0].sval));
    								(yyval.sval) = strdup(s.c_str());
    							}
#line 2411 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 371 "yacctest.y" /* yacc.c:1646  */
    {
    								string b((yyvsp[0].sval));
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
    								(yyval.sval) = strdup(b.c_str()); 
    							}
#line 2432 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 387 "yacctest.y" /* yacc.c:1646  */
    {
    								string s((yyvsp[-1].sval));
    								s = s + " "; 
    								(yyval.sval) = strdup(s.c_str());
    							}
#line 2442 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 392 "yacctest.y" /* yacc.c:1646  */
    { 
                                    string a((yyvsp[-1].sval));
                                    string b((yyvsp[0].sval));
                                    string c = a + b;
                                    (yyval.sval) = strdup(c.c_str());
                                }
#line 2453 "yacctest.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 398 "yacctest.y" /* yacc.c:1646  */
    {
    								string a((yyvsp[-1].sval));
    								string b((yyvsp[0].sval));
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
    								(yyval.sval) = strdup(c.c_str());
    							}
#line 2476 "yacctest.tab.c" /* yacc.c:1646  */
    break;


#line 2480 "yacctest.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 418 "yacctest.y" /* yacc.c:1906  */

