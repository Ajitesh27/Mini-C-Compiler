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
#line 1 "icg_quad.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <ctype.h>
  int top=-1;
  void yyerror(char *);
  extern FILE *yyin;
  #define YYSTYPE char*
  typedef struct quadruples
  {
    char *op;
    char *arg1;
    char *arg2;
    char *res;
  }quad;
  int quadlen = 0;
  quad q[100];

#line 91 "y.tab.c"

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
    NUM = 259,                     /* NUM  */
    T_lt = 260,                    /* T_lt  */
    T_gt = 261,                    /* T_gt  */
    T_lteq = 262,                  /* T_lteq  */
    T_gteq = 263,                  /* T_gteq  */
    T_neq = 264,                   /* T_neq  */
    T_noteq = 265,                 /* T_noteq  */
    T_eqeq = 266,                  /* T_eqeq  */
    T_and = 267,                   /* T_and  */
    T_or = 268,                    /* T_or  */
    T_incr = 269,                  /* T_incr  */
    T_decr = 270,                  /* T_decr  */
    T_not = 271,                   /* T_not  */
    T_eq = 272,                    /* T_eq  */
    WHILE = 273,                   /* WHILE  */
    INT = 274,                     /* INT  */
    CHAR = 275,                    /* CHAR  */
    FLOAT = 276,                   /* FLOAT  */
    VOID = 277,                    /* VOID  */
    H = 278,                       /* H  */
    MAINTOK = 279,                 /* MAINTOK  */
    INCLUDE = 280,                 /* INCLUDE  */
    BREAK = 281,                   /* BREAK  */
    CONTINUE = 282,                /* CONTINUE  */
    IF = 283,                      /* IF  */
    ELSE = 284,                    /* ELSE  */
    COUT = 285,                    /* COUT  */
    STRING = 286,                  /* STRING  */
    FOR = 287,                     /* FOR  */
    ENDL = 288,                    /* ENDL  */
    T_ques = 289,                  /* T_ques  */
    T_colon = 290,                 /* T_colon  */
    STRUCT = 291,                  /* STRUCT  */
    UNION = 292,                   /* UNION  */
    T_pl = 293,                    /* T_pl  */
    T_min = 294,                   /* T_min  */
    T_mul = 295,                   /* T_mul  */
    T_div = 296                    /* T_div  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define NUM 259
#define T_lt 260
#define T_gt 261
#define T_lteq 262
#define T_gteq 263
#define T_neq 264
#define T_noteq 265
#define T_eqeq 266
#define T_and 267
#define T_or 268
#define T_incr 269
#define T_decr 270
#define T_not 271
#define T_eq 272
#define WHILE 273
#define INT 274
#define CHAR 275
#define FLOAT 276
#define VOID 277
#define H 278
#define MAINTOK 279
#define INCLUDE 280
#define BREAK 281
#define CONTINUE 282
#define IF 283
#define ELSE 284
#define COUT 285
#define STRING 286
#define FOR 287
#define ENDL 288
#define T_ques 289
#define T_colon 290
#define STRUCT 291
#define UNION 292
#define T_pl 293
#define T_min 294
#define T_mul 295
#define T_div 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_NUM = 4,                        /* NUM  */
  YYSYMBOL_T_lt = 5,                       /* T_lt  */
  YYSYMBOL_T_gt = 6,                       /* T_gt  */
  YYSYMBOL_T_lteq = 7,                     /* T_lteq  */
  YYSYMBOL_T_gteq = 8,                     /* T_gteq  */
  YYSYMBOL_T_neq = 9,                      /* T_neq  */
  YYSYMBOL_T_noteq = 10,                   /* T_noteq  */
  YYSYMBOL_T_eqeq = 11,                    /* T_eqeq  */
  YYSYMBOL_T_and = 12,                     /* T_and  */
  YYSYMBOL_T_or = 13,                      /* T_or  */
  YYSYMBOL_T_incr = 14,                    /* T_incr  */
  YYSYMBOL_T_decr = 15,                    /* T_decr  */
  YYSYMBOL_T_not = 16,                     /* T_not  */
  YYSYMBOL_T_eq = 17,                      /* T_eq  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_INT = 19,                       /* INT  */
  YYSYMBOL_CHAR = 20,                      /* CHAR  */
  YYSYMBOL_FLOAT = 21,                     /* FLOAT  */
  YYSYMBOL_VOID = 22,                      /* VOID  */
  YYSYMBOL_H = 23,                         /* H  */
  YYSYMBOL_MAINTOK = 24,                   /* MAINTOK  */
  YYSYMBOL_INCLUDE = 25,                   /* INCLUDE  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 27,                  /* CONTINUE  */
  YYSYMBOL_IF = 28,                        /* IF  */
  YYSYMBOL_ELSE = 29,                      /* ELSE  */
  YYSYMBOL_COUT = 30,                      /* COUT  */
  YYSYMBOL_STRING = 31,                    /* STRING  */
  YYSYMBOL_FOR = 32,                       /* FOR  */
  YYSYMBOL_ENDL = 33,                      /* ENDL  */
  YYSYMBOL_T_ques = 34,                    /* T_ques  */
  YYSYMBOL_T_colon = 35,                   /* T_colon  */
  YYSYMBOL_STRUCT = 36,                    /* STRUCT  */
  YYSYMBOL_UNION = 37,                     /* UNION  */
  YYSYMBOL_T_pl = 38,                      /* T_pl  */
  YYSYMBOL_T_min = 39,                     /* T_min  */
  YYSYMBOL_T_mul = 40,                     /* T_mul  */
  YYSYMBOL_T_div = 41,                     /* T_div  */
  YYSYMBOL_42_ = 42,                       /* "\""  */
  YYSYMBOL_43_ = 43,                       /* '{'  */
  YYSYMBOL_44_ = 44,                       /* '}'  */
  YYSYMBOL_45_ = 45,                       /* ';'  */
  YYSYMBOL_46_ = 46,                       /* '('  */
  YYSYMBOL_47_ = 47,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_S = 49,                         /* S  */
  YYSYMBOL_START = 50,                     /* START  */
  YYSYMBOL_MAIN = 51,                      /* MAIN  */
  YYSYMBOL_BODY = 52,                      /* BODY  */
  YYSYMBOL_C = 53,                         /* C  */
  YYSYMBOL_LOOPS = 54,                     /* LOOPS  */
  YYSYMBOL_55_1 = 55,                      /* $@1  */
  YYSYMBOL_56_2 = 56,                      /* $@2  */
  YYSYMBOL_57_3 = 57,                      /* $@3  */
  YYSYMBOL_58_4 = 58,                      /* $@4  */
  YYSYMBOL_59_5 = 59,                      /* $@5  */
  YYSYMBOL_60_6 = 60,                      /* $@6  */
  YYSYMBOL_61_7 = 61,                      /* $@7  */
  YYSYMBOL_62_8 = 62,                      /* $@8  */
  YYSYMBOL_TERNARY_EXPR = 63,              /* TERNARY_EXPR  */
  YYSYMBOL_64_9 = 64,                      /* $@9  */
  YYSYMBOL_65_10 = 65,                     /* $@10  */
  YYSYMBOL_LOOPBODY = 66,                  /* LOOPBODY  */
  YYSYMBOL_LOOPC = 67,                     /* LOOPC  */
  YYSYMBOL_statement = 68,                 /* statement  */
  YYSYMBOL_TERNARY_COND = 69,              /* TERNARY_COND  */
  YYSYMBOL_70_11 = 70,                     /* $@11  */
  YYSYMBOL_71_12 = 71,                     /* $@12  */
  YYSYMBOL_T_B = 72,                       /* T_B  */
  YYSYMBOL_73_13 = 73,                     /* $@13  */
  YYSYMBOL_74_14 = 74,                     /* $@14  */
  YYSYMBOL_75_15 = 75,                     /* $@15  */
  YYSYMBOL_76_16 = 76,                     /* $@16  */
  YYSYMBOL_77_17 = 77,                     /* $@17  */
  YYSYMBOL_78_18 = 78,                     /* $@18  */
  YYSYMBOL_T_F = 79,                       /* T_F  */
  YYSYMBOL_80_19 = 80,                     /* $@19  */
  YYSYMBOL_COND = 81,                      /* COND  */
  YYSYMBOL_82_20 = 82,                     /* $@20  */
  YYSYMBOL_83_21 = 83,                     /* $@21  */
  YYSYMBOL_B = 84,                         /* B  */
  YYSYMBOL_85_22 = 85,                     /* $@22  */
  YYSYMBOL_86_23 = 86,                     /* $@23  */
  YYSYMBOL_87_24 = 87,                     /* $@24  */
  YYSYMBOL_88_25 = 88,                     /* $@25  */
  YYSYMBOL_89_26 = 89,                     /* $@26  */
  YYSYMBOL_90_27 = 90,                     /* $@27  */
  YYSYMBOL_F = 91,                         /* F  */
  YYSYMBOL_92_28 = 92,                     /* $@28  */
  YYSYMBOL_V = 93,                         /* V  */
  YYSYMBOL_T_V = 94,                       /* T_V  */
  YYSYMBOL_ASSIGN_EXPR = 95,               /* ASSIGN_EXPR  */
  YYSYMBOL_96_29 = 96,                     /* $@29  */
  YYSYMBOL_97_30 = 97,                     /* $@30  */
  YYSYMBOL_98_31 = 98,                     /* $@31  */
  YYSYMBOL_99_32 = 99,                     /* $@32  */
  YYSYMBOL_EXP = 100,                      /* EXP  */
  YYSYMBOL_101_33 = 101,                   /* $@33  */
  YYSYMBOL_102_34 = 102,                   /* $@34  */
  YYSYMBOL_ADDSUB = 103,                   /* ADDSUB  */
  YYSYMBOL_104_35 = 104,                   /* $@35  */
  YYSYMBOL_105_36 = 105,                   /* $@36  */
  YYSYMBOL_TERM = 106,                     /* TERM  */
  YYSYMBOL_107_37 = 107,                   /* $@37  */
  YYSYMBOL_108_38 = 108,                   /* $@38  */
  YYSYMBOL_FACTOR = 109,                   /* FACTOR  */
  YYSYMBOL_PRINT = 110,                    /* PRINT  */
  YYSYMBOL_LIT = 111,                      /* LIT  */
  YYSYMBOL_TYPE = 112                      /* TYPE  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   226

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      46,    47,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    35,    36,    40,    41,    45,    49,    50,
      51,    52,    56,    56,    56,    57,    57,    57,    57,    58,
      58,    58,    59,    59,    62,    62,    62,    66,    67,    68,
      72,    73,    74,    75,    79,    80,    81,    82,    85,    86,
      86,    87,    87,    88,    91,    91,    91,    92,    92,    93,
      93,    94,    94,    94,    95,    96,    99,    99,   100,   103,
     104,   104,   105,   105,   106,   109,   109,   109,   110,   110,
     111,   111,   112,   112,   112,   113,   114,   117,   117,   118,
     121,   123,   126,   126,   126,   127,   127,   127,   131,   132,
     132,   133,   133,   137,   138,   138,   139,   139,   143,   144,
     144,   145,   145,   149,   150,   154,   155,   158,   159,   162,
     163,   164
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "NUM", "T_lt",
  "T_gt", "T_lteq", "T_gteq", "T_neq", "T_noteq", "T_eqeq", "T_and",
  "T_or", "T_incr", "T_decr", "T_not", "T_eq", "WHILE", "INT", "CHAR",
  "FLOAT", "VOID", "H", "MAINTOK", "INCLUDE", "BREAK", "CONTINUE", "IF",
  "ELSE", "COUT", "STRING", "FOR", "ENDL", "T_ques", "T_colon", "STRUCT",
  "UNION", "T_pl", "T_min", "T_mul", "T_div", "\"\\\"\"", "'{'", "'}'",
  "';'", "'('", "')'", "$accept", "S", "START", "MAIN", "BODY", "C",
  "LOOPS", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "TERNARY_EXPR", "$@9", "$@10", "LOOPBODY", "LOOPC", "statement",
  "TERNARY_COND", "$@11", "$@12", "T_B", "$@13", "$@14", "$@15", "$@16",
  "$@17", "$@18", "T_F", "$@19", "COND", "$@20", "$@21", "B", "$@22",
  "$@23", "$@24", "$@25", "$@26", "$@27", "F", "$@28", "V", "T_V",
  "ASSIGN_EXPR", "$@29", "$@30", "$@31", "$@32", "EXP", "$@33", "$@34",
  "ADDSUB", "$@35", "$@36", "TERM", "$@37", "$@38", "FACTOR", "PRINT",
  "LIT", "TYPE", YY_NULLPTR
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
     295,   296,   297,   123,   125,    59,    40,    41
};
#endif

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-108)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -23,     1,    10,  -120,   -11,    25,  -120,    22,    -8,    -1,
      -1,    12,    28,  -120,  -120,    17,    17,    26,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,    38,    98,    44,    37,
       5,  -120,  -120,    60,  -120,   119,  -120,    33,  -120,  -120,
      93,   113,    67,    11,   122,   111,    97,     4,    13,    72,
     150,    95,   134,  -120,  -120,  -120,    88,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,   137,  -120,    11,  -120,    29,    29,
     100,   177,   178,   128,  -120,  -120,  -120,     4,  -120,   117,
    -120,  -120,   156,  -120,  -120,  -120,  -120,  -120,  -120,    35,
      35,    35,    35,    35,    35,  -120,   165,   139,  -120,   141,
    -120,  -120,   187,  -120,  -120,  -120,  -120,   186,   162,  -120,
     174,    39,    39,   157,   157,   192,   193,    35,   119,    51,
     140,    33,    33,  -120,  -120,    35,  -120,  -120,  -120,   125,
     125,    11,    11,   176,   176,   194,   195,   208,    11,   146,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,   119,    35,
     125,    26,  -120,  -120,   169,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,   182,  -120,  -120,   113,   113,   113,
     119,  -120,  -120,    74,   171,   188,  -120,   113,   113,   113,
    -120,   173,   184,  -120,  -120,  -120,  -120,  -120,   175,  -120,
     125,  -120,  -120,  -120,   146,   146,  -120,  -120,  -120,  -120,
     179,   125,  -120
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     3,     4,     0,     0,     0,     6,     5,
     107,   108,    12,   109,   110,   111,     0,     0,     0,     0,
       0,    11,    36,     0,    34,    35,    88,    93,    98,    37,
     103,     0,     0,     0,     0,     0,    81,     0,     0,     0,
      38,    55,     0,   103,     7,     9,     0,    10,    89,    91,
      94,    96,    99,   101,     0,    85,     0,    80,     0,     0,
       0,    59,    76,     0,    15,    82,    81,     0,    43,     0,
      24,    39,     0,    49,    47,    51,    44,   104,     8,     0,
       0,     0,     0,     0,     0,    83,     0,     0,    64,     0,
      19,    60,     0,    70,    68,    72,    65,   105,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      88,    95,    97,   100,   102,     0,    86,    13,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    42,    56,    50,    58,    48,    52,    45,    84,     0,
       0,     0,    28,    20,     0,    23,    61,    63,    77,    71,
      79,    69,    73,    66,     0,    16,    25,     0,     0,     0,
      87,    14,    33,     0,     0,     0,    29,     0,     0,     0,
     106,     0,     0,    57,    53,    46,    27,    31,     0,    32,
       0,    78,    74,    67,     0,     0,    30,    21,    17,    26,
       0,     0,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,   211,   206,  -120,   -25,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -119,  -120,
     -17,    85,  -120,  -120,    32,  -120,  -120,  -120,  -120,  -120,
    -120,   109,  -120,   -62,  -120,  -120,   130,  -120,  -120,  -120,
    -120,  -120,  -120,    90,  -120,  -120,  -120,   180,  -120,  -120,
    -120,  -120,   -28,  -120,  -120,   112,  -120,  -120,   114,  -120,
    -120,   110,  -120,   -26,  -120
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    13,    18,    30,    31,    42,   150,   108,
     181,   200,   129,   175,   130,    32,   110,   182,   153,   173,
     154,    49,   111,    82,    50,   116,   169,   114,   113,   115,
     168,   143,   167,    70,   131,   102,    71,   136,   179,   134,
     133,   135,   178,   159,   177,    72,    51,    34,    64,   125,
      96,   149,    35,    89,    90,    36,    91,    92,    37,    93,
      94,    38,    39,    40,    41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    52,     1,    53,    97,    55,     4,    76,    20,    21,
       6,   155,     7,    56,    67,    65,    46,    21,    11,    75,
      52,    12,    53,    22,    23,    24,    25,    68,     9,    20,
      21,   171,    67,    26,    10,    27,    15,    28,    20,    21,
      46,    21,    76,     5,    22,    23,    24,    25,     8,    54,
      77,    29,    16,    47,    26,    47,    27,    69,    28,    48,
      17,   118,   118,    53,    53,    53,    53,    53,    53,   156,
     157,   197,    29,    62,    63,    69,   165,    20,    21,    78,
      79,   117,   202,    48,    43,    77,   -90,   144,   144,    52,
      45,    53,    22,    23,    24,    25,   -90,   148,   -90,    53,
      83,    84,    26,    44,    27,    57,    28,   160,   160,    79,
     -82,    85,    86,    66,    20,    21,    20,    21,   186,    80,
      29,   170,   166,    53,    58,    59,   172,    73,    20,    21,
      23,    24,    25,    88,   174,  -107,  -107,  -107,  -107,    58,
      59,   183,   184,   185,    23,    24,    25,   100,   187,    20,
      21,   191,   192,   193,    95,    27,   188,    60,    61,   107,
      20,    21,    81,   -41,   109,    23,    24,    25,   151,   112,
     152,    29,    60,    61,   142,   -92,    27,   198,   199,    20,
      21,    87,   126,   103,   104,   -92,   127,   -92,   128,   101,
     -62,   137,    29,   158,   105,   106,   140,   141,    98,    99,
     132,   119,   120,   123,   124,   121,   122,   138,   139,   146,
     147,   162,   163,   164,   176,   180,   189,   190,   194,   195,
     196,    14,    19,   145,   161,    74,   201
};

static const yytype_uint8 yycheck[] =
{
      17,    29,    25,    29,    66,    30,     5,     3,     3,     4,
       0,   130,    23,    30,     3,    41,     3,     4,    19,    45,
      48,    22,    48,    18,    19,    20,    21,    16,     6,     3,
       4,   150,     3,    28,    42,    30,    24,    32,     3,     4,
       3,     4,     3,    42,    18,    19,    20,    21,    23,    44,
      46,    46,    24,    16,    28,    16,    30,    46,    32,    46,
      43,    89,    90,    89,    90,    91,    92,    93,    94,   131,
     132,   190,    46,    40,    41,    46,   138,     3,     4,    47,
      48,    46,   201,    46,    46,    46,    35,   113,   114,   117,
      46,   117,    18,    19,    20,    21,    45,   125,    47,   125,
       5,     6,    28,     5,    30,    45,    32,   133,   134,    77,
      17,    16,    17,    46,     3,     4,     3,     4,    44,    47,
      46,   149,   139,   149,     5,     6,   151,     5,     3,     4,
      19,    20,    21,    45,   151,    38,    39,    40,    41,     5,
       6,   167,   168,   169,    19,    20,    21,    47,   173,     3,
       4,   177,   178,   179,    17,    30,   173,    38,    39,    31,
       3,     4,    12,    13,    47,    19,    20,    21,    43,    13,
      45,    46,    38,    39,    17,    35,    30,   194,   195,     3,
       4,    47,    17,     5,     6,    45,    47,    47,    47,    12,
      13,     5,    46,    17,    16,    17,   111,   112,    68,    69,
      13,    89,    90,    93,    94,    91,    92,    45,    34,    17,
      17,    17,    17,     5,    45,    33,    45,    29,    45,    35,
      45,    10,    16,   114,   134,    45,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    49,    50,     5,    42,     0,    23,    23,     6,
      42,    19,    22,    51,    51,    24,    24,    43,    52,    52,
       3,     4,    18,    19,    20,    21,    28,    30,    32,    46,
      53,    54,    63,    68,    95,   100,   103,   106,   109,   110,
     111,   112,    55,    46,     5,    46,     3,    16,    46,    69,
      72,    94,   100,   111,    44,    54,    68,    45,     5,     6,
      38,    39,    40,    41,    96,   111,    46,     3,    16,    46,
      81,    84,    93,     5,    95,   111,     3,    46,    72,    72,
      47,    12,    71,     5,     6,    16,    17,    47,    45,   101,
     102,   104,   105,   107,   108,    17,    98,    81,    84,    84,
      47,    12,    83,     5,     6,    16,    17,    31,    57,    47,
      64,    70,    13,    76,    75,    77,    73,    46,   100,   103,
     103,   106,   106,   109,   109,    97,    17,    47,    47,    60,
      62,    82,    13,    88,    87,    89,    85,     5,    45,    34,
      69,    69,    17,    79,   111,    79,    17,    17,   100,    99,
      56,    43,    45,    66,    68,    66,    81,    81,    17,    91,
     111,    91,    17,    17,     5,    81,    68,    80,    78,    74,
     100,    66,    54,    67,    68,    61,    45,    92,    90,    86,
      33,    58,    65,   111,   111,   111,    44,    54,    68,    45,
      29,   111,   111,   111,    45,    35,    45,    66,    68,    68,
      59,    47,    66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    52,    53,    53,
      53,    53,    55,    56,    54,    57,    58,    59,    54,    60,
      61,    54,    62,    54,    64,    65,    63,    66,    66,    66,
      67,    67,    67,    67,    68,    68,    68,    68,    69,    70,
      69,    71,    69,    69,    73,    74,    72,    75,    72,    76,
      72,    77,    78,    72,    72,    72,    80,    79,    79,    81,
      82,    81,    83,    81,    81,    85,    86,    84,    87,    84,
      88,    84,    89,    90,    84,    84,    84,    92,    91,    91,
      93,    94,    96,    97,    95,    98,    99,    95,   100,   101,
     100,   102,   100,   103,   104,   103,   105,   103,   106,   107,
     106,   108,   106,   109,   109,   110,   110,   111,   111,   112,
     112,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     5,     5,     3,     3,     3,     3,     2,
       2,     1,     0,     0,     7,     0,     0,     0,    12,     0,
       0,     9,     0,     6,     0,     0,     9,     3,     1,     2,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     0,
       4,     0,     4,     2,     0,     0,     6,     0,     4,     0,
       4,     0,     0,     6,     3,     1,     0,     3,     1,     1,
       0,     4,     0,     4,     2,     0,     0,     6,     0,     4,
       0,     4,     0,     0,     6,     3,     1,     0,     3,     1,
       1,     1,     0,     0,     5,     0,     0,     6,     1,     0,
       4,     0,     4,     1,     0,     4,     0,     4,     1,     0,
       4,     0,     4,     1,     3,     4,     7,     1,     1,     1,
       1,     1
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
  case 2: /* S: START  */
