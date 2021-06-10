/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_OBJ_Y_TAB_H_INCLUDED
# define YY_YY_OBJ_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    INTCONST = 259,                /* INTCONST  */
    CHARCONST = 260,               /* CHARCONST  */
    STRCONST = 261,                /* STRCONST  */
    KWD_IF = 262,                  /* KWD_IF  */
    KWD_ELSE = 263,                /* KWD_ELSE  */
    KWD_WHILE = 264,               /* KWD_WHILE  */
    KWD_INT = 265,                 /* KWD_INT  */
    KWD_STRING = 266,              /* KWD_STRING  */
    KWD_CHAR = 267,                /* KWD_CHAR  */
    KWD_VOID = 268,                /* KWD_VOID  */
    KWD_RETURN = 269,              /* KWD_RETURN  */
    OPER_ADD = 270,                /* OPER_ADD  */
    OPER_SUB = 271,                /* OPER_SUB  */
    OPER_MUL = 272,                /* OPER_MUL  */
    OPER_DIV = 273,                /* OPER_DIV  */
    OPER_MOD = 274,                /* OPER_MOD  */
    OPER_LT = 275,                 /* OPER_LT  */
    OPER_GT = 276,                 /* OPER_GT  */
    OPER_LTE = 277,                /* OPER_LTE  */
    OPER_GTE = 278,                /* OPER_GTE  */
    OPER_EQ = 279,                 /* OPER_EQ  */
    OPER_NEQ = 280,                /* OPER_NEQ  */
    OPER_ASGN = 281,               /* OPER_ASGN  */
    OPER_AT = 282,                 /* OPER_AT  */
    OPER_INC = 283,                /* OPER_INC  */
    OPER_DEC = 284,                /* OPER_DEC  */
    LSQ_BRKT = 285,                /* LSQ_BRKT  */
    RSQ_BRKT = 286,                /* RSQ_BRKT  */
    LCRLY_BRKT = 287,              /* LCRLY_BRKT  */
    RCRLY_BRKT = 288,              /* RCRLY_BRKT  */
    LPAREN = 289,                  /* LPAREN  */
    RPAREN = 290,                  /* RPAREN  */
    COMMA = 291,                   /* COMMA  */
    SEMICLN = 292,                 /* SEMICLN  */
    OPER_AND = 293,                /* OPER_AND  */
    OPER_OR = 294,                 /* OPER_OR  */
    OPER_NOT = 295,                /* OPER_NOT  */
    ERROR = 296,                   /* ERROR  */
    IFX = 297                      /* IFX  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define INTCONST 259
#define CHARCONST 260
#define STRCONST 261
#define KWD_IF 262
#define KWD_ELSE 263
#define KWD_WHILE 264
#define KWD_INT 265
#define KWD_STRING 266
#define KWD_CHAR 267
#define KWD_VOID 268
#define KWD_RETURN 269
#define OPER_ADD 270
#define OPER_SUB 271
#define OPER_MUL 272
#define OPER_DIV 273
#define OPER_MOD 274
#define OPER_LT 275
#define OPER_GT 276
#define OPER_LTE 277
#define OPER_GTE 278
#define OPER_EQ 279
#define OPER_NEQ 280
#define OPER_ASGN 281
#define OPER_AT 282
#define OPER_INC 283
#define OPER_DEC 284
#define LSQ_BRKT 285
#define RSQ_BRKT 286
#define LCRLY_BRKT 287
#define RCRLY_BRKT 288
#define LPAREN 289
#define RPAREN 290
#define COMMA 291
#define SEMICLN 292
#define OPER_AND 293
#define OPER_OR 294
#define OPER_NOT 295
#define ERROR 296
#define IFX 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 32 "src/parser.y"

    int value;
    struct treenode *node;
    char *strval;

#line 157 "obj/y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_OBJ_Y_TAB_H_INCLUDED  */
