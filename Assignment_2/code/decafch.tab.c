
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "decafch.y"

#include <cstdio>
#include <iostream>
#include <stdarg.h>
using namespace std;

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
 
void yyerror(const char *s);
int line_num = 1;
int err_count = 0;
extern const char *yytext;
char *filename;


/* Line 189 of yacc.c  */
#line 92 "decafch.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT_CONST = 258,
     FLOAT_CONST = 259,
     STRING_CONST = 260,
     FLOAT_CONST_MANTISSA = 261,
     ID = 262,
     COMMENT = 263,
     SYN_ERR = 264,
     INT = 265,
     FLOAT = 266,
     IF = 267,
     ELSE = 268,
     WHILE = 269,
     FOR = 270,
     RETURN = 271,
     BREAK = 272,
     CONTINUE = 273,
     NULL_TOKEN = 274,
     TRUE = 275,
     FALSE = 276,
     THIS = 277,
     SUPER = 278,
     NEW = 279,
     CLASS = 280,
     EXTEND = 281,
     OPEN_BRACE = 282,
     CLOSE_BRACE = 283,
     SEMI_COLON = 284,
     STATIC = 285,
     PUBLIC = 286,
     PRIVATE = 287,
     BOOLEAN = 288,
     COMMA = 289,
     DOT = 290,
     OPEN_PARANTHESIS = 291,
     CLOSE_PARANTHESIS = 292,
     OPEN_SQR_BRACKET = 293,
     CLOSE_SQR_BRACKET = 294,
     VOID = 295,
     PLUS = 296,
     PLUS_PLUS = 297,
     MINUS = 298,
     MINUS_MINUS = 299,
     MULTIPLY = 300,
     DIVIDE = 301,
     NOT_EQUAL = 302,
     NOT = 303,
     OR = 304,
     AND = 305,
     EQUAL_EQUAL = 306,
     EQUAL = 307,
     LESS_EQUAL = 308,
     LESS = 309,
     GREATER_EQUAL = 310,
     GREATER = 311,
     EOF_TOKEN = 312,
     UPLUS = 313,
     UMINUS = 314,
     PREC_LOW = 315,
     PREC_HIGH = 316
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 22 "decafch.y"

	int ival;
	float fval;
	char *sval;
	char *cmtval;
	char *errval;
	char *strval;