#line 31 "icg_quad.y"
              {printf("Input accepted.\n");}
#line 1457 "y.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 56 "icg_quad.y"
              {while1();}
#line 1463 "y.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 56 "icg_quad.y"
                                      {while2();}
#line 1469 "y.tab.c"
    break;

  case 14: /* LOOPS: WHILE $@1 '(' COND ')' $@2 LOOPBODY  */
#line 56 "icg_quad.y"
                                                          {while3();}
#line 1475 "y.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 57 "icg_quad.y"
                           {for1();}
#line 1481 "y.tab.c"
    break;

  case 16: /* $@4: %empty  */
#line 57 "icg_quad.y"
                                             {for2();}
#line 1487 "y.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 57 "icg_quad.y"
                                                                    {for3();}
#line 1493 "y.tab.c"
    break;

  case 18: /* LOOPS: FOR '(' ASSIGN_EXPR $@3 ';' COND $@4 ';' statement $@5 ')' LOOPBODY  */
#line 57 "icg_quad.y"
                                                                                          {for4();}
#line 1499 "y.tab.c"
    break;

  case 19: /* $@6: %empty  */
#line 58 "icg_quad.y"
                        {ifelse1();}
#line 1505 "y.tab.c"
    break;

  case 20: /* $@7: %empty  */
