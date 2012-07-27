/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "decaf.yy"

#include <stdio.h>
#include <iostream>

#include "Ast.hh"

using namespace std;

// Prototypes to lexer functions
extern void yyerror (const char *error);
extern int  yylex ();

int type;
Type *t;
int dim;
ClassEntity *c;
bool is_formal_param = false;
bool is_func_enter = false;
char errmsg[2056];
MethodEntity *method;

// interface to the outside world
extern list<Entity *> *toplevel;  // list of top-level classes
extern EntityTable *global_symtab; // global symbol table




/* Line 268 of yacc.c  */
#line 100 "decaf.tab.cc"

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

/* Line 293 of yacc.c  */
#line 45 "decaf.yy"

        char* string_val;
        int   int_val;
        float float_val;
        char char_val;
	bool bool_val;
	bool bool_arr_2[2];
	Type * type;
	Entity* entity;	
	list<Entity*>* entity_list;	
	Expression *expr;
	list<Expression*> *expr_list;
	Statement *stmt;
	list<Statement*> *stmt_list;
	VariableEntity* var_entity;	
	struct mh 
	{
		bool bool_arr_2[2];
		char *name;
		Type *type;
	} mhead;
	struct vinfo
	{
		char *name;
		int dim;
	}varinfo;



/* Line 293 of yacc.c  */
#line 222 "decaf.tab.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 234 "decaf.tab.cc"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   511

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNRULES -- Number of states.  */
#define YYNSTATES  210

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
       0,     0,     3,     5,     8,     9,    10,    18,    21,    22,
      25,    27,    29,    31,    33,    39,    42,    44,    46,    47,
      49,    50,    51,    56,    58,    60,    62,    64,    67,    70,
      74,    75,    76,    77,    78,    87,    91,    95,    98,    99,
     100,   101,   102,   108,   112,   113,   120,   121,   126,   129,
     130,   137,   143,   153,   157,   159,   162,   164,   167,   170,
     172,   175,   178,   179,   181,   182,   184,   185,   187,   189,
     191,   193,   195,   199,   205,   207,   209,   212,   213,   217,
     218,   222,   224,   229,   236,   241,   245,   249,   253,   257,
     261,   265,   269,   273,   277,   281,   285,   289,   292,   295,
     298,   300,   302,   307,   310,   312,   316,   319,   320,   323,
     327,   330,   333,   336,   339,   341,   343,   345,   347,   349,
     351,   353
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    59,    -1,    59,    60,    -1,    -1,    -1,
       5,    29,    62,    37,    61,    63,    38,    -1,     8,    29,
      -1,    -1,    63,    64,    -1,    64,    -1,    65,    -1,    75,
      -1,    86,    -1,    66,    71,    29,   104,    32,    -1,    67,
      68,    -1,    17,    -1,    16,    -1,    -1,    19,    -1,    -1,
      -1,    71,    70,    72,    32,    -1,    13,    -1,    10,    -1,
       3,    -1,    29,    -1,    73,    74,    -1,    29,   104,    -1,
      30,    73,    74,    -1,    -1,    -1,    -1,    -1,    79,    76,
      35,    77,    80,    36,    78,    87,    -1,    66,    71,    29,
      -1,    66,    23,    29,    -1,    81,    85,    -1,    -1,    -1,
      -1,    -1,    82,    71,    83,    73,    84,    -1,    30,    81,
      85,    -1,    -1,    66,    29,    35,    80,    36,    87,    -1,
      -1,    37,    88,    89,    38,    -1,    90,    89,    -1,    -1,
      12,    35,   101,    36,    90,    91,    -1,    24,    35,   101,
      36,    90,    -1,    11,    35,    92,    32,    93,    32,    92,
      36,    90,    -1,    18,   101,    32,    -1,    87,    -1,    94,
      32,    -1,    69,    -1,     4,    32,    -1,     6,    32,    -1,
      32,    -1,     1,    32,    -1,     7,    90,    -1,    -1,    94,
      -1,    -1,   101,    -1,    -1,   106,    -1,   100,    -1,   108,
      -1,    21,    -1,    20,    -1,    35,   101,    36,    -1,    14,
      29,    35,    96,    36,    -1,   107,    -1,   100,    -1,   101,
      97,    -1,    -1,    30,   101,    97,    -1,    -1,    95,    31,
      29,    -1,    29,    -1,    95,    33,   101,    34,    -1,    95,
      31,    29,    35,    96,    36,    -1,    29,    35,    96,    36,
      -1,   101,    41,   101,    -1,   101,    42,   101,    -1,   101,
      39,   101,    -1,   101,    40,   101,    -1,   101,    46,   101,
      -1,   101,    47,   101,    -1,   101,    51,   101,    -1,   101,
      52,   101,    -1,   101,    50,   101,    -1,   101,    49,   101,
      -1,   101,    54,   101,    -1,   101,    53,   101,    -1,    40,
     101,    -1,    39,   101,    -1,    48,   101,    -1,    95,    -1,
     106,    -1,    14,    71,   102,   104,    -1,   102,   103,    -1,
     103,    -1,    33,   101,    34,    -1,   105,   104,    -1,    -1,
      33,    34,    -1,   107,    45,   101,    -1,   107,    43,    -1,
     107,    44,    -1,    43,   107,    -1,    44,   107,    -1,    98,
      -1,    99,    -1,    26,    -1,    27,    -1,    28,    -1,    15,
      -1,    22,    -1,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   162,   162,   174,   175,   181,   179,   214,   226,   230,
     235,   244,   245,   246,   249,   266,   271,   272,   273,   277,
     278,   281,   281,   284,   285,   286,   287,   304,   311,   330,
     338,   345,   349,   354,   344,   365,   373,   384,   386,   392,
     392,   392,   392,   399,   400,   405,   417,   416,   430,   431,
     435,   439,   443,   451,   452,   453,   454,   455,   456,   457,
     458,   467,   468,   472,   473,   477,   478,   481,   482,   490,
     491,   492,   493,   495,   511,   515,   521,   522,   525,   531,
     537,   540,   583,   590,   594,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,   611,   612,   613,   615,   617,
     619,   620,   621,   629,   630,   636,   639,   640,   644,   648,
     649,   650,   651,   652,   656,   657,   660,   661,   662,   663,
     664,   665
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
  "ClassDeclaration", "$@1", "ExtendsOpt", "ClassBodyDecls",
  "ClassBodyDecl", "FieldDecl", "Modifier", "VisibilityOpt", "StaticOpt",
  "VarDecl", "$@2", "Type", "Variables", "Variable", "VariablesCommaList",
  "MethodDecl", "$@3", "$@4", "$@5", "MethodHead", "FormalsOpt",
  "FormalParam", "$@6", "$@7", "$@8", "FormalParamCommaList",
  "ConstructorDecl", "Block", "$@9", "StmtStar", "Stmt", "OptElsePart",
  "StmtExprOpt", "ExprOpt", "StmtExpr", "Primary", "ArgumentListOpt",
  "CommaExprStar", "FieldAccess", "ArrayAccess", "MethodInvocation",
  "Expr", "DimExprPlus", "DimExpr", "DimStar", "Dim", "Assignment",
  "LeftHandSide", "Literal", 0
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
       0,    57,    58,    59,    59,    61,    60,    62,    62,    63,
      63,    64,    64,    64,    65,    66,    67,    67,    67,    68,
      68,    70,    69,    71,    71,    71,    71,    72,    73,    74,
      74,    76,    77,    78,    75,    79,    79,    80,    80,    82,
      83,    84,    81,    85,    85,    86,    88,    87,    89,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    92,    92,    93,    93,    94,    94,    95,
      95,    95,    95,    95,    95,    95,    96,    96,    97,    97,
      98,    98,    99,   100,   100,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   103,   104,   104,   105,   106,
     106,   106,   106,   106,   107,   107,   108,   108,   108,   108,
     108,   108
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     0,     7,     2,     0,     2,
       1,     1,     1,     1,     5,     2,     1,     1,     0,     1,
       0,     0,     4,     1,     1,     1,     1,     2,     2,     3,
       0,     0,     0,     0,     8,     3,     3,     2,     0,     0,
       0,     0,     5,     3,     0,     6,     0,     4,     2,     0,
       6,     5,     9,     3,     1,     2,     1,     2,     2,     1,
       2,     2,     0,     1,     0,     1,     0,     1,     1,     1,
       1,     1,     3,     5,     1,     1,     2,     0,     3,     0,
       3,     1,     4,     6,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       1,     1,     4,     2,     1,     3,     2,     0,     2,     3,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,     0,     3,     8,     0,     0,     7,
       5,    18,    17,    16,    18,    10,    11,     0,    20,    12,
      31,    13,     6,     9,    25,    24,    23,     0,    26,     0,
      19,    15,     0,    36,    39,    35,    32,     0,    44,     0,
       0,     0,   107,    39,     0,    39,    37,    26,    40,   108,
      14,   106,     0,    46,    45,    44,     0,    33,     0,    43,
     107,    41,     0,     0,     0,     0,   121,     0,     0,     0,
     119,     0,    71,    70,   120,     0,   116,   117,   118,    81,
      59,     0,     0,     0,    56,    21,    54,     0,     0,     0,
       0,   114,   115,    68,    67,    74,    69,    28,    42,    34,
      60,    57,    58,    64,     0,     0,     0,    81,     0,     0,
       0,   100,    75,     0,   101,     0,    77,     0,   112,   113,
       0,    47,    48,    55,     0,     0,   110,   111,     0,     0,
      63,     0,    77,    26,     0,    98,    97,    99,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    72,     0,    30,    80,     0,   109,
      66,     0,     0,     0,   107,   104,    87,    88,    85,    86,
      89,    90,    94,    93,    91,    92,    96,    95,     0,    84,
       0,    76,    22,     0,    27,    77,    82,     0,    65,    62,
      73,     0,     0,   103,   102,    51,    79,    30,     0,    64,
       0,    50,   105,    78,    29,    83,     0,    61,     0,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,    11,     8,    14,    15,    16,    17,
      18,    31,    84,   120,    85,   155,    61,   184,    19,    32,
      43,    62,    20,    37,    38,    39,    56,    98,    46,    21,
      86,    58,    87,    88,   201,   129,   187,    89,   111,   152,
     181,    91,    92,   112,   153,   164,   165,    41,    42,   114,
      95,    96
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -153
static const yytype_int16 yypact[] =
{
    -153,    12,     3,  -153,    -6,  -153,    46,    15,    39,  -153,
    -153,    45,  -153,  -153,    -3,  -153,  -153,     8,    55,  -153,
    -153,  -153,  -153,  -153,  -153,  -153,  -153,    54,    53,    60,
    -153,  -153,    56,  -153,    57,     6,  -153,    62,    66,     7,
      58,    68,    69,    57,    67,  -153,  -153,  -153,  -153,  -153,
    -153,  -153,    70,  -153,  -153,    66,    61,  -153,   154,  -153,
      69,  -153,    67,    89,    98,    99,  -153,   112,   113,   104,
    -153,   255,  -153,  -153,  -153,   116,  -153,  -153,  -153,   -13,
    -153,   255,   287,   287,  -153,  -153,  -153,    96,   154,   121,
      -4,  -153,  -153,    22,  -153,    -2,  -153,  -153,  -153,  -153,
    -153,  -153,  -153,    37,   255,   124,    72,   127,   255,   255,
     255,    -4,  -153,   304,  -153,   255,   255,   365,    36,    36,
      61,  -153,  -153,  -153,   141,   255,  -153,  -153,   255,   139,
    -153,   384,   255,   124,   123,  -153,  -153,  -153,  -153,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   403,   137,   288,  -153,   145,   149,   150,   325,   419,
     255,   198,   148,   255,   155,  -153,    29,    29,  -153,  -153,
      86,   435,   451,   451,   457,   457,   451,   451,   198,  -153,
     255,  -153,  -153,    61,  -153,   255,  -153,   158,   419,   180,
    -153,   346,   223,  -153,  -153,  -153,   288,   149,   157,    37,
     198,  -153,  -153,  -153,  -153,  -153,   159,  -153,   198,  -153
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,  -153,  -153,  -153,  -153,  -153,   182,  -153,  -153,
    -153,  -153,  -153,  -153,   -11,  -153,  -115,     9,  -153,  -153,
    -153,  -153,  -153,   151,   160,  -153,  -153,  -153,   162,  -153,
     -29,  -153,   115,  -152,  -153,     1,  -153,  -100,   -58,  -125,
      18,  -153,  -153,   -56,   -31,  -153,    51,   -41,  -153,   -54,
       4,  -153
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -108
static const yytype_int16 yytable[] =
{
      90,    51,    93,   130,    94,   156,    29,   162,     4,   189,
      24,    24,     3,    12,    13,    54,   -26,    25,    25,    97,
      26,    26,   116,     6,    90,    90,   195,   124,    48,   125,
      90,    27,    93,    99,    94,    22,    47,    28,  -107,    40,
     113,   126,   127,   128,     9,    90,    66,    93,   207,    94,
     117,    69,    70,   -75,     7,   -75,   209,    72,    73,    74,
     198,    12,    13,    76,    77,    78,   107,   -74,   197,   -74,
     141,   142,    81,   131,    30,    24,    10,   135,   136,   137,
      82,    83,    25,    33,   151,    26,   118,   119,    34,    35,
      60,    36,    49,   -38,   158,   134,    45,   159,    44,   130,
      50,   133,    40,    90,    53,    93,    57,    94,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
      90,   100,    93,   194,    94,   139,   140,   141,   142,   188,
     101,   102,   191,   105,   121,   145,   146,   147,   148,   149,
     150,    90,    90,    93,    93,    94,    94,   103,   104,   196,
      90,   115,    93,   123,    94,    63,   163,    24,    64,   132,
      65,   191,   116,    66,    25,    67,    68,    26,    69,    70,
     157,   160,    71,   179,    72,    73,    74,   182,    75,   183,
      76,    77,    78,    79,   190,   185,    80,   200,   192,    81,
     199,    53,   -49,   205,    52,   208,    23,    82,    83,    63,
     206,    24,    64,   122,    65,    55,   204,    66,    25,    67,
      68,    26,    69,    70,   203,   193,    71,    59,    72,    73,
      74,     0,    75,     0,    76,    77,    78,    79,     0,     0,
      80,     0,    66,    81,     0,    53,     0,   106,    70,     0,
       0,    82,    83,    72,    73,    74,     0,     0,     0,    76,
      77,    78,   107,     0,     0,     0,     0,    49,    81,     0,
       0,     0,   108,   109,    66,     0,    82,    83,     0,   106,
      70,   110,     0,     0,     0,    72,    73,    74,     0,     0,
       0,    76,    77,    78,   107,     0,     0,     0,     0,     0,
      81,     0,     0,     0,   108,   109,    66,     0,    82,    83,
       0,    69,    70,   110,     0,     0,     0,    72,    73,    74,
       0,     0,     0,    76,    77,    78,   107,     0,   180,     0,
       0,     0,    81,     0,     0,     0,     0,   139,   140,   141,
     142,     0,     0,     0,   143,   144,   138,   145,   146,   147,
     148,   149,   150,   139,   140,   141,   142,     0,     0,     0,
     143,   144,     0,   145,   146,   147,   148,   149,   150,   186,
       0,     0,     0,     0,   139,   140,   141,   142,     0,     0,
       0,   143,   144,     0,   145,   146,   147,   148,   149,   150,
     202,     0,     0,     0,     0,   139,   140,   141,   142,     0,
       0,     0,   143,   144,     0,   145,   146,   147,   148,   149,
     150,   154,     0,     0,   139,   140,   141,   142,     0,     0,
       0,   143,   144,     0,   145,   146,   147,   148,   149,   150,
     161,     0,     0,   139,   140,   141,   142,     0,     0,     0,
     143,   144,     0,   145,   146,   147,   148,   149,   150,   178,
       0,     0,   139,   140,   141,   142,     0,     0,     0,   143,
     144,     0,   145,   146,   147,   148,   149,   150,   139,   140,
     141,   142,     0,     0,     0,   143,   144,     0,   145,   146,
     147,   148,   149,   150,   139,   140,   141,   142,     0,     0,
       0,   143,     0,     0,   145,   146,   147,   148,   149,   150,
     139,   140,   141,   142,     0,     0,   139,   140,   141,   142,
    -108,  -108,     0,     0,  -108,  -108,   145,   146,     0,     0,
     149,   150
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-153))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-108))

