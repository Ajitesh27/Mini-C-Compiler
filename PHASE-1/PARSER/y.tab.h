/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INT = 258,                     /* INT  */
    CHAR = 259,                    /* CHAR  */
    FLOAT = 260,                   /* FLOAT  */
    DOUBLE = 261,                  /* DOUBLE  */
    STRUCT = 262,                  /* STRUCT  */
    UNION = 263,                   /* UNION  */
    RETURN = 264,                  /* RETURN  */
    MAIN = 265,                    /* MAIN  */
    VOID = 266,                    /* VOID  */
    WHILE = 267,                   /* WHILE  */
    DO = 268,                      /* DO  */
    identifier = 269,              /* identifier  */
    integer_constant = 270,        /* integer_constant  */
    string_constant = 271,         /* string_constant  */
    float_constant = 272,          /* float_constant  */
    character_constant = 273,      /* character_constant  */
    leftshift_assignment_operator = 274, /* leftshift_assignment_operator  */
    rightshift_assignment_operator = 275, /* rightshift_assignment_operator  */
    XOR_assignment_operator = 276, /* XOR_assignment_operator  */
    OR_assignment_operator = 277,  /* OR_assignment_operator  */
    AND_assignment_operator = 278, /* AND_assignment_operator  */
    modulo_assignment_operator = 279, /* modulo_assignment_operator  */
    multiplication_assignment_operator = 280, /* multiplication_assignment_operator  */
    division_assignment_operator = 281, /* division_assignment_operator  */
    addition_assignment_operator = 282, /* addition_assignment_operator  */
    subtraction_assignment_operator = 283, /* subtraction_assignment_operator  */
    assignment_operator = 284,     /* assignment_operator  */
    OR_operator = 285,             /* OR_operator  */
    AND_operator = 286,            /* AND_operator  */
    pipe_operator = 287,           /* pipe_operator  */
    caret_operator = 288,          /* caret_operator  */
    amp_operator = 289,            /* amp_operator  */
    equality_operator = 290,       /* equality_operator  */
    inequality_operator = 291,     /* inequality_operator  */
    lessthan_assignment_operator = 292, /* lessthan_assignment_operator  */
    lessthan_operator = 293,       /* lessthan_operator  */
    greaterthan_assignment_operator = 294, /* greaterthan_assignment_operator  */
    greaterthan_operator = 295,    /* greaterthan_operator  */
    leftshift_operator = 296,      /* leftshift_operator  */
    rightshift_operator = 297,     /* rightshift_operator  */
    add_operator = 298,            /* add_operator  */
    subtract_operator = 299,       /* subtract_operator  */
    multiplication_operator = 300, /* multiplication_operator  */
    division_operator = 301,       /* division_operator  */
    modulo_operator = 302,         /* modulo_operator  */
    SIZEOF = 303,                  /* SIZEOF  */
    tilde_operator = 304,          /* tilde_operator  */
    exclamation_operator = 305,    /* exclamation_operator  */
    increment_operator = 306,      /* increment_operator  */
    decrement_operator = 307       /* decrement_operator  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define CHAR 259
#define FLOAT 260
#define DOUBLE 261
#define STRUCT 262
#define UNION 263
#define RETURN 264
#define MAIN 265
#define VOID 266
#define WHILE 267
#define DO 268
#define identifier 269
#define integer_constant 270
#define string_constant 271
#define float_constant 272
#define character_constant 273
#define leftshift_assignment_operator 274
#define rightshift_assignment_operator 275
#define XOR_assignment_operator 276
#define OR_assignment_operator 277
#define AND_assignment_operator 278
#define modulo_assignment_operator 279
#define multiplication_assignment_operator 280
#define division_assignment_operator 281
#define addition_assignment_operator 282
#define subtraction_assignment_operator 283
#define assignment_operator 284
#define OR_operator 285
#define AND_operator 286
#define pipe_operator 287
#define caret_operator 288
#define amp_operator 289
#define equality_operator 290
#define inequality_operator 291
#define lessthan_assignment_operator 292
#define lessthan_operator 293
#define greaterthan_assignment_operator 294
#define greaterthan_operator 295
#define leftshift_operator 296
#define rightshift_operator 297
#define add_operator 298
#define subtract_operator 299
#define multiplication_operator 300
#define division_operator 301
#define modulo_operator 302
#define SIZEOF 303
#define tilde_operator 304
#define exclamation_operator 305
#define increment_operator 306
#define decrement_operator 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