#line 58 "icg_quad.y"
                                             {ifelse2();}
#line 1511 "y.tab.c"
    break;

  case 21: /* LOOPS: IF '(' COND ')' $@6 LOOPBODY $@7 ELSE LOOPBODY  */
#line 58 "icg_quad.y"
                                                                       {ifelse3();}
#line 1517 "y.tab.c"
    break;

  case 22: /* $@8: %empty  */
#line 59 "icg_quad.y"
                        {if1();}
#line 1523 "y.tab.c"
    break;

  case 23: /* LOOPS: IF '(' COND ')' $@8 LOOPBODY  */
#line 59 "icg_quad.y"
                                         {if3();}
#line 1529 "y.tab.c"
    break;

  case 24: /* $@9: %empty  */
#line 62 "icg_quad.y"
                              {ternary1();}
#line 1535 "y.tab.c"
    break;

  case 25: /* $@10: %empty  */
#line 62 "icg_quad.y"
                                                            {ternary2();}
#line 1541 "y.tab.c"
    break;

  case 26: /* TERNARY_EXPR: '(' TERNARY_COND ')' $@9 T_ques statement $@10 T_colon statement  */
#line 62 "icg_quad.y"
                                                                                           {ternary3();}
#line 1547 "y.tab.c"
    break;

  case 38: /* TERNARY_COND: T_B  */