/* Line 214 of yacc.c  */
#line 200 "decafch.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 225 "decafch.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   601

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNRULES -- Number of states.  */
#define YYNSTATES  209

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    15,    21,    25,
      27,    30,    32,    34,    36,    39,    40,    42,    45,    47,
      50,    52,    56,    58,    60,    62,    64,    66,    70,    72,
      75,    82,    90,    97,   105,   111,   118,   120,   124,   127,
     131,   134,   136,   139,   141,   144,   147,   150,   154,   160,
     170,   173,   175,   177,   184,   185,   188,   189,   191,   192,
     194,   195,   197,   199,   201,   203,   205,   207,   209,   211,
     213,   215,   217,   219,   221,   223,   227,   233,   235,   237,
     239,   243,   244,   246,   248,   250,   254,   256,   261,   266,
     268,   270,   272,   276,   280,   284,   288,   292,   296,   300,
     304,   308,   312,   316,   320,   323,   326,   329,   333,   336,
     339,   342,   345,   349,   354,   358,   363,   366,   370,   372
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    -1,    64,    -1,    65,    -1,    64,    65,
      -1,    25,     7,    66,    -1,    25,     7,    26,     7,    66,
      -1,    27,    67,    28,    -1,    68,    -1,    67,    68,    -1,
      69,    -1,    75,    -1,    76,    -1,    70,    71,    -1,    -1,
      31,    -1,    31,    30,    -1,    32,    -1,    32,    30,    -1,
      30,    -1,    72,    73,    29,    -1,    10,    -1,    11,    -1,
      33,    -1,     7,    -1,    74,    -1,    73,    34,    74,    -1,
       7,    -1,     7,   101,    -1,    70,    72,     7,    36,    37,
      79,    -1,    70,    72,     7,    36,    77,    37,    79,    -1,
      70,    40,     7,    36,    37,    79,    -1,    70,    40,     7,
      36,    77,    37,    79,    -1,    70,     7,    36,    37,    79,
      -1,    70,     7,    36,    77,    37,    79,    -1,    78,    -1,
      77,    34,    78,    -1,    72,    74,    -1,    27,    80,    28,
      -1,    27,    28,    -1,    81,    -1,    80,    81,    -1,    29,
      -1,    17,    29,    -1,    18,    29,    -1,    16,    29,    -1,
      16,    97,    29,    -1,    14,    36,    97,    37,    81,    -1,
      15,    36,    83,    29,    84,    29,    85,    37,    81,    -1,
     102,    29,    -1,    79,    -1,    71,    -1,    12,    36,    97,
      37,    81,    82,    -1,    -1,    13,    81,    -1,    -1,   102,
      -1,    -1,    97,    -1,    -1,   102,    -1,    87,    -1,    88,
      -1,    89,    -1,    19,    -1,    20,    -1,    21,    -1,     3,
      -1,     4,    -1,     6,    -1,     5,    -1,    86,    -1,    22,
      -1,    23,    -1,    36,    97,    37,    -1,    24,     7,    36,
      92,    37,    -1,    93,    -1,    96,    -1,    97,    -1,    91,
      34,    97,    -1,    -1,    91,    -1,    95,    -1,    94,    -1,
      90,    35,     7,    -1,     7,    -1,    90,    38,    97,    39,
      -1,    94,    36,    92,    37,    -1,    90,    -1,    98,    -1,
      99,    -1,    97,    41,    97,    -1,    97,    43,    97,    -1,
      97,    45,    97,    -1,    97,    46,    97,    -1,    97,    50,
      97,    -1,    97,    49,    97,    -1,    97,    51,    97,    -1,
      97,    47,    97,    -1,    97,    54,    97,    -1,    97,    56,
      97,    -1,    97,    53,    97,    -1,    97,    55,    97,    -1,
      48,    97,    -1,    41,    97,    -1,    43,    97,    -1,    93,
      52,    97,    -1,    93,    42,    -1,    42,    93,    -1,    93,
      44,    -1,    44,    93,    -1,    24,    72,   100,    -1,    24,
      72,   100,   101,    -1,    38,    97,    39,    -1,   100,    38,
      97,    39,    -1,    38,    39,    -1,   101,    38,    39,    -1,
      98,    -1,    96,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   105,   107,   108,   110,   111,   113,   115,
     116,   118,   119,   120,   122,   124,   125,   126,   127,   128,
     129,   131,   133,   134,   135,   136,   139,   140,   142,   143,
     149,   150,   151,   152,   154,   155,   157,   158,   160,   162,
     163,   165,   166,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   180,   181,   184,   185,   187,   188,
     190,   191,   193,   194,   195,   196,   197,   198,   200,   202,
     203,   205,   207,   208,   209,   210,   211,   212,   213,   215,
     216,   218,   219,   221,   222,   224,   225,   228,   230,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   253,   254,   255,
     256,   257,   260,   261,   264,   265,   267,   268,   270,   271
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT_CONST", "FLOAT_CONST",
  "STRING_CONST", "FLOAT_CONST_MANTISSA", "ID", "COMMENT", "SYN_ERR",
  "INT", "FLOAT", "IF", "ELSE", "WHILE", "FOR", "RETURN", "BREAK",
  "CONTINUE", "NULL_TOKEN", "TRUE", "FALSE", "THIS", "SUPER", "NEW",
  "CLASS", "EXTEND", "OPEN_BRACE", "CLOSE_BRACE", "SEMI_COLON", "STATIC",
  "PUBLIC", "PRIVATE", "BOOLEAN", "COMMA", "DOT", "OPEN_PARANTHESIS",
  "CLOSE_PARANTHESIS", "OPEN_SQR_BRACKET", "CLOSE_SQR_BRACKET", "VOID",
  "PLUS", "PLUS_PLUS", "MINUS", "MINUS_MINUS", "MULTIPLY", "DIVIDE",
  "NOT_EQUAL", "NOT", "OR", "AND", "EQUAL_EQUAL", "EQUAL", "LESS_EQUAL",
  "LESS", "GREATER_EQUAL", "GREATER", "EOF_TOKEN", "UPLUS", "UMINUS",
  "PREC_LOW", "PREC_HIGH", "$accept", "program", "class_decl_multi",
  "class_decl", "class_body", "class_body_elems", "class_body_decl",
  "field_decl", "modifier", "var_decl", "type", "variables", "variable",
  "method_decl", "constructor_decl", "formals", "formal_param", "block",
  "stmt_mult", "stmt", "else_part", "for_init", "for_condition",
  "for_var_update", "literal", "int_const", "float_const", "string_const",
  "primary", "arguments", "arguments_mult", "lhs", "field_access",
  "array_access", "method_invocation", "expr", "assign", "new_array",
  "new_array_expr", "sqr_brkt_1", "stmt_expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    64,    64,    65,    65,    66,    67,
      67,    68,    68,    68,    69,    70,    70,    70,    70,    70,
      70,    71,    72,    72,    72,    72,    73,    73,    74,    74,
      75,    75,    75,    75,    76,    76,    77,    77,    78,    79,
      79,    80,    80,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    86,    86,    86,    86,    87,    88,
      88,    89,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    92,    92,    93,    93,    94,    94,    95,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     3,     5,     3,     1,
       2,     1,     1,     1,     2,     0,     1,     2,     1,     2,
       1,     3,     1,     1,     1,     1,     1,     3,     1,     2,
       6,     7,     6,     7,     5,     6,     1,     3,     2,     3,
       2,     1,     2,     1,     2,     2,     2,     3,     5,     9,
       2,     1,     1,     6,     0,     2,     0,     1,     0,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     1,     1,     1,
       3,     0,     1,     1,     1,     3,     1,     4,     4,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     3,     2,     2,
       2,     2,     3,     4,     3,     4,     2,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     3,     4,     0,     1,     5,     0,    15,
       6,     0,    20,    16,    18,    15,     9,    11,     0,    12,
      13,     7,    17,    19,     8,    10,    25,    22,    23,    24,
       0,    14,     0,     0,     0,    28,     0,    26,    25,     0,
       0,     0,    36,     0,     0,     0,    29,    21,     0,     0,
      34,    28,    38,     0,     0,     0,     0,     0,     0,   116,
       0,    27,    68,    69,    71,    70,    86,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    73,    74,     0,    40,
      43,     0,     0,     0,    52,     0,    51,     0,    41,    72,
      62,    63,    64,     0,    77,    84,    83,    78,   118,     0,
      37,    35,    32,     0,    30,     0,   117,     0,     0,    56,
      86,     0,    46,     0,     0,     0,    89,    78,     0,    90,
      91,    44,    45,     0,     0,   109,   111,    39,    42,     0,
       0,   108,   110,     0,    81,    50,    33,    31,     0,     0,
       0,    57,    25,     0,   105,   106,   104,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,    75,    85,     0,   107,    82,     0,    79,     0,     0,
      58,     0,   112,    92,    93,    94,    95,    99,    97,    96,
      98,   102,   100,   103,   101,     0,    87,     0,    88,    54,
      48,     0,    59,     0,     0,   113,    76,    80,     0,    53,
      60,   114,     0,    55,     0,    61,   115,     0,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    15,    16,    17,    18,    84,
      85,    36,    37,    19,    20,    41,    42,    86,    87,    88,
     199,   140,   191,   204,    89,    90,    91,    92,   116,   165,
     166,    94,    95,    96,   117,   167,   119,   120,   172,    46,
      99
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -101
static const yytype_int16 yypact[] =
{
       4,    28,    39,     4,  -101,    59,  -101,  -101,    50,    20,
    -101,    16,  -101,    15,    34,    37,  -101,  -101,     9,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,    43,  -101,  -101,  -101,
      94,  -101,   107,    70,    88,   -34,   -21,  -101,  -101,    60,
     124,   -12,  -101,    95,   106,    97,   104,  -101,   124,   265,
    -101,   112,  -101,     7,    60,    60,    22,    60,    38,  -101,
     105,  -101,  -101,  -101,  -101,  -101,   146,   120,   123,   126,
     162,   131,   134,  -101,  -101,  -101,  -101,  -101,   163,  -101,
    -101,   219,   228,   228,  -101,   124,  -101,   307,  -101,  -101,
    -101,  -101,  -101,    36,   -37,   135,  -101,    -6,  -101,   143,
    -101,  -101,  -101,    60,  -101,    60,  -101,   219,   219,   383,
    -101,    51,  -101,   219,   219,   219,    36,  -101,   367,  -101,
    -101,  -101,  -101,   137,   387,    80,    80,  -101,  -101,   167,
     219,  -101,  -101,   219,   219,  -101,  -101,  -101,   407,   427,
     158,  -101,   137,   150,  -101,  -101,  -101,  -101,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,  -101,  -101,   445,   497,   141,   152,   497,   349,   349,
     219,   219,   161,    63,    63,  -101,  -101,    92,   513,   529,
      92,   545,   545,   545,   545,   153,  -101,   219,  -101,   187,
    -101,   172,   497,   463,   173,   104,  -101,   497,   349,  -101,
     383,  -101,   481,  -101,   165,  -101,  -101,   349,  -101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -101,   204,   197,  -101,   196,  -101,  -101,   195,
      -7,  -101,   -16,  -101,  -101,    86,   166,   -27,  -101,   -86,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,   -49,  -101,
      67,    58,  -101,  -101,   -46,   -60,   -43,  -101,  -101,    46,
    -100
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -120
static const yytype_int16 yytable[] =
{
      93,   128,    44,    97,    45,   131,    98,   132,    47,   141,
     118,    32,    50,    48,    38,   133,    26,    27,    28,    27,
      28,   124,    53,  -119,    52,    54,    40,   101,   102,     1,
     104,  -119,    61,    93,    93,     5,    40,    40,    93,     6,
      29,    97,    29,     9,    98,    22,    40,   138,   139,    30,
      12,    13,    14,   144,   145,   146,    53,    11,   142,   103,
      93,    27,    28,    97,    23,    24,    98,    12,    13,    14,
     163,   129,    53,   164,   130,   105,   136,    38,   137,    33,
      27,    28,   189,   190,    29,     8,     9,    49,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     205,    34,    38,    29,   143,    27,    28,    39,   150,   151,
     192,   193,   203,    38,    35,   -77,    27,    28,   -77,    93,
      93,   208,    97,    97,    43,    98,    98,   197,    29,    56,
      58,    51,    55,   148,   202,   149,    59,   150,   151,    29,
     125,   126,    60,    57,   106,   156,   157,   158,   159,    93,
      45,    93,    97,   -25,    97,    98,   107,    98,    93,   108,
     121,    97,   109,   122,    98,    62,    63,    64,    65,   110,
     123,   134,   135,   160,   162,   187,    62,    63,    64,    65,
     110,    73,    74,    75,    76,    77,   111,   170,   171,   188,
     196,   112,    73,    74,    75,    76,    77,   111,    81,   194,
     198,   200,   207,   113,    82,   114,    83,     7,    21,    81,
     115,    25,    59,    31,   113,    82,   114,    83,   195,   100,
       0,   115,    62,    63,    64,    65,   110,   185,     0,     0,
       0,    62,    63,    64,    65,   110,     0,     0,    73,    74,
      75,    76,    77,   111,     0,     0,     0,    73,    74,    75,
      76,    77,    78,     0,     0,    81,     0,     0,     0,     0,
     113,    82,   114,    83,    81,     0,     0,   115,    62,    63,
      64,    65,    66,     0,     0,    27,    28,    67,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
       0,     0,    49,    79,    80,     0,     0,     0,    29,     0,
       0,    81,     0,     0,     0,     0,     0,    82,     0,    83,
      62,    63,    64,    65,    66,     0,     0,    27,    28,    67,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,     0,     0,    49,   127,    80,     0,     0,     0,
      29,     0,     0,    81,     0,     0,     0,     0,     0,    82,
       0,    83,    62,    63,    64,    65,    66,     0,     0,    27,
      28,    67,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,     0,     0,    49,     0,    80,     0,
       0,     0,    29,     0,     0,    81,    62,    63,    64,    65,
     110,    82,     0,    83,     0,     0,   147,     0,     0,     0,
       0,     0,    73,    74,    75,    76,    77,    78,   148,     0,
     149,     0,   150,   151,   152,     0,   153,   154,   155,    81,
     156,   157,   158,   159,   161,    82,     0,    83,   148,     0,
     149,     0,   150,   151,   152,     0,   153,   154,   155,     0,
     156,   157,   158,   159,   168,     0,     0,     0,   148,     0,
     149,     0,   150,   151,   152,     0,   153,   154,   155,     0,
     156,   157,   158,   159,   169,     0,     0,     0,   148,     0,
     149,     0,   150,   151,   152,     0,   153,   154,   155,     0,
     156,   157,   158,   159,   186,     0,   148,     0,   149,     0,
     150,   151,   152,     0,   153,   154,   155,     0,   156,   157,
     158,   159,   201,     0,   148,     0,   149,     0,   150,   151,
     152,     0,   153,   154,   155,     0,   156,   157,   158,   159,
     206,     0,   148,     0,   149,     0,   150,   151,   152,     0,
     153,   154,   155,     0,   156,   157,   158,   159,   148,     0,
     149,     0,   150,   151,   152,     0,   153,   154,   155,     0,
     156,   157,   158,   159,   148,     0,   149,     0,   150,   151,
     152,     0,     0,   154,   155,     0,   156,   157,   158,   159,
     148,     0,   149,     0,   150,   151,   152,     0,     0,     0,
     155,     0,   156,   157,   158,   159,   148,     0,   149,     0,
     150,   151,     0,     0,     0,     0,     0,     0,  -120,  -120,
    -120,  -120
};

static const yytype_int16 yycheck[] =
{
      49,    87,    36,    49,    38,    42,    49,    44,    29,   109,
      70,    18,    39,    34,     7,    52,     7,    10,    11,    10,
      11,    81,    34,    29,    40,    37,    33,    54,    55,    25,
      57,    37,    48,    82,    83,     7,    43,    44,    87,     0,
      33,    87,    33,    27,    87,    30,    53,   107,   108,    40,
      30,    31,    32,   113,   114,   115,    34,     7,     7,    37,
     109,    10,    11,   109,    30,    28,   109,    30,    31,    32,
     130,    35,    34,   133,    38,    37,   103,     7,   105,    36,
      10,    11,   168,   169,    33,    26,    27,    27,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     200,     7,     7,    33,   111,    10,    11,    37,    45,    46,
     170,   171,   198,     7,     7,    35,    10,    11,    38,   168,
     169,   207,   168,   169,    36,   168,   169,   187,    33,    43,
      44,     7,    37,    41,   194,    43,    39,    45,    46,    33,
      82,    83,    38,    37,    39,    53,    54,    55,    56,   198,
      38,   200,   198,     7,   200,   198,    36,   200,   207,    36,
      29,   207,    36,    29,   207,     3,     4,     5,     6,     7,
       7,    36,    29,    36,     7,    34,     3,     4,     5,     6,
       7,    19,    20,    21,    22,    23,    24,    29,    38,    37,
      37,    29,    19,    20,    21,    22,    23,    24,    36,    38,
      13,    29,    37,    41,    42,    43,    44,     3,    11,    36,
      48,    15,    39,    18,    41,    42,    43,    44,   172,    53,
      -1,    48,     3,     4,     5,     6,     7,   160,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    36,    -1,    -1,    48,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    28,    29,    -1,    -1,    -1,    33,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    -1,    33,    -1,    -1,    36,     3,     4,     5,     6,
       7,    42,    -1,    44,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    41,    -1,
      43,    -1,    45,    46,    47,    -1,    49,    50,    51,    36,
      53,    54,    55,    56,    37,    42,    -1,    44,    41,    -1,
      43,    -1,    45,    46,    47,    -1,    49,    50,    51,    -1,
      53,    54,    55,    56,    37,    -1,    -1,    -1,    41,    -1,
      43,    -1,    45,    46,    47,    -1,    49,    50,    51,    -1,
      53,    54,    55,    56,    37,    -1,    -1,    -1,    41,    -1,
      43,    -1,    45,    46,    47,    -1,    49,    50,    51,    -1,
      53,    54,    55,    56,    39,    -1,    41,    -1,    43,    -1,
      45,    46,    47,    -1,    49,    50,    51,    -1,    53,    54,
      55,    56,    39,    -1,    41,    -1,    43,    -1,    45,    46,
      47,    -1,    49,    50,    51,    -1,    53,    54,    55,    56,
      39,    -1,    41,    -1,    43,    -1,    45,    46,    47,    -1,
      49,    50,    51,    -1,    53,    54,    55,    56,    41,    -1,
      43,    -1,    45,    46,    47,    -1,    49,    50,    51,    -1,
      53,    54,    55,    56,    41,    -1,    43,    -1,    45,    46,
      47,    -1,    -1,    50,    51,    -1,    53,    54,    55,    56,
      41,    -1,    43,    -1,    45,    46,    47,    -1,    -1,    -1,
      51,    -1,    53,    54,    55,    56,    41,    -1,    43,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    63,    64,    65,     7,     0,    65,    26,    27,
      66,     7,    30,    31,    32,    67,    68,    69,    70,    75,
      76,    66,    30,    30,    28,    68,     7,    10,    11,    33,
      40,    71,    72,    36,     7,     7,    73,    74,     7,    37,
      72,    77,    78,    36,    36,    38,   101,    29,    34,    27,
      79,     7,    74,    34,    37,    37,    77,    37,    77,    39,
      38,    74,     3,     4,     5,     6,     7,    12,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    28,
      29,    36,    42,    44,    71,    72,    79,    80,    81,    86,
      87,    88,    89,    90,    93,    94,    95,    96,    98,   102,
      78,    79,    79,    37,    79,    37,    39,    36,    36,    36,
       7,    24,    29,    41,    43,    48,    90,    96,    97,    98,
      99,    29,    29,     7,    97,    93,    93,    28,    81,    35,
      38,    42,    44,    52,    36,    29,    79,    79,    97,    97,
      83,   102,     7,    72,    97,    97,    97,    29,    41,    43,
      45,    46,    47,    49,    50,    51,    53,    54,    55,    56,
      36,    37,     7,    97,    97,    91,    92,    97,    37,    37,
      29,    38,   100,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    92,    39,    34,    37,    81,
      81,    84,    97,    97,    38,   101,    37,    97,    13,    82,
      29,    39,    97,    81,    85,   102,    39,    37,    81
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1737 "decafch.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 274 "decafch.y"


int line_no = 0;

int main(int argc, char *argv[]) {
	// open a file handle to a particular file:

	if(argc<2)
	{
		cout<<"Correct usage : ./decafch <input-file-name>\n";
		return -1;
	}

		

	FILE *myfile = fopen(argv[1], "r");
	filename = argv[1];
	// make sure it is valid:
	if (!myfile) {
		cout << "Could not open .decaf file!" << endl;
		return -1;
	}
	// set flex to read from it instead of defaulting to STDIN:
	yyin = myfile;
	
	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));

	if(err_count>0)
		cout<<"decaf : Error ["<<err_count<<"]"<<endl;
	else
		cout<<"decaf : "<<filename<<" successfully parsed"<<endl;

	
}
void
yyerror(const char *s)
{
	
	
	if(yylloc.first_line)
	{
		if(yylloc.first_column == yylloc.last_column)
			cout<<filename<<":"<<yylloc.first_line<<": "<<s<<endl;
		else
			cout<<filename<<":"<<yylloc.first_line<<"."<<yylloc.first_column<<"-"<<yylloc.last_line<<"."<<yylloc.last_column<<": "<<s<<endl;
		err_count++;
	}

  /*cout<<s<<" at line no. "<<line_num<<endl;
  cout<<yytext<<endl;
  if(yylloc.first_line)
    fprintf(stderr, "%d.%d-%d.%d: error: ", yylloc.first_line, yylloc.first_column,
	    yylloc.last_line, yylloc.last_column);
cout<<endl;*/

}

/*
void yyerror(const char *s) {
	//cout << "Parse error!  Message: " << s << endl;
	cout<<s<<" at line no. "<<line_num<<endl;
	cout<<"yylval.sval = "<<yylval.sval<<endl;
	//fprintf(stderr, "%s at line no %d\n", s, line_num);


	//cout << "Line_no = "<<yylineno<<endl;
	// might as well halt now:
	exit(-1);
}
*/

