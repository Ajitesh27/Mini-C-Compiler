/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;

	#define ANSI_COLOR_RED		"\x1b[31m"
	#define ANSI_COLOR_GREEN	"\x1b[32m"
	#define ANSI_COLOR_CYAN		"\x1b[36m"
	#define ANSI_COLOR_RESET	"\x1b[0m"

	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];


#line 93 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_CHAR = 4,                       /* CHAR  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 6,                     /* DOUBLE  */
  YYSYMBOL_STRUCT = 7,                     /* STRUCT  */
  YYSYMBOL_UNION = 8,                      /* UNION  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_MAIN = 10,                      /* MAIN  */
  YYSYMBOL_VOID = 11,                      /* VOID  */
  YYSYMBOL_WHILE = 12,                     /* WHILE  */
  YYSYMBOL_DO = 13,                        /* DO  */
  YYSYMBOL_identifier = 14,                /* identifier  */
  YYSYMBOL_integer_constant = 15,          /* integer_constant  */
  YYSYMBOL_string_constant = 16,           /* string_constant  */
  YYSYMBOL_float_constant = 17,            /* float_constant  */
  YYSYMBOL_character_constant = 18,        /* character_constant  */
  YYSYMBOL_leftshift_assignment_operator = 19, /* leftshift_assignment_operator  */
  YYSYMBOL_rightshift_assignment_operator = 20, /* rightshift_assignment_operator  */
  YYSYMBOL_XOR_assignment_operator = 21,   /* XOR_assignment_operator  */
  YYSYMBOL_OR_assignment_operator = 22,    /* OR_assignment_operator  */
  YYSYMBOL_AND_assignment_operator = 23,   /* AND_assignment_operator  */
  YYSYMBOL_modulo_assignment_operator = 24, /* modulo_assignment_operator  */
  YYSYMBOL_multiplication_assignment_operator = 25, /* multiplication_assignment_operator  */
  YYSYMBOL_division_assignment_operator = 26, /* division_assignment_operator  */
  YYSYMBOL_addition_assignment_operator = 27, /* addition_assignment_operator  */
  YYSYMBOL_subtraction_assignment_operator = 28, /* subtraction_assignment_operator  */
  YYSYMBOL_assignment_operator = 29,       /* assignment_operator  */
  YYSYMBOL_OR_operator = 30,               /* OR_operator  */
  YYSYMBOL_AND_operator = 31,              /* AND_operator  */
  YYSYMBOL_pipe_operator = 32,             /* pipe_operator  */
  YYSYMBOL_caret_operator = 33,            /* caret_operator  */
  YYSYMBOL_amp_operator = 34,              /* amp_operator  */
  YYSYMBOL_equality_operator = 35,         /* equality_operator  */
  YYSYMBOL_inequality_operator = 36,       /* inequality_operator  */
  YYSYMBOL_lessthan_assignment_operator = 37, /* lessthan_assignment_operator  */
  YYSYMBOL_lessthan_operator = 38,         /* lessthan_operator  */
  YYSYMBOL_greaterthan_assignment_operator = 39, /* greaterthan_assignment_operator  */
  YYSYMBOL_greaterthan_operator = 40,      /* greaterthan_operator  */
  YYSYMBOL_leftshift_operator = 41,        /* leftshift_operator  */
  YYSYMBOL_rightshift_operator = 42,       /* rightshift_operator  */
  YYSYMBOL_add_operator = 43,              /* add_operator  */
  YYSYMBOL_subtract_operator = 44,         /* subtract_operator  */
  YYSYMBOL_multiplication_operator = 45,   /* multiplication_operator  */
  YYSYMBOL_division_operator = 46,         /* division_operator  */
  YYSYMBOL_modulo_operator = 47,           /* modulo_operator  */
  YYSYMBOL_SIZEOF = 48,                    /* SIZEOF  */
  YYSYMBOL_tilde_operator = 49,            /* tilde_operator  */
  YYSYMBOL_exclamation_operator = 50,      /* exclamation_operator  */
  YYSYMBOL_increment_operator = 51,        /* increment_operator  */
  YYSYMBOL_decrement_operator = 52,        /* decrement_operator  */
  YYSYMBOL_53_ = 53,                       /* ';'  */
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_55_ = 55,                       /* '['  */
  YYSYMBOL_56_ = 56,                       /* ']'  */
  YYSYMBOL_57_ = 57,                       /* '{'  */
  YYSYMBOL_58_ = 58,                       /* '}'  */
  YYSYMBOL_59_ = 59,                       /* '('  */
  YYSYMBOL_60_ = 60,                       /* ')'  */
  YYSYMBOL_61_ = 61,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_program = 63,                   /* program  */
  YYSYMBOL_declaration_list = 64,          /* declaration_list  */
  YYSYMBOL_D = 65,                         /* D  */
  YYSYMBOL_declaration = 66,               /* declaration  */
  YYSYMBOL_variable_declaration = 67,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 68, /* variable_declaration_list  */
  YYSYMBOL_V = 69,                         /* V  */
  YYSYMBOL_variable_declaration_identifier = 70, /* variable_declaration_identifier  */
  YYSYMBOL_71_1 = 71,                      /* $@1  */
  YYSYMBOL_vdi = 72,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 73,     /* identifier_array_type  */
  YYSYMBOL_initilization_params = 74,      /* initilization_params  */
  YYSYMBOL_initilization = 75,             /* initilization  */
  YYSYMBOL_type_specifier = 76,            /* type_specifier  */
  YYSYMBOL_structure_definition = 77,      /* structure_definition  */
  YYSYMBOL_78_2 = 78,                      /* $@2  */
  YYSYMBOL_79_3 = 79,                      /* $@3  */
  YYSYMBOL_V1 = 80,                        /* V1  */
  YYSYMBOL_structure_declaration = 81,     /* structure_declaration  */
  YYSYMBOL_function_declaration = 82,      /* function_declaration  */
  YYSYMBOL_function_declaration_type = 83, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 84, /* function_declaration_param_statement  */
  YYSYMBOL_params = 85,                    /* params  */
  YYSYMBOL_parameters_list = 86,           /* parameters_list  */
  YYSYMBOL_parameters_identifier_list = 87, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 88, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 89,          /* param_identifier  */
  YYSYMBOL_90_4 = 90,                      /* $@4  */
  YYSYMBOL_param_identifier_breakup = 91,  /* param_identifier_breakup  */
  YYSYMBOL_statement = 92,                 /* statement  */
  YYSYMBOL_compound_statement = 93,        /* compound_statement  */
  YYSYMBOL_statment_list = 94,             /* statment_list  */
  YYSYMBOL_expression_statment = 95,       /* expression_statment  */
  YYSYMBOL_iterative_statements = 96,      /* iterative_statements  */
  YYSYMBOL_return_statement = 97,          /* return_statement  */
  YYSYMBOL_return_statement_breakup = 98,  /* return_statement_breakup  */
  YYSYMBOL_string_initilization = 99,      /* string_initilization  */
  YYSYMBOL_array_initialization = 100,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 101,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 102, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 103,               /* expression  */
  YYSYMBOL_expression_breakup = 104,       /* expression_breakup  */
  YYSYMBOL_simple_expression = 105,        /* simple_expression  */
  YYSYMBOL_simple_expression_breakup = 106, /* simple_expression_breakup  */
  YYSYMBOL_and_expression = 107,           /* and_expression  */
  YYSYMBOL_and_expression_breakup = 108,   /* and_expression_breakup  */
  YYSYMBOL_unary_relation_expression = 109, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 110,       /* regular_expression  */
  YYSYMBOL_regular_expression_breakup = 111, /* regular_expression_breakup  */
  YYSYMBOL_relational_operators = 112,     /* relational_operators  */
  YYSYMBOL_sum_expression = 113,           /* sum_expression  */
  YYSYMBOL_sum_operators = 114,            /* sum_operators  */
  YYSYMBOL_term = 115,                     /* term  */
  YYSYMBOL_MULOP = 116,                    /* MULOP  */
  YYSYMBOL_factor = 117,                   /* factor  */
  YYSYMBOL_mutable = 118,                  /* mutable  */
  YYSYMBOL_mutable_breakup = 119,          /* mutable_breakup  */
  YYSYMBOL_immutable = 120,                /* immutable  */
  YYSYMBOL_call = 121,                     /* call  */
  YYSYMBOL_arguments = 122,                /* arguments  */
  YYSYMBOL_arguments_list = 123,           /* arguments_list  */
  YYSYMBOL_A = 124,                        /* A  */
  YYSYMBOL_constant = 125                  /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   192

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  198

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      59,    60,     2,     2,    54,     2,    61,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    53,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    62,    62,    65,    68,    69,    72,    73,    74,    77,
      78,    81,    84,    85,    88,    88,    90,    90,    93,    94,
      97,    98,   101,   102,   103,   106,   106,   106,   106,   107,
     111,   111,   112,   112,   114,   114,   117,   118,   122,   125,
     128,   131,   131,   134,   137,   140,   141,   144,   144,   147,
     148,   151,   151,   152,   153,   154,   157,   160,   161,   164,
     165,   170,   171,   174,   177,   178,   182,   185,   188,   191,
     192,   195,   196,   199,   200,   201,   202,   203,   204,   205,
     206,   209,   212,   212,   215,   218,   219,   222,   223,   226,
     229,   230,   233,   233,   233,   234,   234,   234,   237,   238,
     241,   242,   245,   246,   249,   249,   249,   252,   252,   255,
     256,   259,   260,   263,   264,   264,   267,   270,   270,   273,
     276,   277,   280,   281,   282,   283
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "CHAR", "FLOAT",
  "DOUBLE", "STRUCT", "UNION", "RETURN", "MAIN", "VOID", "WHILE", "DO",
  "identifier", "integer_constant", "string_constant", "float_constant",
  "character_constant", "leftshift_assignment_operator",
  "rightshift_assignment_operator", "XOR_assignment_operator",
  "OR_assignment_operator", "AND_assignment_operator",
  "modulo_assignment_operator", "multiplication_assignment_operator",
  "division_assignment_operator", "addition_assignment_operator",
  "subtraction_assignment_operator", "assignment_operator", "OR_operator",
  "AND_operator", "pipe_operator", "caret_operator", "amp_operator",
  "equality_operator", "inequality_operator",
  "lessthan_assignment_operator", "lessthan_operator",
  "greaterthan_assignment_operator", "greaterthan_operator",
  "leftshift_operator", "rightshift_operator", "add_operator",
  "subtract_operator", "multiplication_operator", "division_operator",
  "modulo_operator", "SIZEOF", "tilde_operator", "exclamation_operator",
  "increment_operator", "decrement_operator", "';'", "','", "'['", "']'",
  "'{'", "'}'", "'('", "')'", "'.'", "$accept", "program",
  "declaration_list", "D", "declaration", "variable_declaration",
  "variable_declaration_list", "V", "variable_declaration_identifier",
  "$@1", "vdi", "identifier_array_type", "initilization_params",
  "initilization", "type_specifier", "structure_definition", "$@2", "$@3",
  "V1", "structure_declaration", "function_declaration",
  "function_declaration_type", "function_declaration_param_statement",
  "params", "parameters_list", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@4",
  "param_identifier_breakup", "statement", "compound_statement",
  "statment_list", "expression_statment", "iterative_statements",
  "return_statement", "return_statement_breakup", "string_initilization",
  "array_initialization", "array_int_declarations",
  "array_int_declarations_breakup", "expression", "expression_breakup",
  "simple_expression", "simple_expression_breakup", "and_expression",
  "and_expression_breakup", "unary_relation_expression",
  "regular_expression", "regular_expression_breakup",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "mutable_breakup", "immutable", "call",
  "arguments", "arguments_list", "A", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,    59,    44,    91,    93,   123,   125,    40,
      41,    46
};
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     155,   -99,   -99,   -99,   -99,     0,     4,   -99,    21,   -99,
     155,   -99,    24,   -99,   -99,   -99,    71,    31,    31,   -99,
     -99,   -99,   -12,     1,    11,    49,   -99,     8,   -99,   -99,
     -99,    13,   -99,    22,   -99,    -9,   -99,    31,   -99,   -99,
     -99,    17,    93,   164,   164,    19,    -7,   -99,   -99,   -99,
      37,    71,   -99,    58,    67,    14,    34,    93,    44,   -99,
     -99,   -99,   -99,    19,   -99,    93,    19,   -99,    31,   -99,
     -99,   -99,   -99,   -99,    59,   -99,    83,    84,   -99,    94,
     -20,   -99,    96,   -99,   -99,   -99,   164,    56,    60,   -99,
      61,    90,   -99,    70,   -99,   -99,    31,    31,   -99,   -99,
      74,    19,   116,    19,   -99,   -44,    93,    81,    80,   -99,
      19,   -99,    19,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,    26,    26,   -99,   -99,   -99,    26,    19,
      19,    19,    19,    19,    19,   -99,   -99,    19,   127,   -99,
     -99,   -99,    89,    91,   120,   129,   -99,   -99,   -99,    95,
      97,    99,   104,   -99,   -99,   -99,   -99,    83,    84,    15,
     -20,   -99,   -99,   -99,   -99,   -99,   -99,   -99,    98,   -99,
     -99,   -99,    -6,   -99,   -99,   -99,   -99,    93,    19,    19,
     -99,   -99,   -99,   -99,   -99,   150,   -99,   113,    99,   122,
     119,   121,   -99,   150,   -99,   -99,   -99,   -99
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    25,    26,    27,    28,     0,     0,    29,     0,     2,
       5,     6,     0,     8,    10,     7,    42,    30,    32,     1,
       4,     3,    14,     0,    13,     0,    38,     0,    41,    14,
      36,     0,    37,     0,    39,    19,     9,     0,    11,    47,
      43,    46,     0,    35,    35,     0,     0,    15,    16,    12,
      50,     0,    44,     0,     0,     0,     0,     0,   109,   122,
     123,   124,   125,     0,    60,    58,     0,    55,     0,    40,
      52,    51,    53,    54,     0,    72,    83,    86,    88,    91,
      99,   103,   108,   107,   114,   115,    35,     0,     0,    17,
       0,     0,    18,     0,    48,    45,     0,     0,    64,    63,
       0,     0,     0,   118,    87,   108,    58,     0,     0,    59,
       0,    81,     0,    84,    96,    97,    93,    95,    92,    94,
     100,   101,    89,     0,     0,   104,   105,   106,     0,     0,
       0,     0,     0,     0,     0,    79,    80,     0,     0,    71,
     110,    34,     0,     0,    24,     0,    21,    49,    65,     0,
       0,   121,     0,   117,    57,    56,   113,    83,    86,    90,
      98,   102,    78,    76,    77,    74,    75,    73,     0,   112,
      31,    33,     0,    20,    22,    23,    66,     0,     0,     0,
     119,   116,    82,    85,   111,     0,    61,     0,   121,    70,
       0,     0,   120,     0,    68,    67,    62,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   168,   -99,   -99,     9,   -13,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,     6,   -99,   -99,   -99,   -31,   -99,
     -99,   -99,   -99,   -99,   128,   -99,   -99,   -99,   -99,   -99,
     -42,   -99,    75,   -99,   -99,   -99,   -99,    36,   -99,   -11,
     -99,   -43,   -99,   -98,    27,    73,    28,   -56,   -99,   -99,
     -99,    62,   -99,    63,   -99,    64,   -62,   -99,   -99,   -99,
     -99,   -99,     2,   -99
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    21,    10,    67,    23,    38,    24,    35,
      47,    48,    92,   173,    68,    13,    31,    33,    87,    14,
      15,    16,    26,    27,    28,    40,    52,    41,    50,    94,
     106,    70,   107,    71,    72,    73,    99,   146,   175,   190,
     194,    74,   139,    75,   111,    76,   113,    77,    78,   122,
     123,    79,   124,    80,   128,    81,    82,   140,    83,    84,
     152,   153,   180,    85
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      69,   105,    89,   149,    30,    32,    12,   104,    90,    11,
     176,   137,   100,    88,    17,   102,    12,   138,    18,    11,
      45,    19,    25,   108,    49,   125,   126,   127,    58,    59,
      60,    61,    62,    58,    59,    60,    61,    62,    22,   105,
      58,    59,    60,    61,    62,    29,    46,    34,   105,    91,
     105,   185,    86,    86,    36,   141,   158,    25,   120,   121,
     151,   105,   105,    39,    63,    37,   105,    98,    42,    63,
      43,    51,    96,    66,     1,     2,     3,     4,    66,    44,
     187,    97,     7,    30,    32,    66,   162,   163,   164,   165,
     166,   167,    93,   101,   168,    86,     1,     2,     3,     4,
      53,    54,    55,   103,     7,    56,    57,    58,    59,    60,
      61,    62,   109,   110,   142,   112,   105,   144,   143,   145,
     129,   130,   131,   132,   133,   134,   147,   148,   150,   114,
     115,   116,   117,   118,   119,   186,   188,   120,   121,   155,
     156,   169,   170,    63,   171,   176,    64,   135,   136,   172,
      65,   137,    66,   179,   184,   177,   178,   138,     1,     2,
       3,     4,     5,     6,   181,   189,     7,     1,     2,     3,
       4,    53,    54,   191,   196,     7,   193,   195,    20,    95,
     174,   154,   197,   157,   182,   159,   183,   160,     0,     0,
     192,     0,   161
};