#line 85 "icg_quad.y"
                    {codegen_assigna();}
#line 1553 "y.tab.c"
    break;

  case 39: /* $@11: %empty  */
#line 86 "icg_quad.y"
                         {codegen_assigna();}
#line 1559 "y.tab.c"
    break;

  case 41: /* $@12: %empty  */
#line 87 "icg_quad.y"
                    {codegen_assigna();}
#line 1565 "y.tab.c"
    break;

  case 43: /* TERNARY_COND: T_not T_B  */
#line 88 "icg_quad.y"
                         {codegen_assigna();}
#line 1571 "y.tab.c"
    break;

  case 44: /* $@13: %empty  */
#line 91 "icg_quad.y"
              {push();}
#line 1577 "y.tab.c"
    break;

  case 45: /* $@14: %empty  */
#line 91 "icg_quad.y"
                           {push();}
#line 1583 "y.tab.c"
    break;

  case 47: /* $@15: %empty  */
#line 92 "icg_quad.y"
            {push();}
#line 1589 "y.tab.c"
    break;

  case 49: /* $@16: %empty  */
#line 93 "icg_quad.y"
            {push();}
#line 1595 "y.tab.c"
    break;

  case 51: /* $@17: %empty  */
#line 94 "icg_quad.y"
             {push();}