static const yytype_int16 yycheck[] =
{
      58,    42,    58,   103,    58,   120,    17,   132,     5,   161,
       3,     3,     0,    16,    17,    44,    29,    10,    10,    60,
      13,    13,    35,    29,    82,    83,   178,    31,    39,    33,
      88,    23,    88,    62,    88,    38,    29,    29,    32,    33,
      71,    43,    44,    45,    29,   103,     9,   103,   200,   103,
      81,    14,    15,    31,     8,    33,   208,    20,    21,    22,
     185,    16,    17,    26,    27,    28,    29,    31,   183,    33,
      41,    42,    35,   104,    19,     3,    37,   108,   109,   110,
      43,    44,    10,    29,   115,    13,    82,    83,    35,    29,
      29,    35,    34,    36,   125,   106,    30,   128,    36,   199,
      32,    29,    33,   161,    37,   161,    36,   161,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     178,    32,   178,   164,   178,    39,    40,    41,    42,   160,
      32,    32,   163,    29,    38,    49,    50,    51,    52,    53,
      54,   199,   200,   199,   200,   199,   200,    35,    35,   180,
     208,    35,   208,    32,   208,     1,    33,     3,     4,    35,
       6,   192,    35,     9,    10,    11,    12,    13,    14,    15,
      29,    32,    18,    36,    20,    21,    22,    32,    24,    30,
      26,    27,    28,    29,    36,    35,    32,     7,    33,    35,
      32,    37,    38,    36,    43,    36,    14,    43,    44,     1,
     199,     3,     4,    88,     6,    45,   197,     9,    10,    11,
      12,    13,    14,    15,   196,   164,    18,    55,    20,    21,
      22,    -1,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      32,    -1,     9,    35,    -1,    37,    -1,    14,    15,    -1,
      -1,    43,    44,    20,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    39,    40,     9,    -1,    43,    44,    -1,    14,
      15,    48,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    39,    40,     9,    -1,    43,    44,
      -1,    14,    15,    48,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    28,    29,    -1,    30,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    -1,    -1,    -1,    46,    47,    32,    49,    50,    51,
      52,    53,    54,    39,    40,    41,    42,    -1,    -1,    -1,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    34,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    -1,    -1,
      -1,    46,    47,    -1,    49,    50,    51,    52,    53,    54,
      34,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    -1,
      -1,    -1,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,    36,    -1,    -1,    39,    40,    41,    42,    -1,    -1,
      -1,    46,    47,    -1,    49,    50,    51,    52,    53,    54,
      36,    -1,    -1,    39,    40,    41,    42,    -1,    -1,    -1,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    -1,    -1,    46,
      47,    -1,    49,    50,    51,    52,    53,    54,    39,    40,
      41,    42,    -1,    -1,    -1,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    39,    40,    41,    42,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      39,    40,    41,    42,    -1,    -1,    39,    40,    41,    42,
      49,    50,    -1,    -1,    53,    54,    49,    50,    -1,    -1,
      53,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    59,     0,     5,    60,    29,     8,    62,    29,
      37,    61,    16,    17,    63,    64,    65,    66,    67,    75,
      79,    86,    38,    64,     3,    10,    13,    23,    29,    71,
      19,    68,    76,    29,    35,    29,    35,    80,    81,    82,
      33,   104,   105,    77,    36,    30,    85,    29,    71,    34,
      32,   104,    80,    37,    87,    81,    83,    36,    88,    85,
      29,    73,    78,     1,     4,     6,     9,    11,    12,    14,
      15,    18,    20,    21,    22,    24,    26,    27,    28,    29,
      32,    35,    43,    44,    69,    71,    87,    89,    90,    94,
      95,    98,    99,   100,   106,   107,   108,   104,    84,    87,
      32,    32,    32,    35,    35,    29,    14,    29,    39,    40,
      48,    95,   100,   101,   106,    35,    35,   101,   107,   107,
      70,    38,    89,    32,    31,    33,    43,    44,    45,    92,
      94,   101,    35,    29,    71,   101,   101,   101,    32,    39,
      40,    41,    42,    46,    47,    49,    50,    51,    52,    53,
      54,   101,    96,   101,    36,    72,    73,    29,   101,   101,
      32,    36,    96,    33,   102,   103,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,    36,    36,
      30,    97,    32,    30,    74,    35,    34,    93,   101,    90,
      36,   101,    33,   103,   104,    90,   101,    73,    96,    32,
       7,    91,    34,    97,    74,    36,    92,    90,    36,    90
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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

/* Line 1806 of yacc.c  */
#line 162 "decaf.yy"
    {
	/* In the action for this production, set :0

	the global variable "toplevel" to the list of entities representing 
	the classes (i.e. the attribute of ClassDeclarations).
	*/
	//toplevel = NULL;  // This is a placeholder. Change this!!
		toplevel = (yyvsp[(1) - (1)].entity_list);
	}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 174 "decaf.yy"
    { (yyval.entity_list) = (yyvsp[(1) - (2)].entity_list); (yyval.entity_list)->push_back((yyvsp[(2) - (2)].entity)); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 175 "decaf.yy"
    { (yyval.entity_list) = new list<Entity*>();}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 181 "decaf.yy"
    {
			bool b;
			Entity *e = global_symtab->find_entity((yyvsp[(2) - (4)].string_val),CLASS_ENTITY, &b);
			if (e)
			{
				memset(errmsg,0,2056);
				sprintf(errmsg,"Duplicate class definition '%s' ",(yyvsp[(2) - (4)].string_val));
				yyerror(errmsg);
				c = NULL;
			}
			else
			{
				c = new ClassEntity((yyvsp[(2) - (4)].string_val),(yyvsp[(3) - (4)].entity),NULL);
			}
			global_symtab->enter_block();
		}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 199 "decaf.yy"
    {
			if (c)
			{
				c->set_class_members((yyvsp[(6) - (7)].entity_list));
				(yyval.entity) = c;
			}
			else
				(yyval.entity) = NULL;
			
			global_symtab->leave_block();	
		}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 215 "decaf.yy"
    { 
			bool b;
			(yyval.entity) = global_symtab->find_entity((yyvsp[(2) - (2)].string_val),CLASS_ENTITY,&b); 
			if(!(yyval.entity))
			{
				memset(errmsg,0,2056);
				sprintf(errmsg,"Class '%s' undefined ",(yyvsp[(2) - (2)].string_val));
				yyerror(errmsg);
				
			}
		}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 226 "decaf.yy"
    {(yyval.entity) = NULL;}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 231 "decaf.yy"
    {
			(yyval.entity_list) = (yyvsp[(1) - (2)].entity_list);
			(yyval.entity_list)->push_back((yyvsp[(2) - (2)].entity));
		}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 236 "decaf.yy"
    {
			(yyval.entity_list) = new list<Entity*>();
			(yyval.entity_list)->push_back((yyvsp[(1) - (1)].entity));
		}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 244 "decaf.yy"
    {(yyval.entity) = (yyvsp[(1) - (1)].entity);}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 245 "decaf.yy"
    {(yyval.entity) = (yyvsp[(1) - (1)].entity);}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 246 "decaf.yy"
    {(yyval.entity) = (yyvsp[(1) - (1)].entity);}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 250 "decaf.yy"
    {
			bool b;
			Entity *e = global_symtab->find_entity((yyvsp[(3) - (5)].string_val),FIELD_ENTITY, &b);
			if (e)
			{
				memset(errmsg,0,2056);
				sprintf(errmsg,"Duplicate field entity '%s' ",(yyvsp[(3) - (5)].string_val));
				yyerror(errmsg);
				(yyval.entity) = NULL;
			}
			else
			{
				(yyval.entity) = new FieldEntity((yyvsp[(3) - (5)].string_val),(yyvsp[(1) - (5)].bool_arr_2)[0],(yyvsp[(1) - (5)].bool_arr_2)[1],(yyvsp[(2) - (5)].type),(yyvsp[(4) - (5)].int_val));
			}
		}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 266 "decaf.yy"
    {(yyval.bool_arr_2)[0] = (yyvsp[(1) - (2)].bool_val); (yyval.bool_arr_2)[1] = (yyvsp[(2) - (2)].bool_val);}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 271 "decaf.yy"
    {(yyval.bool_val) = true;}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 272 "decaf.yy"
    {(yyval.bool_val) = false;}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 273 "decaf.yy"
    {(yyval.bool_val) = true;}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 277 "decaf.yy"
    {(yyval.bool_val) = true;}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 278 "decaf.yy"
    {(yyval.bool_val) = false;}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 281 "decaf.yy"
    { t = (yyvsp[(1) - (1)].type); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 281 "decaf.yy"
    { (yyval.entity_list) = (yyvsp[(3) - (4)].entity_list); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 284 "decaf.yy"
    {(yyval.type) = new IntType(); t=(yyval.type);}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 285 "decaf.yy"
    {(yyval.type) = new FloatType(); t=(yyval.type);}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 286 "decaf.yy"
    {(yyval.type) = new BooleanType(); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 288 "decaf.yy"
    {
				bool b;
				Entity * class_entity;
				class_entity = global_symtab->find_entity((yyvsp[(1) - (1)].string_val),CLASS_ENTITY,&b); 
				if(!class_entity)
				{
					memset(errmsg,0,2056);
					sprintf(errmsg,"Undefined Class '%s' ",(yyvsp[(1) - (1)].string_val));
					yyerror(errmsg);
					(yyval.type) = new ErrorType();
				}
				else
					(yyval.type) = new ClassType(class_entity);
			}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 305 "decaf.yy"
    { 
			(yyval.entity_list) = (yyvsp[(2) - (2)].entity_list);
			(yyval.entity_list)->push_front((yyvsp[(1) - (2)].var_entity));
		}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 312 "decaf.yy"
    {
			bool b;
			Entity *e = global_symtab->find_entity((yyvsp[(1) - (2)].string_val),VARIABLE_ENTITY, &b);
			if (e && b)
			{
				memset(errmsg,0,2056);
				sprintf(errmsg, "Duplicate variable entity '%s' ",(yyvsp[(1) - (2)].string_val));
				yyerror(errmsg);
				(yyval.var_entity) = NULL;
			}
			else
			{
				(yyval.var_entity) = new VariableEntity((yyvsp[(1) - (2)].string_val),t,(yyvsp[(2) - (2)].int_val));
			} 
		}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 331 "decaf.yy"
    { 
			(yyval.entity_list) = (yyvsp[(3) - (3)].entity_list); 
			(yyval.entity_list)->push_front((yyvsp[(2) - (3)].var_entity)); 
		}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 338 "decaf.yy"
    {
			(yyval.entity_list)  = new list<Entity*>();
		}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 345 "decaf.yy"
    {	
			method = new MethodEntity((yyvsp[(1) - (1)].mhead).name,(yyvsp[(1) - (1)].mhead).bool_arr_2[0],(yyvsp[(1) - (1)].mhead).bool_arr_2[1],(yyvsp[(1) - (1)].mhead).type,NULL,NULL);
		}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 349 "decaf.yy"
    { 	
			global_symtab->enter_block(); 
			is_func_enter = true;
		}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 354 "decaf.yy"
    {
			method->set_formal_params((yyvsp[(5) - (6)].entity_list));
		}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 358 "decaf.yy"
    {
			method->set_method_body((yyvsp[(8) - (8)].stmt));
			(yyval.entity) = method;
		}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 366 "decaf.yy"
    {
			(yyval.mhead).bool_arr_2[0] = (yyvsp[(1) - (3)].bool_arr_2)[0]; 
			(yyval.mhead).bool_arr_2[1] = (yyvsp[(1) - (3)].bool_arr_2)[1]; 
			(yyval.mhead).name = (yyvsp[(3) - (3)].string_val);
			(yyval.mhead).type = (yyvsp[(2) - (3)].type);
			
		}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 374 "decaf.yy"
    {
			(yyval.mhead).bool_arr_2[0] = (yyvsp[(1) - (3)].bool_arr_2)[0]; 
			(yyval.mhead).bool_arr_2[1] = (yyvsp[(1) - (3)].bool_arr_2)[1]; 
			(yyval.mhead).name = (yyvsp[(3) - (3)].string_val);
			(yyval.mhead).type = new VoidType();
		}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 384 "decaf.yy"
    { (yyval.entity_list) = (yyvsp[(2) - (2)].entity_list); (yyval.entity_list)->push_front((yyvsp[(1) - (2)].entity));}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 386 "decaf.yy"
    {
			(yyval.entity_list) = new list<Entity*>();
			//$$ = NULL;
		}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 392 "decaf.yy"
    {is_formal_param = true; }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 392 "decaf.yy"
    { t = (yyvsp[(2) - (2)].type); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 392 "decaf.yy"
    {is_formal_param = false; }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 393 "decaf.yy"
    {
			(yyval.entity) = (yyvsp[(4) - (5)].var_entity);
		}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 399 "decaf.yy"
    {(yyval.entity_list) = (yyvsp[(3) - (3)].entity_list); (yyval.entity_list)->push_back((yyvsp[(2) - (3)].entity));}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 400 "decaf.yy"
    { (yyval.entity_list) = new list<Entity*>();}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 406 "decaf.yy"
    {
			(yyval.entity) = new ConstructorEntity((yyvsp[(2) - (6)].string_val),(yyvsp[(1) - (6)].bool_arr_2)[0],(yyvsp[(4) - (6)].entity_list),(yyvsp[(6) - (6)].stmt));
		}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 417 "decaf.yy"
    {
				if(!is_func_enter)
				{
					global_symtab->enter_block();
				}
				else
					is_func_enter = false;
			}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 425 "decaf.yy"
    { (yyval.stmt) = new BlockStatement((yyvsp[(3) - (4)].stmt_list)); global_symtab->leave_block();}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 430 "decaf.yy"
    { (yyval.stmt_list) = (yyvsp[(2) - (2)].stmt_list); (yyval.stmt_list)->push_front((yyvsp[(1) - (2)].stmt)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 431 "decaf.yy"
    { (yyval.stmt_list) = new list<Statement *>(); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 436 "decaf.yy"
    {
						(yyval.stmt) = new IfStatement((yyvsp[(3) - (6)].expr),(yyvsp[(5) - (6)].stmt),(yyvsp[(6) - (6)].stmt));
					}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 440 "decaf.yy"
    {
						(yyval.stmt) = new WhileStatement((yyvsp[(3) - (5)].expr),(yyvsp[(5) - (5)].stmt));
					}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 447 "decaf.yy"
    {
						(yyval.stmt) = new ForStatement((yyvsp[(3) - (9)].stmt),(yyvsp[(5) - (9)].expr),(yyvsp[(7) - (9)].stmt),(yyvsp[(9) - (9)].stmt));
					}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 451 "decaf.yy"
    { (yyval.stmt) = new ReturnStatement((yyvsp[(2) - (3)].expr)); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 452 "decaf.yy"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 453 "decaf.yy"
    { (yyval.stmt) = (yyvsp[(1) - (2)].stmt); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 454 "decaf.yy"
    { (yyval.stmt) = new DeclStatement((yyvsp[(1) - (1)].entity_list)); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 455 "decaf.yy"
    { (yyval.stmt) = new BreakStatement(); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 456 "decaf.yy"
    { (yyval.stmt) = new ContinueStatement(); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 457 "decaf.yy"
    { (yyval.stmt) = new SkipStatement(); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 459 "decaf.yy"
    { 
						//printf("Error in statement : %s \n",$1);
						(yyval.stmt) = new SkipStatement();
					}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 467 "decaf.yy"
    { (yyval.stmt) = (yyvsp[(2) - (2)].stmt); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 468 "decaf.yy"
    { (yyval.stmt) = new SkipStatement();}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 472 "decaf.yy"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 473 "decaf.yy"
    { (yyval.stmt) = new SkipStatement();; }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 477 "decaf.yy"
    {(yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 478 "decaf.yy"
    {(yyval.expr) = new NullExpression();}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 481 "decaf.yy"
    { (yyval.stmt) = new ExprStatement((yyvsp[(1) - (1)].expr)); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 482 "decaf.yy"
    { (yyval.stmt) = new ExprStatement((yyvsp[(1) - (1)].expr)); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 490 "decaf.yy"
    {(yyval.expr) = (yyvsp[(1) - (1)].expr);}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 491 "decaf.yy"
    {(yyval.expr) = new ThisExpression();}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 492 "decaf.yy"
    {(yyval.expr) = new SuperExpression();}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 494 "decaf.yy"
    {(yyval.expr) = (yyvsp[(2) - (3)].expr);}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 496 "decaf.yy"
    { 
						//validation needed.
						Entity *cls;
						bool b;
						cls = global_symtab->find_entity((yyvsp[(2) - (5)].string_val),CLASS_ENTITY,&b);

						if(cls)
							(yyval.expr) = new NewInstance(cls,(yyvsp[(4) - (5)].expr_list));
						else
						{
							memset(errmsg,0,2056);
							sprintf(errmsg, "Undefined class  '%s' ",(yyvsp[(2) - (5)].string_val));
							(yyval.expr) = new NullExpression();
						}
					}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 512 "decaf.yy"
    {
						(yyval.expr) = (yyvsp[(1) - (1)].expr);
					}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 516 "decaf.yy"
    {
						(yyval.expr) = (yyvsp[(1) - (1)].expr);
					}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 521 "decaf.yy"
    { (yyval.expr_list) = (yyvsp[(2) - (2)].expr_list); (yyval.expr_list)->push_front((yyvsp[(1) - (2)].expr)); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 522 "decaf.yy"
    { (yyval.expr_list) = new list<Expression*>();}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 526 "decaf.yy"
    {
						(yyval.expr_list) = (yyvsp[(3) - (3)].expr_list);
						(yyval.expr_list)->push_back((yyvsp[(2) - (3)].expr));
					}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 531 "decaf.yy"
    {	
						(yyval.expr_list) = new list<Expression*>();
					}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 537 "decaf.yy"
    {
						(yyval.expr) = new FieldAccess((yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].string_val));
					}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 540 "decaf.yy"
    {
						bool b;
						Entity *e = global_symtab->find_entity((yyvsp[(1) - (1)].string_val),VARIABLE_ENTITY,&b);	
						if(!e)
						{
							Entity *f = global_symtab->find_entity((yyvsp[(1) - (1)].string_val),FIELD_ENTITY,&b);	
							if(f)
							{
								(yyval.expr) = new IdExpression(f);
							}
							else
							{
								Entity *f = global_symtab->find_entity((yyvsp[(1) - (1)].string_val),CLASS_ENTITY,&b);	
								if(f)
									(yyval.expr) = new IdExpression(f);
								else
								{
									Expression *t = new ThisExpression();
									(yyval.expr) = new FieldAccess(t,(yyvsp[(1) - (1)].string_val));
									//yyerror("Undefined Variable ");
								}
							}

						}
						else
						{

							if(b)
							{
								(yyval.expr) = new IdExpression(e);
								/*Expression *t = new IdExpression();
								$$ = new FieldAccess(t,$1);
								*/
							}
							else
							{
								Expression *t = new ThisExpression();
								(yyval.expr) = new FieldAccess(t,(yyvsp[(1) - (1)].string_val));
							}
						}

	}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 584 "decaf.yy"
    { 
	(yyval.expr) =  new ArrayAccess((yyvsp[(1) - (4)].expr),(yyvsp[(3) - (4)].expr));
}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 591 "decaf.yy"
    {
						(yyval.expr) = new MethodInvocation((yyvsp[(1) - (6)].expr),(yyvsp[(3) - (6)].string_val),(yyvsp[(5) - (6)].expr_list)); 
					}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 595 "decaf.yy"
    {
						Expression *t = new ThisExpression();
						(yyval.expr) = new MethodInvocation(t,(yyvsp[(1) - (4)].string_val),(yyvsp[(3) - (4)].expr_list));
					}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 601 "decaf.yy"
    { (yyval.expr) = new BinaryExpression(MUL,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr)); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 602 "decaf.yy"
    { (yyval.expr) = new BinaryExpression(DIV,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr)); 	}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 603 "decaf.yy"
    { (yyval.expr) = new BinaryExpression(ADD,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr)); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 604 "decaf.yy"
    { (yyval.expr) = new BinaryExpression(SUB,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr)); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 605 "decaf.yy"
    { (yyval.expr) = new BinaryExpression(AND,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr)); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 606 "decaf.yy"
    { (yyval.expr) = new BinaryExpression(OR,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr)); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 607 "decaf.yy"
    { (yyval.expr) = new BinaryExpression(EQ,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr)); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 608 "decaf.yy"
    { (yyval.expr) = new BinaryExpression(NEQ,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr)); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 609 "decaf.yy"
    { (yyval.expr) = new BinaryExpression(LT,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr)); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 610 "decaf.yy"
    { (yyval.expr) = new BinaryExpression(GT,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr)); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 611 "decaf.yy"
    { (yyval.expr) = new BinaryExpression(LEQ,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr)); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 612 "decaf.yy"
    { (yyval.expr) = new BinaryExpression(GEQ,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr)); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 614 "decaf.yy"
    { (yyval.expr) = new UnaryExpression(UMINUS,(yyvsp[(2) - (2)].expr));}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 616 "decaf.yy"
    { (yyval.expr) = (yyvsp[(2) - (2)].expr);}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 618 "decaf.yy"
    { (yyval.expr) = new UnaryExpression(NEG,(yyvsp[(2) - (2)].expr));}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 619 "decaf.yy"
    {(yyval.expr)=(yyvsp[(1) - (1)].expr);}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 620 "decaf.yy"
    {(yyval.expr)=(yyvsp[(1) - (1)].expr);}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 622 "decaf.yy"
    {
				int dim = (yyvsp[(4) - (4)].int_val)+(yyvsp[(3) - (4)].expr_list)->size(); 
				(yyval.expr) = new NewArrayInstance((yyvsp[(2) - (4)].type),dim,(yyvsp[(3) - (4)].expr_list));
			}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 629 "decaf.yy"
    {(yyval.expr_list) = (yyvsp[(1) - (2)].expr_list); (yyval.expr_list)->push_back((yyvsp[(2) - (2)].expr)); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 630 "decaf.yy"
    {	
					(yyval.expr_list) = new list<Expression*>(); 
					(yyval.expr_list)->push_back((yyvsp[(1) - (1)].expr)); 
				}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 636 "decaf.yy"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 639 "decaf.yy"
    {(yyval.int_val) = (yyvsp[(2) - (2)].int_val) + 1;}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 640 "decaf.yy"
    {(yyval.int_val) = 0;}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 648 "decaf.yy"
    {(yyval.expr) = new AssignExpression((yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr));}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 649 "decaf.yy"
    {(yyval.expr) = new AutoExpression(POST_INCR,(yyvsp[(1) - (2)].expr));}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 650 "decaf.yy"
    {(yyval.expr) = new AutoExpression(POST_DECR,(yyvsp[(1) - (2)].expr));}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 651 "decaf.yy"
    {(yyval.expr) = new AutoExpression(PRE_INCR,(yyvsp[(2) - (2)].expr));}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 652 "decaf.yy"
    {(yyval.expr) = new AutoExpression(PRE_DECR,(yyvsp[(2) - (2)].expr));}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 656 "decaf.yy"
    {(yyval.expr) = (yyvsp[(1) - (1)].expr);}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 657 "decaf.yy"
    {(yyval.expr) = (yyvsp[(1) - (1)].expr);}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 660 "decaf.yy"
    {(yyval.expr) = new IntegerConstant((yyvsp[(1) - (1)].int_val));}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 661 "decaf.yy"
    {(yyval.expr) = new FloatConstant((yyvsp[(1) - (1)].float_val));}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 662 "decaf.yy"
    {(yyval.expr) = new StringConstant((yyvsp[(1) - (1)].string_val));}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 663 "decaf.yy"
    {(yyval.expr) = new NullExpression();}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 664 "decaf.yy"
    {(yyval.expr) = new BooleanConstant((yyvsp[(1) - (1)].bool_val));}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 665 "decaf.yy"
    {(yyval.expr) = new BooleanConstant((yyvsp[(1) - (1)].bool_val));}
    break;



/* Line 1806 of yacc.c  */
#line 2784 "decaf.tab.cc"
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 668 "decaf.yy"