static const yytype_int16 yycheck[] =
{
      42,    63,    45,   101,    17,    18,     0,    63,    15,     0,
      16,    55,    55,    44,    14,    57,    10,    61,    14,    10,
      29,     0,    16,    66,    37,    45,    46,    47,    14,    15,
      16,    17,    18,    14,    15,    16,    17,    18,    14,   101,
      14,    15,    16,    17,    18,    14,    55,    59,   110,    56,
     112,    57,    43,    44,    53,    86,   112,    51,    43,    44,
     103,   123,   124,    14,    50,    54,   128,    53,    60,    50,
      57,    54,    14,    59,     3,     4,     5,     6,    59,    57,
     178,    14,    11,    96,    97,    59,   129,   130,   131,   132,
     133,   134,    55,    59,   137,    86,     3,     4,     5,     6,
       7,     8,     9,    59,    11,    12,    13,    14,    15,    16,
      17,    18,    53,    30,    58,    31,   178,    56,    58,    29,
      24,    25,    26,    27,    28,    29,    56,    53,    12,    35,
      36,    37,    38,    39,    40,   177,   179,    43,    44,    58,
      60,    14,    53,    50,    53,    16,    53,    51,    52,    29,
      57,    55,    59,    54,    56,    60,    59,    61,     3,     4,
       5,     6,     7,     8,    60,    15,    11,     3,     4,     5,
       6,     7,     8,    60,    53,    11,    54,    58,    10,    51,
     144,   106,   193,   110,   157,   123,   158,   124,    -1,    -1,
     188,    -1,   128
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    11,    63,    64,
      66,    67,    76,    77,    81,    82,    83,    14,    14,     0,
      64,    65,    14,    68,    70,    76,    84,    85,    86,    14,
      68,    78,    68,    79,    59,    71,    53,    54,    69,    14,
      87,    89,    60,    57,    57,    29,    55,    72,    73,    68,
      90,    54,    88,     7,     8,     9,    12,    13,    14,    15,
      16,    17,    18,    50,    53,    57,    59,    67,    76,    92,
      93,    95,    96,    97,   103,   105,   107,   109,   110,   113,
     115,   117,   118,   120,   121,   125,    67,    80,    80,   103,
      15,    56,    74,    55,    91,    86,    14,    14,    53,    98,
     103,    59,    92,    59,   109,   118,    92,    94,   103,    53,
      30,   106,    31,   108,    35,    36,    37,    38,    39,    40,
      43,    44,   111,   112,   114,    45,    46,    47,   116,    24,
      25,    26,    27,    28,    29,    51,    52,    55,    61,   104,
     119,    80,    58,    58,    56,    29,    99,    56,    53,   105,
      12,   103,   122,   123,    94,    58,    60,   107,   109,   113,
     115,   117,   103,   103,   103,   103,   103,   103,   103,    14,
      53,    53,    29,    75,    99,   100,    16,    60,    59,    54,
     124,    60,   106,   108,    56,    57,    92,   105,   103,    15,
     101,    60,   124,    54,   102,    58,    53,   101
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    65,    65,    66,    66,    66,    67,
      67,    68,    69,    69,    71,    70,    72,    72,    73,    73,
      74,    74,    75,    75,    75,    76,    76,    76,    76,    76,
      78,    77,    79,    77,    80,    80,    81,    81,    82,    83,
      84,    85,    85,    86,    87,    88,    88,    90,    89,    91,
      91,    92,    92,    92,    92,    92,    93,    94,    94,    95,
      95,    96,    96,    97,    98,    98,    99,   100,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   105,   106,   106,   107,   108,   108,   109,   109,   110,
     111,   111,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   120,   121,   122,   122,   123,
     124,   124,   125,   125,   125,   125
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     3,
       1,     2,     2,     0,     0,     3,     1,     2,     2,     0,
       3,     2,     1,     1,     0,     1,     1,     1,     1,     1,
       0,     7,     0,     7,     2,     0,     3,     3,     2,     3,
       3,     1,     0,     2,     2,     2,     0,     0,     3,     2,
       0,     1,     1,     1,     1,     1,     3,     2,     0,     2,
       1,     5,     7,     2,     1,     2,     2,     4,     2,     2,
       0,     2,     1,     2,     2,     2,     2,     2,     2,     1,
       1,     2,     3,     0,     2,     3,     0,     2,     1,     2,
       2,     0,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     2,     3,     1,     1,     4,     1,     0,     2,
       3,     0,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 14: /* $@1: %empty  */
#line 88 "parser.y"
                                     { ins(); }
#line 1516 "y.tab.c"
    break;

  case 30: /* $@2: %empty  */
#line 111 "parser.y"
                                            { ins(); }
#line 1522 "y.tab.c"
    break;

  case 32: /* $@3: %empty  */
#line 112 "parser.y"
                                           { ins(); }
#line 1528 "y.tab.c"
    break;

  case 39: /* function_declaration_type: type_specifier identifier '('  */
#line 125 "parser.y"
                                                         { ins();}
#line 1534 "y.tab.c"
    break;

  case 47: /* $@4: %empty  */
#line 144 "parser.y"
                                     { ins(); }
#line 1540 "y.tab.c"
    break;

  case 66: /* string_initilization: assignment_operator string_constant  */
#line 182 "parser.y"
                                                              { insV(); }
#line 1546 "y.tab.c"
    break;

  case 122: /* constant: integer_constant  */
#line 280 "parser.y"
                                                { insV(); }
#line 1552 "y.tab.c"
    break;

  case 123: /* constant: string_constant  */
#line 281 "parser.y"
                                                { insV(); }
#line 1558 "y.tab.c"
    break;

  case 124: /* constant: float_constant  */
#line 282 "parser.y"
                                                { insV(); }
#line 1564 "y.tab.c"
    break;

  case 125: /* constant: character_constant  */
#line 283 "parser.y"
                                            { insV(); }
#line 1570 "y.tab.c"
    break;


#line 1574 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 285 "parser.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf(ANSI_COLOR_GREEN "Status: Parsing Complete - Valid" ANSI_COLOR_RESET "\n");
		printf("%30s" ANSI_COLOR_CYAN "SYMBOL TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30s" ANSI_COLOR_CYAN "CONSTANT TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
	}
}

void yyerror(char *s)
{
	printf("%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf(ANSI_COLOR_RED "Status: Parsing Failed - Invalid\n" ANSI_COLOR_RESET);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}