#line 1601 "y.tab.c"
    break;

  case 52: /* $@18: %empty  */
#line 94 "icg_quad.y"
                           {push();}
#line 1607 "y.tab.c"
    break;

  case 55: /* T_B: T_V  */
#line 96 "icg_quad.y"
        {pushab();}
#line 1613 "y.tab.c"
    break;

  case 56: /* $@19: %empty  */
#line 99 "icg_quad.y"
         {push();}
#line 1619 "y.tab.c"
    break;

  case 58: /* T_F: LIT  */
#line 100 "icg_quad.y"
      {pusha();}
#line 1625 "y.tab.c"
    break;

  case 59: /* COND: B  */
#line 103 "icg_quad.y"
          {codegen_assigna();}
#line 1631 "y.tab.c"
    break;

  case 60: /* $@20: %empty  */
#line 104 "icg_quad.y"
               {codegen_assigna();}
#line 1637 "y.tab.c"
    break;

  case 62: /* $@21: %empty  */
#line 105 "icg_quad.y"
          {codegen_assigna();}
#line 1643 "y.tab.c"
    break;

  case 64: /* COND: T_not B  */
#line 106 "icg_quad.y"
               {codegen_assigna();}
#line 1649 "y.tab.c"
    break;

  case 65: /* $@22: %empty  */
