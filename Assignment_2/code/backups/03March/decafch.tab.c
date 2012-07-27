
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
extern const char *yytext;
char *filename;


/* Line 189 of yacc.c  */
#line 91 "decafch.tab.c"

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
     UPLUS = 312,
     UMINUS = 313,
     PREC_LOW = 314,
     PREC_HIGH = 315
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 26 "decafch.y"

	int ival;
	float fval;
	char *sval;
	char *cmtval;
	char *errval;
	char *strval;



/* Line 214 of yacc.c  */
#line 198 "decafch.tab.c"
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
#line 223 "decafch.tab.c"

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   553

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNRULES -- Number of states.  */
#define YYNSTATES  210

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    13,    17,    23,
      27,    29,    32,    34,    36,    38,    41,    42,    44,    47,
      49,    52,    54,    58,    60,    62,    64,    66,    68,    72,
      75,    76,    80,    87,    95,   102,   110,   116,   123,   125,
     129,   132,   136,   138,   141,   143,   146,   149,   152,   156,
     162,   172,   175,   177,   179,   186,   187,   191,   192,   194,
     195,   197,   198,   200,   202,   204,   206,   208,   210,   212,
     214,   216,   218,   220,   222,   224,   226,   230,   236,   238,
     240,   242,   246,   247,   249,   251,   253,   257,   259,   264,
     269,   271,   273,   275,   279,   283,   287,   291,   295,   299,
     303,   307,   311,   315,   319,   323,   326,   329,   332,   336,
     339,   342,   345,   348,   352,   357,   361,   366,   369,   373,
     375
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    63,    -1,    -1,    64,    -1,    65,    -1,
      64,    65,    -1,    25,     7,    66,    -1,    25,     7,    26,
       7,    66,    -1,    27,    67,    28,    -1,    68,    -1,    67,
      68,    -1,    69,    -1,    76,    -1,    77,    -1,    70,    71,
      -1,    -1,    31,    -1,    31,    30,    -1,    32,    -1,    32,
      30,    -1,    30,    -1,    72,    73,    29,    -1,    10,    -1,
      11,    -1,    33,    -1,     7,    -1,    74,    -1,    73,    34,
      74,    -1,     7,    75,    -1,    -1,    75,    38,    39,    -1,
      70,    72,     7,    36,    37,    80,    -1,    70,    72,     7,
      36,    78,    37,    80,    -1,    70,    40,     7,    36,    37,
      80,    -1,    70,    40,     7,    36,    78,    37,    80,    -1,
      70,     7,    36,    37,    80,    -1,    70,     7,    36,    78,
      37,    80,    -1,    79,    -1,    78,    34,    79,    -1,    72,
      74,    -1,    27,    81,    28,    -1,    82,    -1,    81,    82,
      -1,    29,    -1,    17,    29,    -1,    18,    29,    -1,    16,
      29,    -1,    16,    98,    29,    -1,    14,    36,    98,    37,
      82,    -1,    15,    36,    84,    29,    85,    29,    86,    37,
      82,    -1,   103,    29,    -1,    80,    -1,    71,    -1,    12,
      36,    98,    37,    82,    83,    -1,    -1,    83,    13,    82,
      -1,    -1,   103,    -1,    -1,    98,    -1,    -1,   103,    -1,
      88,    -1,    89,    -1,    90,    -1,    19,    -1,    20,    -1,
      21,    -1,     3,    -1,     4,    -1,     6,    -1,     5,    -1,
      87,    -1,    22,    -1,    23,    -1,    36,    98,    37,    -1,
      24,     7,    36,    93,    37,    -1,    94,    -1,    97,    -1,
      98,    -1,    92,    34,    98,    -1,    -1,    92,    -1,    96,
      -1,    95,    -1,    91,    35,     7,    -1,     7,    -1,    91,
      38,    98,    39,    -1,    95,    36,    93,    37,    -1,    91,
      -1,    99,    -1,   100,    -1,    98,    41,    98,    -1,    98,
      43,    98,    -1,    98,    45,    98,    -1,    98,    46,    98,
      -1,    98,    50,    98,    -1,    98,    49,    98,    -1,    98,
      51,    98,    -1,    98,    47,    98,    -1,    98,    54,    98,
      -1,    98,    56,    98,    -1,    98,    53,    98,    -1,    98,
      55,    98,    -1,    48,    98,    -1,    41,    98,    -1,    43,
      98,    -1,    94,    52,    98,    -1,    94,    42,    -1,    42,
      94,    -1,    94,    44,    -1,    44,    94,    -1,    24,    72,
     101,    -1,    24,    72,   101,   102,    -1,    38,    98,    39,
      -1,   101,    38,    98,    39,    -1,    38,    39,    -1,   102,
      38,    39,    -1,    99,    -1,    97,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   111,   112,   114,   115,   117,   118,   120,
     122,   123,   125,   126,   127,   129,   131,   132,   133,   134,
     135,   136,   138,   140,   141,   142,   143,   146,   147,   149,
     151,   152,   154,   155,   156,   157,   159,   160,   172,   173,
     175,   177,   179,   180,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   194,   195,   198,   199,   201,
     202,   204,   205,   207,   208,   209,   210,   211,   212,   214,
     216,   217,   219,   221,   222,   223,   224,   225,   226,   227,
     229,   230,   232,   233,   235,   236,   238,   239,   242,   244,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   267,   268,
     269,   270,   271,   274,   275,   278,   279,   281,   282,   284,
     285
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
  "LESS", "GREATER_EQUAL", "GREATER", "UPLUS", "UMINUS", "PREC_LOW",
  "PREC_HIGH", "$accept", "start", "program", "class_decl_multi",
  "class_decl", "class_body", "class_body_elems", "class_body_decl",
  "field_decl", "modifier", "var_decl", "type", "variables", "variable",
  "sqr_brkt_mult", "method_decl", "constructor_decl", "formals",
  "formal_param", "block", "stmt_mult", "stmt", "else_part", "for_init",
  "for_condition", "for_var_update", "literal", "int_const", "float_const",
  "string_const", "primary", "arguments", "arguments_mult", "lhs",
  "field_access", "array_access", "method_invocation", "expr", "assign",
  "new_array", "new_array_expr", "sqr_brkt_1", "stmt_expr", 0
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
     315
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    68,    68,    69,    70,    70,    70,    70,
      70,    70,    71,    72,    72,    72,    72,    73,    73,    74,
      75,    75,    76,    76,    76,    76,    77,    77,    78,    78,
      79,    80,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    88,
      89,    89,    90,    91,    91,    91,    91,    91,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
      99,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     3,     5,     3,
       1,     2,     1,     1,     1,     2,     0,     1,     2,     1,
       2,     1,     3,     1,     1,     1,     1,     1,     3,     2,
       0,     3,     6,     7,     6,     7,     5,     6,     1,     3,
       2,     3,     1,     2,     1,     2,     2,     2,     3,     5,
       9,     2,     1,     1,     6,     0,     3,     0,     1,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     1,     1,
       1,     3,     0,     1,     1,     1,     3,     1,     4,     4,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     3,     2,
       2,     2,     2,     3,     4,     3,     4,     2,     3,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     4,     5,     0,     1,     6,     0,
      16,     7,     0,    21,    17,    19,    16,    10,    12,     0,
      13,    14,     8,    18,    20,     9,    11,    26,    23,    24,
      25,     0,    15,     0,     0,     0,    30,     0,    27,    26,
       0,     0,     0,    38,     0,     0,    29,    22,     0,     0,
      36,    30,    40,     0,     0,     0,     0,     0,     0,     0,
      28,    69,    70,    72,    71,    87,     0,     0,     0,     0,
       0,     0,    66,    67,    68,    74,    75,     0,    44,     0,
       0,     0,    53,     0,    52,     0,    42,    73,    63,    64,
      65,     0,    78,    85,    84,    79,   119,     0,    39,    37,
      34,     0,    32,     0,    31,     0,     0,    57,    87,     0,
      47,     0,     0,     0,    90,    79,     0,    91,    92,    45,
      46,     0,     0,   110,   112,    41,    43,     0,     0,   109,
     111,     0,    82,    51,    35,    33,     0,     0,     0,    58,
      26,     0,   106,   107,   105,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,    76,
      86,     0,   108,    83,     0,    80,     0,     0,    59,     0,
     113,    93,    94,    95,    96,   100,    98,    97,    99,   103,
     101,   104,   102,     0,    88,     0,    89,    55,    49,     0,
      60,     0,     0,   114,    77,    81,    54,    61,   115,   117,
       0,     0,     0,     0,    62,   116,   118,    56,     0,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    11,    16,    17,    18,    19,
      82,    83,    37,    38,    46,    20,    21,    42,    43,    84,
      85,    86,   196,   138,   189,   203,    87,    88,    89,    90,
     114,   163,   164,    92,    93,    94,   115,   165,   117,   118,
     170,   193,    97
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -99
static const yytype_int16 yypact[] =
{
     -19,     7,    18,   -99,   -19,   -99,    20,   -99,   -99,    13,
      50,   -99,    -5,   -99,    -2,     5,    33,   -99,   -99,    19,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,     1,   -99,   -99,
     -99,    34,   -99,    61,    46,     3,    40,   -13,   -99,   -99,
      74,    96,    11,   -99,    67,   327,    93,   -99,    96,   306,
     -99,   -99,   -99,   129,    74,    74,    38,    74,    68,    98,
     -99,   -99,   -99,   -99,   -99,   128,   106,   107,   108,   161,
     116,   117,   -99,   -99,   -99,   -99,   -99,   144,   -99,   218,
     227,   227,   -99,    96,   -99,   264,   -99,   -99,   -99,   -99,
     -99,    32,   -41,   118,   -99,   -24,   -99,   127,   -99,   -99,
     -99,    74,   -99,    74,   -99,   218,   218,   105,   -99,   336,
     -99,   218,   218,   218,    32,   -99,   312,   -99,   -99,   -99,
     -99,   122,   333,    78,    78,   -99,   -99,   153,   218,   -99,
     -99,   218,   218,   -99,   -99,   -99,   353,   373,   140,   -99,
     122,   132,   -99,   -99,   -99,   -99,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   -99,
     -99,   391,   443,   137,   135,   443,   306,   306,   218,   218,
     136,     9,     9,   -99,   -99,   491,   459,   475,   491,   497,
     497,   497,   497,   149,   -99,   218,   -99,   -99,   -99,   158,
     443,   409,   172,   150,   -99,   443,   160,   105,   -99,   -99,
     427,   159,   306,   152,   -99,   -99,   -99,   -99,   306,   -99
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   -99,   195,   188,   -99,   185,   -99,   -99,
     187,   -11,   -99,   -29,   -99,   -99,   -99,    70,   154,   -30,
     -99,   -70,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -49,   -99,    52,    53,   -99,   -99,   -47,   -62,   -45,   -99,
     -99,   -99,   -98
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -121
static const yytype_int16 yytable[] =
{
      91,   129,    95,   130,    96,  -120,     1,   116,    33,   139,
      50,   131,    52,  -120,     6,   126,    47,   122,     7,    60,
      12,    48,    10,    41,    99,   100,    27,   102,    23,    28,
      29,    91,    91,    41,    41,    24,    91,    34,    95,    44,
      96,    35,    41,   136,   137,    53,     9,    10,    54,   142,
     143,   144,    30,    39,   148,   149,    28,    29,    91,    31,
      95,    25,    96,    13,    14,    15,   161,   127,    36,   162,
     128,   134,    53,   135,    39,   101,    45,    28,    29,    30,
      13,    14,    15,    40,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   187,   188,   141,   204,
      30,    49,    53,    51,    55,   103,   190,   191,    61,    62,
      63,    64,   108,   -78,    56,    58,   -78,    91,    91,    95,
      95,    96,    96,   195,    72,    73,    74,    75,    76,    77,
     200,    59,   207,   123,   124,   -26,    39,   104,   209,    28,
      29,    79,   105,   106,   107,   119,   120,    80,    91,    81,
      95,   121,    96,    91,   132,    95,   133,    96,   158,    91,
     160,    95,    30,    96,    61,    62,    63,    64,   108,   168,
     169,   185,   186,   202,   192,    61,    62,    63,    64,   108,
      72,    73,    74,    75,    76,   109,   194,   197,   201,   208,
     110,    72,    73,    74,    75,    76,   109,    79,   206,     8,
      22,    26,   111,    80,   112,    81,    32,    98,    79,   113,
     183,   199,     0,   111,    80,   112,    81,     0,     0,     0,
     113,    61,    62,    63,    64,   108,     0,     0,     0,     0,
      61,    62,    63,    64,   108,     0,     0,    72,    73,    74,
      75,    76,   109,     0,     0,     0,    72,    73,    74,    75,
      76,    77,     0,     0,    79,     0,     0,     0,     0,   111,
      80,   112,    81,    79,     0,     0,   113,    61,    62,    63,
      64,    65,     0,     0,    28,    29,    66,     0,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,     0,
       0,    49,   125,    78,     0,     0,     0,    30,     0,     0,
      79,     0,     0,     0,     0,     0,    80,     0,    81,    61,
      62,    63,    64,    65,     0,     0,    28,    29,    66,     0,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,    49,    39,    78,     0,    28,    29,    30,
       0,   145,    79,   140,     0,     0,    28,    29,    80,     0,
      81,     0,     0,   146,     0,   147,     0,   148,   149,   150,
      30,   151,   152,   153,    57,   154,   155,   156,   157,    30,
     159,     0,     0,     0,   146,     0,   147,     0,   148,   149,
     150,     0,   151,   152,   153,     0,   154,   155,   156,   157,
     166,     0,     0,     0,   146,     0,   147,     0,   148,   149,
     150,     0,   151,   152,   153,     0,   154,   155,   156,   157,
     167,     0,     0,     0,   146,     0,   147,     0,   148,   149,
     150,     0,   151,   152,   153,     0,   154,   155,   156,   157,
     184,     0,   146,     0,   147,     0,   148,   149,   150,     0,
     151,   152,   153,     0,   154,   155,   156,   157,   198,     0,
     146,     0,   147,     0,   148,   149,   150,     0,   151,   152,
     153,     0,   154,   155,   156,   157,   205,     0,   146,     0,
     147,     0,   148,   149,   150,     0,   151,   152,   153,     0,
     154,   155,   156,   157,   146,     0,   147,     0,   148,   149,
     150,     0,   151,   152,   153,     0,   154,   155,   156,   157,
     146,     0,   147,     0,   148,   149,   150,     0,     0,   152,
     153,     0,   154,   155,   156,   157,   146,     0,   147,     0,
     148,   149,   150,     0,     0,     0,   153,     0,   154,   155,
     156,   157,   146,     0,   147,     0,   148,   149,   146,     0,
     147,     0,   148,   149,   154,   155,   156,   157,     0,     0,
    -121,  -121,  -121,  -121
};

static const yytype_int16 yycheck[] =
{
      49,    42,    49,    44,    49,    29,    25,    69,    19,   107,
      40,    52,    41,    37,     7,    85,    29,    79,     0,    48,
       7,    34,    27,    34,    54,    55,     7,    57,    30,    10,
      11,    80,    81,    44,    45,    30,    85,    36,    85,    36,
      85,     7,    53,   105,   106,    34,    26,    27,    37,   111,
     112,   113,    33,     7,    45,    46,    10,    11,   107,    40,
     107,    28,   107,    30,    31,    32,   128,    35,     7,   131,
      38,   101,    34,   103,     7,    37,    36,    10,    11,    33,
      30,    31,    32,    37,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   166,   167,   109,   197,
      33,    27,    34,     7,    37,    37,   168,   169,     3,     4,
       5,     6,     7,    35,    44,    45,    38,   166,   167,   166,
     167,   166,   167,   185,    19,    20,    21,    22,    23,    24,
     192,    38,   202,    80,    81,     7,     7,    39,   208,    10,
      11,    36,    36,    36,    36,    29,    29,    42,   197,    44,
     197,     7,   197,   202,    36,   202,    29,   202,    36,   208,
       7,   208,    33,   208,     3,     4,     5,     6,     7,    29,
      38,    34,    37,    13,    38,     3,     4,     5,     6,     7,
      19,    20,    21,    22,    23,    24,    37,    29,    38,    37,
      29,    19,    20,    21,    22,    23,    24,    36,    39,     4,
      12,    16,    41,    42,    43,    44,    19,    53,    36,    48,
     158,    39,    -1,    41,    42,    43,    44,    -1,    -1,    -1,
      48,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,
      42,    43,    44,    36,    -1,    -1,    48,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,     7,    29,    -1,    10,    11,    33,
      -1,    29,    36,     7,    -1,    -1,    10,    11,    42,    -1,
      44,    -1,    -1,    41,    -1,    43,    -1,    45,    46,    47,
      33,    49,    50,    51,    37,    53,    54,    55,    56,    33,
      37,    -1,    -1,    -1,    41,    -1,    43,    -1,    45,    46,
      47,    -1,    49,    50,    51,    -1,    53,    54,    55,    56,
      37,    -1,    -1,    -1,    41,    -1,    43,    -1,    45,    46,
      47,    -1,    49,    50,    51,    -1,    53,    54,    55,    56,
      37,    -1,    -1,    -1,    41,    -1,    43,    -1,    45,    46,
      47,    -1,    49,    50,    51,    -1,    53,    54,    55,    56,
      39,    -1,    41,    -1,    43,    -1,    45,    46,    47,    -1,
      49,    50,    51,    -1,    53,    54,    55,    56,    39,    -1,
      41,    -1,    43,    -1,    45,    46,    47,    -1,    49,    50,
      51,    -1,    53,    54,    55,    56,    39,    -1,    41,    -1,
      43,    -1,    45,    46,    47,    -1,    49,    50,    51,    -1,
      53,    54,    55,    56,    41,    -1,    43,    -1,    45,    46,
      47,    -1,    49,    50,    51,    -1,    53,    54,    55,    56,
      41,    -1,    43,    -1,    45,    46,    47,    -1,    -1,    50,
      51,    -1,    53,    54,    55,    56,    41,    -1,    43,    -1,
      45,    46,    47,    -1,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    41,    -1,    43,    -1,    45,    46,    41,    -1,
      43,    -1,    45,    46,    53,    54,    55,    56,    -1,    -1,
      53,    54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    62,    63,    64,    65,     7,     0,    65,    26,
      27,    66,     7,    30,    31,    32,    67,    68,    69,    70,
      76,    77,    66,    30,    30,    28,    68,     7,    10,    11,
      33,    40,    71,    72,    36,     7,     7,    73,    74,     7,
      37,    72,    78,    79,    36,    36,    75,    29,    34,    27,
      80,     7,    74,    34,    37,    37,    78,    37,    78,    38,
      74,     3,     4,     5,     6,     7,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    29,    36,
      42,    44,    71,    72,    80,    81,    82,    87,    88,    89,
      90,    91,    94,    95,    96,    97,    99,   103,    79,    80,
      80,    37,    80,    37,    39,    36,    36,    36,     7,    24,
      29,    41,    43,    48,    91,    97,    98,    99,   100,    29,
      29,     7,    98,    94,    94,    28,    82,    35,    38,    42,
      44,    52,    36,    29,    80,    80,    98,    98,    84,   103,
       7,    72,    98,    98,    98,    29,    41,    43,    45,    46,
      47,    49,    50,    51,    53,    54,    55,    56,    36,    37,
       7,    98,    98,    92,    93,    98,    37,    37,    29,    38,
     101,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    93,    39,    34,    37,    82,    82,    85,
      98,    98,    38,   102,    37,    98,    83,    29,    39,    39,
      98,    38,    13,    86,   103,    39,    39,    82,    37,    82
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
        case 2:

/* Line 1455 of yacc.c  */
#line 109 "decafch.y"
    {cout<<"Program successfully parsed!\n"<<endl;;}
    break;



/* Line 1455 of yacc.c  */
#line 1736 "decafch.tab.c"
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
#line 288 "decafch.y"


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

