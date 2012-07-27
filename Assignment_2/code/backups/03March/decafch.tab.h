
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 26 "decafch.y"

	int ival;
	float fval;
	char *sval;
	char *cmtval;
	char *errval;
	char *strval;



/* Line 1676 of yacc.c  */
#line 123 "decafch.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;