#line 109 "icg_quad.y"
          {push();}
#line 1655 "y.tab.c"
    break;

  case 66: /* $@23: %empty  */
#line 109 "icg_quad.y"
                       {push();}
#line 1661 "y.tab.c"
    break;

  case 68: /* $@24: %empty  */
#line 110 "icg_quad.y"
          {push();}
#line 1667 "y.tab.c"
    break;

  case 70: /* $@25: %empty  */
#line 111 "icg_quad.y"
          {push();}
#line 1673 "y.tab.c"
    break;

  case 72: /* $@26: %empty  */
#line 112 "icg_quad.y"
           {push();}
#line 1679 "y.tab.c"
    break;

  case 73: /* $@27: %empty  */
#line 112 "icg_quad.y"
                         {push();}
#line 1685 "y.tab.c"
    break;

  case 76: /* B: V  */
#line 114 "icg_quad.y"
      {pushab();}
#line 1691 "y.tab.c"
    break;

  case 77: /* $@28: %empty  */
#line 117 "icg_quad.y"
       {push();}
#line 1697 "y.tab.c"
    break;

  case 79: /* F: LIT  */
#line 118 "icg_quad.y"
      {pusha();}
#line 1703 "y.tab.c"
    break;

  case 80: /* V: ID  */
#line 121 "icg_quad.y"
      {push();}
#line 1709 "y.tab.c"
    break;

  case 81: /* T_V: ID  */
