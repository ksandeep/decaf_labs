
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
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "decaf.yy"

#include <stdio.h>
#include <iostream>

#include "Ast.hh"

using namespace std;

// Prototypes to lexer functions
extern void yyerror (const char *error);
extern int  yylex ();

// interface to the outside world
extern list<Entity *> *toplevel;  // list of top-level classes
extern EntityTable *global_symtab; // global symbol table
extern ClassEntity* objectclass;   // top-level "Object" class

// Global vars to simulate certain inherited attributes
Type *current_type;



/* Line 189 of yacc.c  */
#line 96 "decaf.tab.cc"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     TOK_BOOLEAN = 258,
     TOK_BREAK = 259,
     TOK_CLASS = 260,
     TOK_CONTINUE = 261,
     TOK_ELSE = 262,
     TOK_EXTENDS = 263,
     TOK_FALSE = 264,
     TOK_FLOAT = 265,
     TOK_FOR = 266,
     TOK_IF = 267,
     TOK_INT = 268,
     TOK_NEW = 269,
     TOK_NULL = 270,
     TOK_PRIVATE = 271,
     TOK_PUBLIC = 272,
     TOK_RETURN = 273,
     TOK_STATIC = 274,
     TOK_SUPER = 275,
     TOK_THIS = 276,
     TOK_TRUE = 277,
     TOK_VOID = 278,
     TOK_WHILE = 279,
     TOK_DO = 280,
     TOK_INT_CONST = 281,
     TOK_FLOAT_CONST = 282,
     TOK_STRING_CONST = 283,
     TOK_ID = 284,
     TOK_COMMA = 285,
     TOK_DOT = 286,
     TOK_SEMICOLON = 287,
     TOK_OPEN_SQ_BRACKET = 288,
     TOK_CLOSE_SQ_BRACKET = 289,
     TOK_OPEN_PAREN = 290,
     TOK_CLOSE_PAREN = 291,
     TOK_OPEN_BRACE = 292,
     TOK_CLOSE_BRACE = 293,
     TOK_PLUS = 294,
     TOK_MINUS = 295,
     TOK_MULTIPLY = 296,
     TOK_DIVIDE = 297,
     TOK_PLUS_PLUS = 298,
     TOK_MINUS_MINUS = 299,
     TOK_EQUAL = 300,
     TOK_AND = 301,
     TOK_OR = 302,
     TOK_NOT = 303,
     TOK_GREATER = 304,
     TOK_LESSER = 305,
     TOK_EQUAL_EQUAL = 306,
     TOK_NOT_EQUAL = 307,
     TOK_GREATER_OR_EQUAL = 308,
     TOK_LESSER_OR_EQUAL = 309,
     TOK_SYNTAX_ERROR = 310,
     TOK_RUNAWAY_STRING = 311
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 38 "decaf.yy"

        char* string_val;
        int   int_val;
        float float_val;
        char char_val;
	bool bool_val;
	Entity *entity;
	Type *type_val;
	Statement *statement;
	Expression *expression;
	list<Entity*> *entity_list;
	list<Statement *> *statement_list;
	list<Expression *> *expression_list;
	pair<bool, bool> *pair_val;