#line 123 "icg_quad.y"
        {pushx();}
#line 1715 "y.tab.c"
    break;

  case 82: /* $@29: %empty  */
#line 126 "icg_quad.y"
            {push();}
#line 1721 "y.tab.c"
    break;

  case 83: /* $@30: %empty  */
#line 126 "icg_quad.y"
                           {push();}
#line 1727 "y.tab.c"
    break;

  case 84: /* ASSIGN_EXPR: LIT $@29 T_eq $@30 EXP  */
#line 126 "icg_quad.y"
                                         {codegen_assign();}
#line 1733 "y.tab.c"
    break;

  case 85: /* $@31: %empty  */
#line 127 "icg_quad.y"
                 {push();}
#line 1739 "y.tab.c"
    break;

  case 86: /* $@32: %empty  */
#line 127 "icg_quad.y"
                                {push();}
#line 1745 "y.tab.c"
    break;

  case 87: /* ASSIGN_EXPR: TYPE LIT $@31 T_eq $@32 EXP  */
#line 127 "icg_quad.y"
                                              {codegen_assign();}
#line 1751 "y.tab.c"
    break;

  case 89: /* $@33: %empty  */
#line 132 "icg_quad.y"
                     {push();}
#line 1757 "y.tab.c"
    break;

  case 90: /* EXP: EXP T_lt $@33 ADDSUB  */
#line 132 "icg_quad.y"
                                      {codegen();}
#line 1763 "y.tab.c"
    break;

  case 91: /* $@34: %empty  */
#line 133 "icg_quad.y"
                     {push();}
#line 1769 "y.tab.c"
    break;

  case 92: /* EXP: EXP T_gt $@34 ADDSUB  */
#line 133 "icg_quad.y"
                                      {codegen();}
#line 1775 "y.tab.c"
    break;

  case 94: /* $@35: %empty  */
#line 138 "icg_quad.y"
                 {push();}
#line 1781 "y.tab.c"
    break;

  case 95: /* ADDSUB: EXP T_pl $@35 TERM  */
#line 138 "icg_quad.y"
                                {codegen();}
#line 1787 "y.tab.c"
    break;

  case 96: /* $@36: %empty  */
#line 139 "icg_quad.y"
                  {push();}
#line 1793 "y.tab.c"
    break;

  case 97: /* ADDSUB: EXP T_min $@36 TERM  */
#line 139 "icg_quad.y"
                                 {codegen();}
#line 1799 "y.tab.c"
    break;

  case 99: /* $@37: %empty  */
#line 144 "icg_quad.y"
                   {push();}
#line 1805 "y.tab.c"
    break;

  case 100: /* TERM: TERM T_mul $@37 FACTOR  */
#line 144 "icg_quad.y"
                                    {codegen();}
#line 1811 "y.tab.c"
    break;

  case 101: /* $@38: %empty  */
#line 145 "icg_quad.y"
                   {push();}
#line 1817 "y.tab.c"
    break;

  case 102: /* TERM: TERM T_div $@38 FACTOR  */
#line 145 "icg_quad.y"
                                    {codegen();}
#line 1823 "y.tab.c"
    break;

  case 107: /* LIT: ID  */
#line 158 "icg_quad.y"
           {push();}
#line 1829 "y.tab.c"
    break;

  case 108: /* LIT: NUM  */
#line 159 "icg_quad.y"
            {push();}
#line 1835 "y.tab.c"
    break;


#line 1839 "y.tab.c"

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

#line 189 "icg_quad.y"


#include "lex.yy.c"
#include<ctype.h>
char st[100][100];

char i_[2]="0";
int temp_i=0;
char tmp_i[3];
char temp[2]="t";
int label[20];
int lnum=0;
int ltop=0;
int abcd=0;
int l_while=0;
int l_for=0;
int flag_set = 1;

int main(int argc,char *argv[])
{

  yyin = fopen("test2.c","r");
  if(!yyparse())  //yyparse-> 0 if success
  {
    printf("Parsing Complete\n");
    printf("---------------------Quadruples-------------------------\n\n");
    printf("Operator \t Arg1 \t\t Arg2 \t\t Result \n");
    int i;
    for(i=0;i<quadlen;i++)
    {
        printf("%-8s \t %-8s \t %-8s \t %-6s \n",q[i].op,q[i].arg1,q[i].arg2,q[i].res);
    }
  }
  else
  {
    printf("Parsing failed\n");
  }

  fclose(yyin);
  return 0;
}

void yyerror(char *s)
{
  printf("Error :%s at %d \n",yytext,yylineno);
}

push()
{
strcpy(st[++top],yytext);
}
pusha()
{
strcpy(st[++top],"  ");
}
pushx()
{
strcpy(st[++top],"x ");
}
pushab()
{
strcpy(st[++top],"  ");
strcpy(st[++top],"  ");
strcpy(st[++top],"  ");
}
codegen()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,st[top-1]);
    strcpy(q[quadlen].arg1,st[top-2]);
    strcpy(q[quadlen].arg2,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    top-=2;
    strcpy(st[top],temp);

temp_i++;
}
codegen_assigna()
{
strcpy(temp,"T");
sprintf(tmp_i, "%d", temp_i);
strcat(temp,tmp_i);
printf("%s = %s %s %s %s\n",temp,st[top-3],st[top-2],st[top-1],st[top]);
//printf("%d\n",strlen(st[top]));
if(strlen(st[top])==1)
{
	//printf("hello");
	
    char t[20];
	//printf("hello");
	strcpy(t,st[top-2]);
	strcat(t,st[top-1]);
	q[quadlen].op = (char*)malloc(sizeof(char)*strlen(t));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-3]));
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,t);
    strcpy(q[quadlen].arg1,st[top-3]);
    strcpy(q[quadlen].arg2,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    
}
else
{
	q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-3]));
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,st[top-2]);
    strcpy(q[quadlen].arg1,st[top-3]);
    strcpy(q[quadlen].arg2,st[top-1]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
}
top-=4;

temp_i++;
strcpy(st[++top],temp);
}

codegen_umin()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    printf("%s = -%s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"-");
    strcpy(q[quadlen].arg1,st[top-2]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    top--;
    strcpy(st[top],temp);
    temp_i++;
}
codegen_assign()
{
    printf("%s = %s\n",st[top-3],st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[top-3]));
    strcpy(q[quadlen].op,"=");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,st[top-3]);
    quadlen++;
    top-=2;
}

if1()
{
 lnum++;
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 printf("%s = not %s\n",temp,st[top]);
 q[quadlen].op = (char*)malloc(sizeof(char)*4);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
 strcpy(q[quadlen].op,"not");
 strcpy(q[quadlen].arg1,st[top]);
 strcpy(q[quadlen].res,temp);
 quadlen++;
 printf("if %s goto L%d\n",temp,lnum);
 q[quadlen].op = (char*)malloc(sizeof(char)*3);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
 strcpy(q[quadlen].op,"if");
 strcpy(q[quadlen].arg1,st[top-2]);
 char x[10];
 sprintf(x,"%d",lnum);
 char l[]="L";
 strcpy(q[quadlen].res,strcat(l,x));
 quadlen++;

 temp_i++;
 label[++ltop]=lnum;
}

if3()
{
    int y;
    y=label[ltop--];
    printf("L%d: \n",y);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(y+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
}

ifelse1()
{
    lnum++;
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    printf("%s = not %s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    printf("if %s goto L%d\n",temp,lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
    temp_i++;
    label[++ltop]=lnum;
}

ifelse2()
{
    int x;
    lnum++;
    x=label[ltop--];
    printf("goto L%d\n",lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;
    printf("L%d: \n",x);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");

    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;
    label[++ltop]=lnum;
}

ifelse3()
{
int y;
y=label[ltop--];
printf("L%d: \n",y);
q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(y+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
lnum++;
}

ternary1()
{
 lnum++;
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 printf("%s = not %s\n",temp,st[top]);
 q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
 printf("if %s goto L%d\n",temp,lnum);
 q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;

 temp_i++;
 label[++ltop]=lnum;
}

ternary2()
{
int x;
lnum++;
x=label[ltop--];
printf("goto L%d\n",lnum);
q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;
printf("L%d: \n",x);
q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");
    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;
    label[++ltop]=lnum;
}

ternary3()
{
int y;
y=label[ltop--];
printf("L%d: \n",y);
q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(y+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
lnum++;
}

while1()
{

    l_while = lnum;
    printf("L%d: \n",lnum++);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",lnum-1);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
}

while2()
{
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 printf("%s = not %s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    printf("if %s goto L%d\n",temp,lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;

 temp_i++;
 }

while3()
{

printf("goto L%d \n",l_while);
q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(l_while+2));
    strcpy(q[quadlen].op,"goto");
    char x[10];
    sprintf(x,"%d",l_while);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
    printf("L%d: \n",lnum++);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x1[10];
    sprintf(x1,"%d",lnum-1);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,x1));
    quadlen++;
}

for1()
{
    l_for = lnum;
    printf("L%d: \n",lnum++);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",lnum-1);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
}
for2()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    printf("%s = not %s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    printf("if %s goto L%d\n",temp,lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;

    temp_i++;
    label[++ltop]=lnum;
    lnum++;
    printf("goto L%d\n",lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"goto");
    char x1[10];
    sprintf(x1,"%d",lnum);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,x1));
    quadlen++;
    label[++ltop]=lnum;
    printf("L%d: \n",++lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x2[10];
    sprintf(x2,"%d",lnum);
    char l2[]="L";
    strcpy(q[quadlen].res,strcat(l2,x2));
    quadlen++;
 }
for3()
{
    int x;
    x=label[ltop--];
    printf("goto L%d \n",l_for);

    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",l_for);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;


    printf("L%d: \n",x);

    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");
    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;

}

for4()
{
    int x;
    x=label[ltop--];
    printf("goto L%d \n",lnum);

    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;

    printf("L%d: \n",x);

    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");
    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;
}