/* Line 214 of yacc.c  */
#line 206 "decaf.tab.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 218 "decaf.tab.cc"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   531

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNRULES -- Number of states.  */
#define YYNSTATES  209

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

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
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    10,    11,    12,    22,
      25,    26,    29,    31,    33,    35,    37,    43,    46,    48,
      50,    51,    53,    54,    55,    60,    62,    64,    66,    68,
      71,    74,    78,    79,    80,    87,    91,    95,    98,    99,
     100,   104,   108,   109,   110,   118,   119,   124,   127,   128,
     135,   141,   151,   155,   157,   160,   162,   165,   168,   170,
     173,   176,   177,   179,   180,   182,   183,   185,   187,   189,
     191,   193,   197,   203,   205,   207,   210,   211,   215,   216,
     220,   222,   227,   234,   239,   243,   247,   251,   255,   259,
     263,   267,   271,   275,   279,   283,   287,   290,   293,   296,
     298,   300,   305,   308,   310,   314,   317,   318,   321,   325,
     328,   331,   334,   337,   339,   341,   343,   345,   347,   349,
     351
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    59,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,     5,    29,    64,    61,    37,    62,    65,    63,
      38,    -1,     8,    29,    -1,    -1,    65,    66,    -1,    66,
      -1,    67,    -1,    77,    -1,    84,    -1,    68,    73,    29,
     103,    32,    -1,    69,    70,    -1,    17,    -1,    16,    -1,
      -1,    19,    -1,    -1,    -1,    73,    72,    74,    32,    -1,
      13,    -1,    10,    -1,     3,    -1,    29,    -1,    75,    76,
      -1,    29,   103,    -1,    30,    75,    76,    -1,    -1,    -1,
      79,    78,    35,    80,    36,    86,    -1,    68,    73,    29,
      -1,    68,    23,    29,    -1,    81,    83,    -1,    -1,    -1,
      73,    82,    75,    -1,    30,    81,    83,    -1,    -1,    -1,
      68,    29,    85,    35,    80,    36,    86,    -1,    -1,    37,
      87,    88,    38,    -1,    89,    88,    -1,    -1,    12,    35,
     100,    36,    89,    90,    -1,    24,    35,   100,    36,    89,
      -1,    11,    35,    91,    32,    92,    32,    91,    36,    89,
      -1,    18,   100,    32,    -1,    86,    -1,    93,    32,    -1,
      71,    -1,     4,    32,    -1,     6,    32,    -1,    32,    -1,
       1,    32,    -1,     7,    89,    -1,    -1,    93,    -1,    -1,
     100,    -1,    -1,   105,    -1,    99,    -1,   107,    -1,    21,
      -1,    20,    -1,    35,   100,    36,    -1,    14,    29,    35,
      95,    36,    -1,   106,    -1,    99,    -1,   100,    96,    -1,
      -1,    30,   100,    96,    -1,    -1,    94,    31,    29,    -1,
      29,    -1,    94,    33,   100,    34,    -1,    94,    31,    29,
      35,    95,    36,    -1,    29,    35,    95,    36,    -1,   100,
      41,   100,    -1,   100,    42,   100,    -1,   100,    39,   100,
      -1,   100,    40,   100,    -1,   100,    46,   100,    -1,   100,
      47,   100,    -1,   100,    51,   100,    -1,   100,    52,   100,
      -1,   100,    50,   100,    -1,   100,    49,   100,    -1,   100,
      54,   100,    -1,   100,    53,   100,    -1,    40,   100,    -1,
      39,   100,    -1,    48,   100,    -1,    94,    -1,   105,    -1,
      14,    73,   101,   103,    -1,   101,   102,    -1,   102,    -1,
      33,   100,    34,    -1,   104,   103,    -1,    -1,    33,    34,
      -1,   106,    45,   100,    -1,   106,    43,    -1,   106,    44,
      -1,    43,   106,    -1,    44,   106,    -1,    97,    -1,    98,
      -1,    26,    -1,    27,    -1,    28,    -1,    15,    -1,    22,
      -1,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    95,   100,   104,   117,   119,   103,   130,
     139,   142,   147,   154,   155,   156,   159,   173,   177,   178,
     179,   182,   183,   185,   185,   192,   193,   194,   195,   207,
     214,   229,   235,   240,   239,   249,   253,   260,   265,   268,
     268,   275,   280,   284,   283,   297,   296,   306,   310,   315,
     320,   325,   333,   337,   339,   341,   343,   345,   347,   349,
     355,   356,   360,   361,   365,   366,   369,   370,   378,   379,
     380,   381,   383,   390,   391,   394,   395,   398,   399,   403,
     404,   426,   430,   435,   440,   442,   444,   446,   448,   450,
     452,   454,   456,   458,   460,   462,   464,   466,   468,   470,
     471,   472,   478,   479,   482,   484,   485,   487,   491,   492,
     493,   494,   495,   499,   500,   502,   503,   504,   505,   506,
     507
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_BOOLEAN", "TOK_BREAK", "TOK_CLASS",
  "TOK_CONTINUE", "TOK_ELSE", "TOK_EXTENDS", "TOK_FALSE", "TOK_FLOAT",
  "TOK_FOR", "TOK_IF", "TOK_INT", "TOK_NEW", "TOK_NULL", "TOK_PRIVATE",
  "TOK_PUBLIC", "TOK_RETURN", "TOK_STATIC", "TOK_SUPER", "TOK_THIS",
  "TOK_TRUE", "TOK_VOID", "TOK_WHILE", "TOK_DO", "TOK_INT_CONST",
  "TOK_FLOAT_CONST", "TOK_STRING_CONST", "TOK_ID", "TOK_COMMA", "TOK_DOT",
  "TOK_SEMICOLON", "TOK_OPEN_SQ_BRACKET", "TOK_CLOSE_SQ_BRACKET",
  "TOK_OPEN_PAREN", "TOK_CLOSE_PAREN", "TOK_OPEN_BRACE", "TOK_CLOSE_BRACE",
  "TOK_PLUS", "TOK_MINUS", "TOK_MULTIPLY", "TOK_DIVIDE", "TOK_PLUS_PLUS",
  "TOK_MINUS_MINUS", "TOK_EQUAL", "TOK_AND", "TOK_OR", "TOK_NOT",
  "TOK_GREATER", "TOK_LESSER", "TOK_EQUAL_EQUAL", "TOK_NOT_EQUAL",
  "TOK_GREATER_OR_EQUAL", "TOK_LESSER_OR_EQUAL", "TOK_SYNTAX_ERROR",
  "TOK_RUNAWAY_STRING", "$accept", "Program", "ClassDeclarations",
  "ClassDeclaration", "@1", "$@2", "$@3", "ExtendsOpt", "ClassBodyDecls",
  "ClassBodyDecl", "FieldDecl", "Modifier", "VisibilityOpt", "StaticOpt",
  "VarDecl", "$@4", "Type", "Variables", "Variable", "VariablesCommaList",
  "MethodDecl", "$@5", "MethodHead", "FormalsOpt", "FormalParam", "$@6",
  "FormalParamCommaList", "ConstructorDecl", "$@7", "Block", "$@8",
  "StmtStar", "Stmt", "OptElsePart", "StmtExprOpt", "ExprOpt", "StmtExpr",
  "Primary", "ArgumentListOpt", "CommaExprStar", "FieldAccess",
  "ArrayAccess", "MethodInvocation", "Expr", "DimExprPlus", "DimExpr",
  "DimStar", "Dim", "Assignment", "LeftHandSide", "Literal", 0
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
     305,   306,   307,   308,   309,   310,   311
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    61,    62,    63,    60,    64,
      64,    65,    65,    66,    66,    66,    67,    68,    69,    69,
      69,    70,    70,    72,    71,    73,    73,    73,    73,    74,
      75,    76,    76,    78,    77,    79,    79,    80,    80,    82,
      81,    83,    83,    85,    84,    87,    86,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    91,    91,    92,    92,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    96,    96,    97,
      97,    98,    99,    99,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   101,   101,   102,   103,   103,   104,   105,   105,
     105,   105,   105,   106,   106,   107,   107,   107,   107,   107,
     107
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     0,     0,     0,     9,     2,
       0,     2,     1,     1,     1,     1,     5,     2,     1,     1,
       0,     1,     0,     0,     4,     1,     1,     1,     1,     2,
       2,     3,     0,     0,     6,     3,     3,     2,     0,     0,
       3,     3,     0,     0,     7,     0,     4,     2,     0,     6,
       5,     9,     3,     1,     2,     1,     2,     2,     1,     2,
       2,     0,     1,     0,     1,     0,     1,     1,     1,     1,
       1,     3,     5,     1,     1,     2,     0,     3,     0,     3,
       1,     4,     6,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     1,
       1,     4,     2,     1,     3,     2,     0,     2,     3,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,     0,     3,    10,     0,     5,     9,
       0,     6,    20,    19,    18,    20,    12,    13,     0,    22,
      14,    33,    15,     0,    11,    27,    26,    25,     0,    28,
       0,    21,    17,     0,     8,    36,     0,    35,    38,    38,
       0,     0,   106,    28,    39,     0,    42,     0,   107,    16,
     105,     0,     0,     0,    37,     0,   106,    40,    45,    34,
      42,    44,    30,     0,    41,     0,     0,     0,   120,     0,
       0,     0,   118,     0,    70,    69,   119,     0,   115,   116,
     117,    80,    58,     0,     0,     0,    55,    23,    53,     0,
       0,     0,     0,   113,   114,    67,    66,    73,    68,    59,
      56,    57,    63,     0,     0,     0,    80,     0,     0,     0,
      99,    74,     0,   100,     0,    76,     0,   111,   112,     0,
      46,    47,    54,     0,     0,   109,   110,     0,     0,    62,
       0,    76,    28,     0,    97,    96,    98,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    71,     0,    32,    79,     0,   108,    65,
       0,     0,     0,   106,   103,    86,    87,    84,    85,    88,
      89,    93,    92,    90,    91,    95,    94,     0,    83,     0,
      75,    24,     0,    29,    76,    81,     0,    64,    61,    72,
       0,     0,   102,   101,    50,    78,    32,     0,    63,     0,
      49,   104,    77,    31,    82,     0,    60,     0,    51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,    10,    12,    23,     8,    15,    16,
      17,    18,    19,    32,    86,   119,    87,   154,    57,   183,
      20,    33,    21,    45,    46,    51,    54,    22,    36,    88,
      63,    89,    90,   200,   128,   186,    91,   110,   151,   180,
      93,    94,   111,   152,   163,   164,    41,    42,   113,    97,
      98
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -152
static const yytype_int16 yypact[] =
{
    -152,    40,     3,  -152,    21,  -152,    50,    25,  -152,  -152,
      23,  -152,    46,  -152,  -152,    -5,  -152,  -152,     7,    45,
    -152,  -152,  -152,    38,  -152,  -152,  -152,  -152,    48,    44,
      51,  -152,  -152,    47,  -152,  -152,    49,    33,    15,    15,
      52,    53,    54,  -152,  -152,    56,    59,    57,  -152,  -152,
    -152,    65,    58,    15,  -152,    58,    54,  -152,  -152,  -152,
      59,  -152,  -152,   148,  -152,    64,    66,    68,  -152,    82,
      84,    91,  -152,   249,  -152,  -152,  -152,    86,  -152,  -152,
    -152,   -22,  -152,   249,   291,   291,  -152,  -152,  -152,    43,
     148,    92,   -17,  -152,  -152,     1,  -152,     8,  -152,  -152,
    -152,  -152,   281,   249,    90,    32,    93,   249,   249,   249,
     -17,  -152,   308,  -152,   249,   249,   369,    24,    24,    65,
    -152,  -152,  -152,    98,   249,  -152,  -152,   249,    97,  -152,
     388,   249,    90,    99,  -152,  -152,  -152,  -152,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     407,    94,   292,  -152,   101,   104,    96,   329,   423,   249,
     192,   105,   249,   109,  -152,    28,    28,  -152,  -152,   455,
     439,   461,   461,   477,   477,   461,   461,   192,  -152,   249,
    -152,  -152,    65,  -152,   249,  -152,   113,   423,    76,  -152,
     350,   217,  -152,  -152,  -152,   292,   104,   111,   281,   192,
    -152,  -152,  -152,  -152,  -152,   114,  -152,   192,  -152
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,   138,
    -152,  -152,  -152,  -152,  -152,  -152,   -15,  -152,  -114,   -40,
    -152,  -152,  -152,   125,   112,  -152,   107,  -152,  -152,    -6,
    -152,    81,  -151,  -152,   -25,  -152,   -83,   -63,  -125,   -16,
    -152,  -152,   -61,   -36,  -152,    18,   -41,  -152,   -59,   -10,
    -152
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -107
static const yytype_int16 yytable[] =
{
      92,    50,    95,    30,    96,   155,   161,   -28,     4,   188,
      25,    13,    14,   115,   123,    62,   124,    26,    25,   129,
      27,    92,    92,    44,    44,    26,   194,    92,    27,    95,
      28,    96,   -74,    -7,   -74,    25,    29,   112,    44,    92,
       3,    95,    26,    96,    43,    27,    59,   116,   206,    61,
       6,   125,   126,   127,     9,   -73,   208,   -73,     7,   197,
      11,   132,    13,    14,    31,  -106,    40,   130,   196,   140,
     141,   134,   135,   136,   117,   118,    34,    35,   150,   -43,
      37,   120,    38,   199,    39,    49,    48,    40,   157,    53,
     133,   158,    52,    55,    56,    58,    99,    92,   100,    95,
     101,    96,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,    92,   129,    95,   102,    96,   103,
     104,   114,   193,   187,   122,   131,   190,   156,   115,   159,
     178,   184,   162,   181,   182,    92,    92,    95,    95,    96,
      96,   189,   191,   195,    92,   198,    95,   204,    96,    65,
     207,    25,    66,    24,    67,   190,   203,    68,    26,    69,
      70,    27,    71,    72,    47,    60,    73,    64,    74,    75,
      76,   121,    77,   205,    78,    79,    80,    81,     0,   202,
      82,   192,     0,    83,     0,    58,   -48,     0,     0,     0,
       0,    84,    85,    65,     0,    25,    66,     0,    67,     0,
       0,    68,    26,    69,    70,    27,    71,    72,     0,     0,
      73,     0,    74,    75,    76,     0,    77,     0,    78,    79,
      80,    81,     0,     0,    82,     0,    68,    83,     0,    58,
       0,   105,    72,     0,     0,    84,    85,    74,    75,    76,
       0,     0,     0,    78,    79,    80,   106,     0,     0,     0,
       0,    48,    83,     0,     0,     0,   107,   108,    68,     0,
      84,    85,     0,   105,    72,   109,     0,     0,     0,    74,
      75,    76,     0,     0,     0,    78,    79,    80,   106,     0,
       0,     0,     0,     0,    83,     0,     0,     0,   107,   108,
      68,     0,    84,    85,     0,    71,    72,   109,     0,     0,
      68,    74,    75,    76,     0,    71,    72,    78,    79,    80,
     106,    74,    75,    76,     0,     0,    83,    78,    79,    80,
     106,     0,   179,     0,    84,    85,    83,     0,     0,     0,
       0,   138,   139,   140,   141,     0,     0,     0,   142,   143,
     137,   144,   145,   146,   147,   148,   149,   138,   139,   140,
     141,     0,     0,     0,   142,   143,     0,   144,   145,   146,
     147,   148,   149,   185,     0,     0,     0,     0,   138,   139,
     140,   141,     0,     0,     0,   142,   143,     0,   144,   145,
     146,   147,   148,   149,   201,     0,     0,     0,     0,   138,
     139,   140,   141,     0,     0,     0,   142,   143,     0,   144,
     145,   146,   147,   148,   149,   153,     0,     0,   138,   139,
     140,   141,     0,     0,     0,   142,   143,     0,   144,   145,
     146,   147,   148,   149,   160,     0,     0,   138,   139,   140,
     141,     0,     0,     0,   142,   143,     0,   144,   145,   146,
     147,   148,   149,   177,     0,     0,   138,   139,   140,   141,
       0,     0,     0,   142,   143,     0,   144,   145,   146,   147,
     148,   149,   138,   139,   140,   141,     0,     0,     0,   142,
     143,     0,   144,   145,   146,   147,   148,   149,   138,   139,
     140,   141,     0,     0,     0,   142,     0,     0,   144,   145,
     146,   147,   148,   149,   138,   139,   140,   141,     0,     0,
     138,   139,   140,   141,   144,   145,   146,   147,   148,   149,
    -107,  -107,     0,     0,  -107,  -107,   138,   139,   140,   141,
       0,     0,     0,     0,     0,     0,   144,   145,     0,     0,
     148,   149
};

static const yytype_int16 yycheck[] =
{
      63,    42,    63,    18,    63,   119,   131,    29,     5,   160,
       3,    16,    17,    35,    31,    56,    33,    10,     3,   102,
      13,    84,    85,    38,    39,    10,   177,    90,    13,    90,
      23,    90,    31,    38,    33,     3,    29,    73,    53,   102,
       0,   102,    10,   102,    29,    13,    52,    83,   199,    55,
      29,    43,    44,    45,    29,    31,   207,    33,     8,   184,
      37,    29,    16,    17,    19,    32,    33,   103,   182,    41,
      42,   107,   108,   109,    84,    85,    38,    29,   114,    35,
      29,    38,    35,     7,    35,    32,    34,    33,   124,    30,
     105,   127,    36,    36,    29,    37,    32,   160,    32,   160,
      32,   160,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   177,   198,   177,    35,   177,    35,
      29,    35,   163,   159,    32,    35,   162,    29,    35,    32,
      36,    35,    33,    32,    30,   198,   199,   198,   199,   198,
     199,    36,    33,   179,   207,    32,   207,    36,   207,     1,
      36,     3,     4,    15,     6,   191,   196,     9,    10,    11,
      12,    13,    14,    15,    39,    53,    18,    60,    20,    21,
      22,    90,    24,   198,    26,    27,    28,    29,    -1,   195,
      32,   163,    -1,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,     1,    -1,     3,     4,    -1,     6,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      18,    -1,    20,    21,    22,    -1,    24,    -1,    26,    27,
      28,    29,    -1,    -1,    32,    -1,     9,    35,    -1,    37,
      -1,    14,    15,    -1,    -1,    43,    44,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    39,    40,     9,    -1,
      43,    44,    -1,    14,    15,    48,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    40,
       9,    -1,    43,    44,    -1,    14,    15,    48,    -1,    -1,
       9,    20,    21,    22,    -1,    14,    15,    26,    27,    28,
      29,    20,    21,    22,    -1,    -1,    35,    26,    27,    28,
      29,    -1,    30,    -1,    43,    44,    35,    -1,    -1,    -1,
      -1,    39,    40,    41,    42,    -1,    -1,    -1,    46,    47,
      32,    49,    50,    51,    52,    53,    54,    39,    40,    41,
      42,    -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    34,    -1,    -1,    -1,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    34,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    -1,    -1,    -1,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    36,    -1,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    36,    -1,    -1,    39,    40,    41,    42,
      -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,    52,
      53,    54,    39,    40,    41,    42,    -1,    -1,    -1,    46,
      47,    -1,    49,    50,    51,    52,    53,    54,    39,    40,
      41,    42,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    39,    40,    41,    42,    -1,    -1,
      39,    40,    41,    42,    49,    50,    51,    52,    53,    54,
      49,    50,    -1,    -1,    53,    54,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      53,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    59,     0,     5,    60,    29,     8,    64,    29,
      61,    37,    62,    16,    17,    65,    66,    67,    68,    69,
      77,    79,    84,    63,    66,     3,    10,    13,    23,    29,
      73,    19,    70,    78,    38,    29,    85,    29,    35,    35,
      33,   103,   104,    29,    73,    80,    81,    80,    34,    32,
     103,    82,    36,    30,    83,    36,    29,    75,    37,    86,
      81,    86,   103,    87,    83,     1,     4,     6,     9,    11,
      12,    14,    15,    18,    20,    21,    22,    24,    26,    27,
      28,    29,    32,    35,    43,    44,    71,    73,    86,    88,
      89,    93,    94,    97,    98,    99,   105,   106,   107,    32,
      32,    32,    35,    35,    29,    14,    29,    39,    40,    48,
      94,    99,   100,   105,    35,    35,   100,   106,   106,    72,
      38,    88,    32,    31,    33,    43,    44,    45,    91,    93,
     100,    35,    29,    73,   100,   100,   100,    32,    39,    40,
      41,    42,    46,    47,    49,    50,    51,    52,    53,    54,
     100,    95,   100,    36,    74,    75,    29,   100,   100,    32,
      36,    95,    33,   101,   102,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,    36,    36,    30,
      96,    32,    30,    76,    35,    34,    92,   100,    89,    36,
     100,    33,   102,   103,    89,   100,    75,    95,    32,     7,
      90,    34,    96,    76,    36,    91,    89,    36,    89
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 89 "decaf.yy"
    {
	toplevel = (yyvsp[(1) - (1)].entity_list);
	;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 96 "decaf.yy"
    {
	  (yyvsp[(1) - (2)].entity_list)->push_back((yyvsp[(2) - (2)].entity));
	  (yyval.entity_list)=(yyvsp[(1) - (2)].entity_list);
	  ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 100 "decaf.yy"
    {(yyval.entity_list)=new list<Entity*>();;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 104 "decaf.yy"
    {
		   bool flag;
	     	   Entity *cd = 
		     	    global_symtab->find_entity((yyvsp[(2) - (3)].string_val), CLASS_ENTITY, &flag);
	     	   if (cd != NULL) {// Already present
	     	      yyerror("Duplicate class declaration");
	           }
	     	   else { // create a new entity for this field
	     	   	cd = new ClassEntity((yyvsp[(2) - (3)].string_val), (ClassEntity*)(yyvsp[(3) - (3)].entity), new list<Entity*>());
		   }
		   (yyval.entity) = cd;
		;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 117 "decaf.yy"
    {global_symtab->enter_block();;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 119 "decaf.yy"
    {
		   ((ClassEntity *)(yyvsp[(4) - (7)].entity))->set_class_members((yyvsp[(7) - (7)].entity_list));
		;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 123 "decaf.yy"
    {
		   global_symtab->leave_block();
		   (yyval.entity) = (yyvsp[(4) - (9)].entity);
		;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 130 "decaf.yy"
    {
	     bool flag;  	     
	     Entity* e = global_symtab->find_entity((yyvsp[(2) - (2)].string_val), CLASS_ENTITY, &flag);
	     if (e == NULL) {
	        cerr << "Superclass " << (yyvsp[(2) - (2)].string_val) << " not found." << endl;
		(yyval.entity) = objectclass;
	     }   else
	       (yyval.entity) = e;
	  ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 139 "decaf.yy"
    { (yyval.entity) = objectclass; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 143 "decaf.yy"
    { 
	    (yyvsp[(1) - (2)].entity_list)->push_back((yyvsp[(2) - (2)].entity));
	    (yyval.entity_list) = (yyvsp[(1) - (2)].entity_list);
	  ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 148 "decaf.yy"
    {
	    (yyval.entity_list) = new list<Entity*>(); (yyval.entity_list)->push_back((yyvsp[(1) - (1)].entity));
	  ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 154 "decaf.yy"
    {(yyval.entity) = (yyvsp[(1) - (1)].entity);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 155 "decaf.yy"
    {(yyval.entity) = (yyvsp[(1) - (1)].entity);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 156 "decaf.yy"
    {(yyval.entity) = (yyvsp[(1) - (1)].entity);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 160 "decaf.yy"
    {
	     bool flag;
	     Entity *fd = global_symtab->find_entity((yyvsp[(3) - (5)].string_val), FIELD_ENTITY, &flag);
	     if ((fd != NULL) && flag) {// in the same scope, so error
	     	yyerror("Duplicate field declaration");
	     }
	     else { // create a new entity for this field
	     	fd = new FieldEntity((yyvsp[(3) - (5)].string_val), (yyvsp[(1) - (5)].pair_val)->first, (yyvsp[(1) - (5)].pair_val)->second, 
	   	      	    (yyvsp[(2) - (5)].type_val), (yyvsp[(4) - (5)].int_val));
	     }
	     (yyval.entity) = fd;
	   ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 173 "decaf.yy"
    {(yyval.pair_val) = new pair<bool, bool>((yyvsp[(1) - (2)].bool_val), (yyvsp[(2) - (2)].bool_val));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 177 "decaf.yy"
    {(yyval.bool_val) = true;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 178 "decaf.yy"
    {(yyval.bool_val) = false;;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 179 "decaf.yy"
    {(yyval.bool_val) = true;;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 182 "decaf.yy"
    {(yyval.bool_val) = true;;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 183 "decaf.yy"
    {(yyval.bool_val) = false;;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 185 "decaf.yy"
    {current_type = (yyvsp[(1) - (1)].type_val);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 186 "decaf.yy"
    {
	   (yyval.entity_list) = (yyvsp[(3) - (4)].entity_list);
	   current_type =  NULL;
	 ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 192 "decaf.yy"
    {(yyval.type_val) = new IntType();;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 193 "decaf.yy"
    {(yyval.type_val) = new FloatType();;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 194 "decaf.yy"
    {(yyval.type_val) = new BooleanType();;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 196 "decaf.yy"
    {
		bool flag;
		Entity *e = global_symtab->find_entity((yyvsp[(1) - (1)].string_val), CLASS_ENTITY, &flag);
		if (e == NULL) {
		   yyerror("Class type not found");
		   (yyval.type_val) = new ErrorType();
		}  else
		   (yyval.type_val) = new InstanceType((ClassEntity*)e);
	  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 208 "decaf.yy"
    {
	    (yyvsp[(2) - (2)].entity_list)->push_front((yyvsp[(1) - (2)].entity));
	    (yyval.entity_list) = (yyvsp[(2) - (2)].entity_list);
	  ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 215 "decaf.yy"
    {
	     bool flag;
	     Entity *vd = global_symtab->find_entity((yyvsp[(1) - (2)].string_val), VARIABLE_ENTITY, &flag);
	     if ((vd != NULL) && flag) {// in the same scope, so error
	     	yyerror("Duplicate variable declaration");
	     }
	     else { // create a new entity for this field
	     	vd = new VariableEntity((yyvsp[(1) - (2)].string_val), current_type, (yyvsp[(2) - (2)].int_val));
	     }
	     (yyval.entity) = vd;
	  ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 230 "decaf.yy"
    {
	    (yyvsp[(3) - (3)].entity_list)->push_front((yyvsp[(2) - (3)].entity));
	    (yyval.entity_list) = (yyvsp[(3) - (3)].entity_list);
	  ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 235 "decaf.yy"
    {(yyval.entity_list) = new list<Entity*>();;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 240 "decaf.yy"
    {global_symtab->enter_block();;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 242 "decaf.yy"
    {
	    (yyval.entity)=(yyvsp[(1) - (6)].entity);
	    ((MethodEntity *) (yyval.entity))->set_formal_params((yyvsp[(4) - (6)].entity_list));
	    ((MethodEntity *) (yyval.entity))->set_method_body((yyvsp[(6) - (6)].statement));
	    global_symtab->leave_block();
	  ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 250 "decaf.yy"
    { // no duplicate checks for method declaration!
	      (yyval.entity) = new MethodEntity((yyvsp[(3) - (3)].string_val), (yyvsp[(1) - (3)].pair_val)->first, (yyvsp[(1) - (3)].pair_val)->second, (yyvsp[(2) - (3)].type_val), NULL, NULL);
	    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 254 "decaf.yy"
    {
	      (yyval.entity) = new MethodEntity((yyvsp[(3) - (3)].string_val), (yyvsp[(1) - (3)].pair_val)->first, (yyvsp[(1) - (3)].pair_val)->second, new VoidType(), NULL, NULL);
	    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 261 "decaf.yy"
    {
	    (yyval.entity_list)=(yyvsp[(2) - (2)].entity_list);
	    (yyval.entity_list)->push_front((yyvsp[(1) - (2)].entity));
	  ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 265 "decaf.yy"
    {(yyval.entity_list) = new list<Entity*>();;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 268 "decaf.yy"
    {current_type = (yyvsp[(1) - (1)].type_val);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 269 "decaf.yy"
    {
	       (yyval.entity)=(yyvsp[(3) - (3)].entity);
	       current_type = NULL;
	     ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 276 "decaf.yy"
    {
	    (yyval.entity_list)=(yyvsp[(3) - (3)].entity_list);
	    (yyval.entity_list)->push_front((yyvsp[(2) - (3)].entity));
	  ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 280 "decaf.yy"
    { (yyval.entity_list)= new list<Entity*>();;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 284 "decaf.yy"
    {global_symtab->enter_block();;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 286 "decaf.yy"
    {
	   (yyval.entity)=new ConstructorEntity((yyvsp[(2) - (7)].string_val), (yyvsp[(1) - (7)].pair_val)->first, (yyvsp[(5) - (7)].entity_list), (yyvsp[(7) - (7)].statement));
	   global_symtab->leave_block();
	 ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 297 "decaf.yy"
    {global_symtab->enter_block();;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 299 "decaf.yy"
    {
	     (yyval.statement) = new BlockStatement((yyvsp[(3) - (4)].statement_list));
	     global_symtab->leave_block();
	  ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 306 "decaf.yy"
    {
	    (yyval.statement_list)=(yyvsp[(2) - (2)].statement_list);
	    (yyval.statement_list)->push_front((yyvsp[(1) - (2)].statement));
	  ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 310 "decaf.yy"
    {
	    (yyval.statement_list)= new list<Statement*>();
	;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 316 "decaf.yy"
    {
	    (yyval.statement) = new IfStatement((yyvsp[(3) - (6)].expression), (yyvsp[(5) - (6)].statement), (yyvsp[(6) - (6)].statement));
	  ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 321 "decaf.yy"
    {
	    (yyval.statement) = new WhileStatement((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].statement));
	  ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 329 "decaf.yy"
    {
	    (yyval.statement) = new ForStatement((yyvsp[(3) - (9)].statement), (yyvsp[(5) - (9)].expression), (yyvsp[(7) - (9)].statement), (yyvsp[(9) - (9)].statement));
	  ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 334 "decaf.yy"
    {
	    (yyval.statement) = new ReturnStatement((yyvsp[(2) - (3)].expression));
	  ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 338 "decaf.yy"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 340 "decaf.yy"
    {(yyval.statement) = (yyvsp[(1) - (2)].statement);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 342 "decaf.yy"
    {(yyval.statement) = new DeclStatement((yyvsp[(1) - (1)].entity_list));;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 344 "decaf.yy"
    {(yyval.statement) = new BreakStatement();;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 346 "decaf.yy"
    {(yyval.statement) = new ContinueStatement();;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 348 "decaf.yy"
    {(yyval.statement) = new SkipStatement();;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 350 "decaf.yy"
    {(yyval.statement) = new SkipStatement(); // fake a skip statement on error
	  ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 355 "decaf.yy"
    {(yyval.statement) = (yyvsp[(2) - (2)].statement);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 356 "decaf.yy"
    {(yyval.statement) = new SkipStatement();;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 360 "decaf.yy"
    {(yyval.statement) = (yyvsp[(1) - (1)].statement);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 361 "decaf.yy"
    {(yyval.statement) = new SkipStatement();;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 365 "decaf.yy"
    {(yyval.expression) = (yyvsp[(1) - (1)].expression);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 366 "decaf.yy"
    {(yyval.expression) = new BooleanConstant(true);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 369 "decaf.yy"
    {(yyval.statement) = new ExprStatement((yyvsp[(1) - (1)].expression));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 370 "decaf.yy"
    {(yyval.statement) = new ExprStatement((yyvsp[(1) - (1)].expression));;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 378 "decaf.yy"
    {(yyval.expression) = (yyvsp[(1) - (1)].expression);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 379 "decaf.yy"
    {(yyval.expression) = new ThisExpression();;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 380 "decaf.yy"
    {(yyval.expression) = new SuperExpression();;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 382 "decaf.yy"
    {(yyval.expression) = (yyvsp[(2) - (3)].expression);;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 384 "decaf.yy"
    {bool flag;
			 ClassEntity *e = (ClassEntity*)global_symtab->find_entity((yyvsp[(2) - (5)].string_val), CLASS_ENTITY, &flag);
			 if (e == NULL)
			   yyerror("Class type not found");
			 (yyval.expression) = new NewInstance(e, (yyvsp[(4) - (5)].expression_list));
			;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 390 "decaf.yy"
    {(yyval.expression) = (yyvsp[(1) - (1)].expression);;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 391 "decaf.yy"
    {(yyval.expression) = (yyvsp[(1) - (1)].expression);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 394 "decaf.yy"
    {(yyval.expression_list) = (yyvsp[(2) - (2)].expression_list);  (yyval.expression_list)->push_front((yyvsp[(1) - (2)].expression));;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 395 "decaf.yy"
    {(yyval.expression_list) = new list<Expression*>();;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 398 "decaf.yy"
    {(yyval.expression_list) = (yyvsp[(3) - (3)].expression_list);  (yyval.expression_list)->push_front((yyvsp[(2) - (3)].expression));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 399 "decaf.yy"
    {(yyval.expression_list) = new list<Expression*>();;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 403 "decaf.yy"
    {(yyval.expression) = new FieldAccess((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].string_val));;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 405 "decaf.yy"
    { // resolve this name
	    bool flag;
	    Entity *e = global_symtab->find_entity((yyvsp[(1) - (1)].string_val), VARIABLE_ENTITY, &flag);
	    if (e == NULL) {
	       // there is no variable with this name; find a field
	       e = global_symtab->find_entity((yyvsp[(1) - (1)].string_val), FIELD_ENTITY, &flag);
	       if (e == NULL) {
	       	  // there is no variable or field with this name; find a class
	          e = global_symtab->find_entity((yyvsp[(1) - (1)].string_val), CLASS_ENTITY, &flag);
		  if (e == NULL) {
		  // this identifier is not in scope; possibly inherited;
		  // so create a field expression of the form this.ID
		     (yyval.expression) = new FieldAccess(new ThisExpression(), (yyvsp[(1) - (1)].string_val));
		  } else
		     (yyval.expression) = new IdExpression(e); // e is a class entity
	       }  else
		 (yyval.expression) = new FieldAccess(new ThisExpression(), (yyvsp[(1) - (1)].string_val)); // field entity
  	    } else
	    (yyval.expression) = new IdExpression(e); // e is a variable entity
	  ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 427 "decaf.yy"
    {(yyval.expression) = new ArrayAccess((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression));;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 431 "decaf.yy"
    {
	 (yyval.expression) = new MethodInvocation((yyvsp[(1) - (6)].expression), (yyvsp[(3) - (6)].string_val), (yyvsp[(5) - (6)].expression_list));
	;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 436 "decaf.yy"
    {
	 (yyval.expression) = new MethodInvocation(new ThisExpression(), (yyvsp[(1) - (4)].string_val), (yyvsp[(3) - (4)].expression_list));
	;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 441 "decaf.yy"
    {(yyval.expression) = new BinaryExpression(MUL, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 443 "decaf.yy"
    {(yyval.expression) = new BinaryExpression(DIV, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 445 "decaf.yy"
    {(yyval.expression) = new BinaryExpression(ADD, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 447 "decaf.yy"
    {(yyval.expression) = new BinaryExpression(SUB, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 449 "decaf.yy"
    {(yyval.expression) = new BinaryExpression(AND, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 451 "decaf.yy"
    {(yyval.expression) = new BinaryExpression(OR, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 453 "decaf.yy"
    {(yyval.expression) = new BinaryExpression(EQ, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 455 "decaf.yy"
    {(yyval.expression) = new BinaryExpression(NEQ, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 457 "decaf.yy"
    {(yyval.expression) = new BinaryExpression(LT, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 459 "decaf.yy"
    {(yyval.expression) = new BinaryExpression(GT, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 461 "decaf.yy"
    {(yyval.expression) = new BinaryExpression(LEQ, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 463 "decaf.yy"
    {(yyval.expression) = new BinaryExpression(GEQ, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 465 "decaf.yy"
    {(yyval.expression) = new UnaryExpression(UMINUS, (yyvsp[(2) - (2)].expression));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 467 "decaf.yy"
    {(yyval.expression) = (yyvsp[(2) - (2)].expression);;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 469 "decaf.yy"
    {(yyval.expression) = new UnaryExpression(NEG, (yyvsp[(2) - (2)].expression));;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 470 "decaf.yy"
    {(yyval.expression) = (yyvsp[(1) - (1)].expression);;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 471 "decaf.yy"
    {(yyval.expression) = (yyvsp[(1) - (1)].expression);;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 473 "decaf.yy"
    {(yyval.expression) = new NewArrayInstance((yyvsp[(2) - (4)].type_val), (yyvsp[(3) - (4)].expression_list)->size() + (yyvsp[(4) - (4)].int_val), (yyvsp[(3) - (4)].expression_list));
	  ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 478 "decaf.yy"
    {(yyval.expression_list)=(yyvsp[(1) - (2)].expression_list); (yyval.expression_list)->push_back((yyvsp[(2) - (2)].expression));;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 479 "decaf.yy"
    {(yyval.expression_list) = new list<Expression *>; (yyval.expression_list)->push_back((yyvsp[(1) - (1)].expression));;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 482 "decaf.yy"
    {(yyval.expression) = (yyvsp[(2) - (3)].expression);;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 484 "decaf.yy"
    {(yyval.int_val) = (yyvsp[(2) - (2)].int_val)+1;;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 485 "decaf.yy"
    {(yyval.int_val)=0;;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 491 "decaf.yy"
    {(yyval.expression) = new AssignExpression((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 492 "decaf.yy"
    {(yyval.expression) = new AutoExpression(POST_INCR, (yyvsp[(1) - (2)].expression));;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 493 "decaf.yy"
    {(yyval.expression) = new AutoExpression(POST_DECR, (yyvsp[(1) - (2)].expression));;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 494 "decaf.yy"
    {(yyval.expression) = new AutoExpression(PRE_INCR, (yyvsp[(2) - (2)].expression));;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 495 "decaf.yy"
    {(yyval.expression) = new AutoExpression(PRE_DECR, (yyvsp[(2) - (2)].expression));;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 499 "decaf.yy"
    {(yyval.expression) = (yyvsp[(1) - (1)].expression);;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 500 "decaf.yy"
    {(yyval.expression) = (yyvsp[(1) - (1)].expression);;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 502 "decaf.yy"
    {(yyval.expression) = new IntegerConstant((yyvsp[(1) - (1)].int_val));;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 503 "decaf.yy"
    {(yyval.expression) = new FloatConstant((yyvsp[(1) - (1)].float_val));;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 504 "decaf.yy"
    {(yyval.expression) = new StringConstant((yyvsp[(1) - (1)].string_val));;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 505 "decaf.yy"
    {(yyval.expression) = new NullExpression();;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 506 "decaf.yy"
    {(yyval.expression) = new BooleanConstant(true);;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 507 "decaf.yy"
    {(yyval.expression) = new BooleanConstant(false);;}
    break;



/* Line 1455 of yacc.c  */
#line 2650 "decaf.tab.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 509 "decaf.yy"


