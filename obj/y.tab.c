/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser.y"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<../src/tree.h>
#include<../src/strtab.h>

extern int yylineno;

/* Update p_ast & p_symtab value for yyerror. If error occurs, ast tree & symbol table is not printed */
extern int p_ast;
extern int p_symtab;

enum nodeTypes {PROGRAM, DECLLIST, DECL, VARDECL, TYPESPEC, FUNDECL,
                FORMALDECLLIST, FORMALDECL, FUNBODY, LOCALDECLLIST,
                STATEMENTLIST, STATEMENT, COMPOUNDSTMT, ASSIGNSTMT,
                CONDSTMT, LOOPSTMT, RETURNSTMT, UNARYSTMT, EXPRESSION, RELOP,
                ADDEXPR, ADDOP, TERM, MULOP, FACTOR, FUNCCALLEXPR,
                ARGLIST, INTEGER, IDENTIFIER, VAR, ARRAYDECL, CHAR, STRING, 
                FUNCTYPENAME, LOGICALOP, UNARYOP, IF, ELSE, WHILE, RETURN, ASSIGNOP};

enum opType {ADD, SUB, MUL, DIV, MOD, LT, LTE, EQ, GTE, GT, NEQ, AND, OR, NOT, INC, DEC, ASSIGN};

//tree *ast;  /* pointer to AST root */

char* id;
char *funName;


#line 101 "obj/y.tab.c"

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

#include "y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INTCONST = 4,                   /* INTCONST  */
  YYSYMBOL_CHARCONST = 5,                  /* CHARCONST  */
  YYSYMBOL_STRCONST = 6,                   /* STRCONST  */
  YYSYMBOL_KWD_IF = 7,                     /* KWD_IF  */
  YYSYMBOL_KWD_ELSE = 8,                   /* KWD_ELSE  */
  YYSYMBOL_KWD_WHILE = 9,                  /* KWD_WHILE  */
  YYSYMBOL_KWD_INT = 10,                   /* KWD_INT  */
  YYSYMBOL_KWD_STRING = 11,                /* KWD_STRING  */
  YYSYMBOL_KWD_CHAR = 12,                  /* KWD_CHAR  */
  YYSYMBOL_KWD_VOID = 13,                  /* KWD_VOID  */
  YYSYMBOL_KWD_RETURN = 14,                /* KWD_RETURN  */
  YYSYMBOL_OPER_ADD = 15,                  /* OPER_ADD  */
  YYSYMBOL_OPER_SUB = 16,                  /* OPER_SUB  */
  YYSYMBOL_OPER_MUL = 17,                  /* OPER_MUL  */
  YYSYMBOL_OPER_DIV = 18,                  /* OPER_DIV  */
  YYSYMBOL_OPER_MOD = 19,                  /* OPER_MOD  */
  YYSYMBOL_OPER_LT = 20,                   /* OPER_LT  */
  YYSYMBOL_OPER_GT = 21,                   /* OPER_GT  */
  YYSYMBOL_OPER_LTE = 22,                  /* OPER_LTE  */
  YYSYMBOL_OPER_GTE = 23,                  /* OPER_GTE  */
  YYSYMBOL_OPER_EQ = 24,                   /* OPER_EQ  */
  YYSYMBOL_OPER_NEQ = 25,                  /* OPER_NEQ  */
  YYSYMBOL_OPER_ASGN = 26,                 /* OPER_ASGN  */
  YYSYMBOL_OPER_AT = 27,                   /* OPER_AT  */
  YYSYMBOL_OPER_INC = 28,                  /* OPER_INC  */
  YYSYMBOL_OPER_DEC = 29,                  /* OPER_DEC  */
  YYSYMBOL_LSQ_BRKT = 30,                  /* LSQ_BRKT  */
  YYSYMBOL_RSQ_BRKT = 31,                  /* RSQ_BRKT  */
  YYSYMBOL_LCRLY_BRKT = 32,                /* LCRLY_BRKT  */
  YYSYMBOL_RCRLY_BRKT = 33,                /* RCRLY_BRKT  */
  YYSYMBOL_LPAREN = 34,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 35,                    /* RPAREN  */
  YYSYMBOL_COMMA = 36,                     /* COMMA  */
  YYSYMBOL_SEMICLN = 37,                   /* SEMICLN  */
  YYSYMBOL_OPER_AND = 38,                  /* OPER_AND  */
  YYSYMBOL_OPER_OR = 39,                   /* OPER_OR  */
  YYSYMBOL_OPER_NOT = 40,                  /* OPER_NOT  */
  YYSYMBOL_ERROR = 41,                     /* ERROR  */
  YYSYMBOL_IFX = 42,                       /* IFX  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_declList = 45,                  /* declList  */
  YYSYMBOL_decl = 46,                      /* decl  */
  YYSYMBOL_varDecl = 47,                   /* varDecl  */
  YYSYMBOL_typeSpecifier = 48,             /* typeSpecifier  */
  YYSYMBOL_funDecl = 49,                   /* funDecl  */
  YYSYMBOL_funcTypeName = 50,              /* funcTypeName  */
  YYSYMBOL_formalDeclList = 51,            /* formalDeclList  */
  YYSYMBOL_formalDecl = 52,                /* formalDecl  */
  YYSYMBOL_funBody = 53,                   /* funBody  */
  YYSYMBOL_localDeclList = 54,             /* localDeclList  */
  YYSYMBOL_statementList = 55,             /* statementList  */
  YYSYMBOL_statement = 56,                 /* statement  */
  YYSYMBOL_compoundStmt = 57,              /* compoundStmt  */
  YYSYMBOL_assignStmt = 58,                /* assignStmt  */
  YYSYMBOL_condStmt = 59,                  /* condStmt  */
  YYSYMBOL_loopStmt = 60,                  /* loopStmt  */
  YYSYMBOL_returnStmt = 61,                /* returnStmt  */
  YYSYMBOL_unaryStmt = 62,                 /* unaryStmt  */
  YYSYMBOL_unaryop = 63,                   /* unaryop  */
  YYSYMBOL_var = 64,                       /* var  */
  YYSYMBOL_expression = 65,                /* expression  */
  YYSYMBOL_relop = 66,                     /* relop  */
  YYSYMBOL_addExpr = 67,                   /* addExpr  */
  YYSYMBOL_addop = 68,                     /* addop  */
  YYSYMBOL_term = 69,                      /* term  */
  YYSYMBOL_mulop = 70,                     /* mulop  */
  YYSYMBOL_factor = 71,                    /* factor  */
  YYSYMBOL_funCallExpr = 72,               /* funCallExpr  */
  YYSYMBOL_argList = 73,                   /* argList  */
  YYSYMBOL_conditionExpr = 74,             /* conditionExpr  */
  YYSYMBOL_logicalop = 75                  /* logicalop  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  128

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    73,    73,    81,    87,    96,   117,   125,   158,   179,
     183,   187,   191,   197,   220,   241,   258,   264,   273,   297,
     324,   334,   337,   362,   365,   374,   380,   386,   392,   398,
     404,   412,   420,   441,   449,   457,   469,   479,   485,   494,
     501,   510,   514,   520,   558,   616,   622,   632,   636,   640,
     644,   648,   652,   658,   664,   674,   678,   684,   690,   700,
     704,   708,   714,   720,   726,   732,   738,   744,   752,   802,
     849,   855,   864,   870,   878,   887,   891
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INTCONST",
  "CHARCONST", "STRCONST", "KWD_IF", "KWD_ELSE", "KWD_WHILE", "KWD_INT",
  "KWD_STRING", "KWD_CHAR", "KWD_VOID", "KWD_RETURN", "OPER_ADD",
  "OPER_SUB", "OPER_MUL", "OPER_DIV", "OPER_MOD", "OPER_LT", "OPER_GT",
  "OPER_LTE", "OPER_GTE", "OPER_EQ", "OPER_NEQ", "OPER_ASGN", "OPER_AT",
  "OPER_INC", "OPER_DEC", "LSQ_BRKT", "RSQ_BRKT", "LCRLY_BRKT",
  "RCRLY_BRKT", "LPAREN", "RPAREN", "COMMA", "SEMICLN", "OPER_AND",
  "OPER_OR", "OPER_NOT", "ERROR", "IFX", "$accept", "program", "declList",
  "decl", "varDecl", "typeSpecifier", "funDecl", "funcTypeName",
  "formalDeclList", "formalDecl", "funBody", "localDeclList",
  "statementList", "statement", "compoundStmt", "assignStmt", "condStmt",
  "loopStmt", "returnStmt", "unaryStmt", "unaryop", "var", "expression",
  "relop", "addExpr", "addop", "term", "mulop", "factor", "funCallExpr",
  "argList", "conditionExpr", "logicalop", YY_NULLPTR
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
     295,   296,   297
};
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      81,   -89,   -89,   -89,   -89,     4,   -89,    81,   -89,    18,
     -89,     0,   -89,   -89,   -15,    55,    36,   -89,    13,    57,
      37,    38,    52,    81,   -89,    49,    13,    81,    47,    81,
      83,    48,    91,   -89,   -89,   -89,   -89,   -15,    12,   -89,
     -89,   -89,    89,    90,     7,   -89,   -89,    48,    44,   105,
      48,   -89,   -89,   -89,   -89,   -89,   -89,   136,    35,    82,
      54,    99,   -89,   -89,   -89,    44,    24,     3,    44,   -89,
     -89,    88,   107,   112,   -89,   -89,   111,   108,    44,   109,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,    44,   -89,   -89,
      44,   -89,   -89,   -89,    44,   -13,   -89,   134,    85,    44,
      76,   125,   128,   -89,   -89,   -89,   -89,   106,   -89,    54,
      99,   -89,   -89,   -89,    44,   134,   -89,   -89,    44,    48,
      48,   -89,   134,   134,   153,   -89,    48,   -89
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     9,    11,    10,    12,     0,     2,     3,     5,     0,
       6,     0,     1,     4,    15,     0,     0,     8,     0,     0,
       0,    16,     0,    21,    14,    18,     0,     0,     0,    21,
       0,    23,     0,    13,    17,     7,    22,     0,    43,    65,
      66,    67,     0,     0,     0,    41,    42,    23,     0,     0,
      23,    25,    26,    27,    28,    29,    30,     0,    63,     0,
      45,    53,    57,    64,    19,     0,     0,     0,     0,    37,
      63,     0,     0,     0,    20,    24,    43,     0,     0,     0,
      47,    48,    49,    50,    51,    52,    33,     0,    55,    56,
       0,    59,    60,    61,     0,     0,    69,    70,     0,     0,
      72,     0,     0,    38,    31,    62,    39,     0,    40,    46,
      54,    58,    44,    68,     0,    74,    75,    76,     0,     0,
       0,    32,    71,    73,    34,    36,     0,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   135,   -89,    10,    58,   -89,   -89,   117,   -89,
     138,   133,   -30,   -88,   -89,   -89,   -89,   -89,   -89,   -89,
     110,   -31,   -43,   -89,   -51,   -89,    75,   -89,    72,   -89,
     -89,   -89,   -89
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,     8,     9,    10,    11,    20,    21,
      24,    31,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    70,    59,    87,    60,    90,    61,    94,    62,    63,
      98,   101,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      58,    71,    88,    89,    12,    73,    38,    39,    40,    41,
      38,    39,    40,    41,    95,    16,    58,    72,   112,    58,
      75,    14,    17,    97,   100,   102,    77,    38,    39,    40,
      41,   124,   125,    29,    15,   107,   109,    48,   127,    29,
      22,    48,    65,    99,    69,    23,    66,    38,    39,    40,
      41,    38,    39,    40,    41,    42,   115,    43,    48,    96,
      25,    78,    44,    45,    46,     1,     2,     3,     4,    88,
      89,   122,    26,    19,    27,   123,    45,    46,    48,    32,
      47,    30,    48,    28,    35,    19,    37,    30,    58,    58,
      18,     1,     2,     3,     4,    58,    80,    81,    82,    83,
      84,    85,    80,    81,    82,    83,    84,    85,    80,    81,
      82,    83,    84,    85,   116,   117,    91,    92,    93,    86,
     113,   114,    64,    67,    68,   103,    80,    81,    82,    83,
      84,    85,    80,    81,    82,    83,    84,    85,    74,    76,
     104,    65,    13,   121,    34,   106,   108,   105,    80,    81,
      82,    83,    84,    85,    80,    81,    82,    83,    84,    85,
     119,   126,    36,   120,    33,   110,   111,     0,    79
};

static const yytype_int8 yycheck[] =
{
      31,    44,    15,    16,     0,    48,     3,     4,     5,     6,
       3,     4,     5,     6,    65,    30,    47,    47,    31,    50,
      50,     3,    37,    66,    67,    68,    57,     3,     4,     5,
       6,   119,   120,    23,    34,    78,    87,    34,   126,    29,
       4,    34,    30,    40,    37,    32,    34,     3,     4,     5,
       6,     3,     4,     5,     6,     7,    99,     9,    34,    35,
       3,    26,    14,    28,    29,    10,    11,    12,    13,    15,
      16,   114,    35,    15,    36,   118,    28,    29,    34,    30,
      32,    23,    34,    31,    37,    27,     3,    29,   119,   120,
      35,    10,    11,    12,    13,   126,    20,    21,    22,    23,
      24,    25,    20,    21,    22,    23,    24,    25,    20,    21,
      22,    23,    24,    25,    38,    39,    17,    18,    19,    37,
      35,    36,    31,    34,    34,    37,    20,    21,    22,    23,
      24,    25,    20,    21,    22,    23,    24,    25,    33,     3,
      33,    30,     7,    37,    27,    37,    37,    35,    20,    21,
      22,    23,    24,    25,    20,    21,    22,    23,    24,    25,
      35,     8,    29,    35,    26,    90,    94,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    11,    12,    13,    44,    45,    46,    47,    48,
      49,    50,     0,    45,     3,    34,    30,    37,    35,    48,
      51,    52,     4,    32,    53,     3,    35,    36,    31,    47,
      48,    54,    30,    53,    51,    37,    54,     3,     3,     4,
       5,     6,     7,     9,    14,    28,    29,    32,    34,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      67,    69,    71,    72,    31,    30,    34,    34,    34,    37,
      64,    65,    55,    65,    33,    55,     3,    64,    26,    63,
      20,    21,    22,    23,    24,    25,    37,    66,    15,    16,
      68,    17,    18,    19,    70,    67,    35,    65,    73,    40,
      65,    74,    65,    37,    33,    35,    37,    65,    37,    67,
      69,    71,    31,    35,    36,    65,    38,    39,    75,    35,
      35,    37,    65,    65,    56,    56,     8,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    47,    47,    48,
      48,    48,    48,    49,    49,    50,    51,    51,    52,    52,
      53,    54,    54,    55,    55,    56,    56,    56,    56,    56,
      56,    57,    58,    58,    59,    59,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    66,
      66,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    70,    71,    71,    71,    71,    71,    71,    72,    72,
      73,    73,    74,    74,    74,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     6,     3,     1,
       1,     1,     1,     5,     4,     2,     1,     3,     2,     4,
       4,     0,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     3,     4,     2,     5,     7,     5,     2,     3,     3,
       3,     1,     1,     1,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     4,     3,
       1,     3,     1,     3,     2,     1,     1
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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  case 2: /* program: declList  */
#line 74 "src/parser.y"
                                {
					tree *progNode = maketree(PROGRAM);
                	addChild(progNode, (yyvsp[0].node));
                	ast = progNode;
				}
#line 1275 "obj/y.tab.c"
    break;

  case 3: /* declList: decl  */
#line 82 "src/parser.y"
                                {
					tree *declListNode = maketree(DECLLIST);
                	addChild(declListNode, (yyvsp[0].node));
                	(yyval.node) = declListNode;
				}
#line 1285 "obj/y.tab.c"
    break;

  case 4: /* declList: decl declList  */
#line 88 "src/parser.y"
                {
					tree *declListNode = maketree(DECLLIST);
                	addChild(declListNode, (yyvsp[-1].node));
                	addChild(declListNode, (yyvsp[0].node));
                	(yyval.node) = declListNode;
				}
#line 1296 "obj/y.tab.c"
    break;

  case 5: /* decl: varDecl  */
#line 97 "src/parser.y"
                                {
					// ----- Symbol Table Entry for global variable ----- //
					// 'varDecl' node contains both data_type & identifier value.
					// Here indicates the scope of the variable.

					tree *varNode = (yyvsp[0].node);
					tree *idNode = varNode->children[1];
					idNode->scope = "global";

					// Last value of ST_insert is for FUNCTION parameter

					int hash = ST_insert(idNode->str_val, idNode->scope, idNode->data_type, idNode->sym_type, NULL);
					idNode->val = hash;

					// ----- Symbol Table Entry for global variable ----- //

					tree *declNode = maketree(DECL);
                	addChild(declNode, (yyvsp[0].node));
                	(yyval.node) = declNode;
				}
#line 1321 "obj/y.tab.c"
    break;

  case 6: /* decl: funDecl  */
#line 118 "src/parser.y"
                {
					tree *declNode = maketree(DECL);
                	addChild(declNode, (yyvsp[0].node));
                	(yyval.node) = declNode;
				}
#line 1331 "obj/y.tab.c"
    break;

  case 7: /* varDecl: typeSpecifier ID LSQ_BRKT INTCONST RSQ_BRKT SEMICLN  */
#line 126 "src/parser.y"
                                {
					// ----- IDENTIFIER ----- //

					tree *typeSpecNode = (yyvsp[-5].node);
					int data_type = typeSpecNode->val;

					tree *idNode = maketreeWithStrVal(IDENTIFIER, id);
					idNode->scope = "";
					idNode->data_type = data_type;
					idNode->sym_type = ARRAY;

					// ----- IDENTIFIER ----- //

					// ----- Check error for Array ----- //

					int array_size = yylval.value;
					if(array_size == 0){
						yyerror("Array variable declared with size of zero.");
					}
					else if(array_size == -1){
						yyerror("Statically sized array indexed with constant, out-of-bounds expression.");
					}

					// ----- Check error for Array ----- //

					tree *varDeclNode = maketree(VARDECL);
                	addChild(varDeclNode, (yyvsp[-5].node));
                	addChild(varDeclNode, idNode);
                	addChild(varDeclNode, maketreeWithIntVal(INTEGER, yylval.value));
                	addChild(varDeclNode, maketree(ARRAYDECL));
                	(yyval.node) = varDeclNode;
				}
#line 1368 "obj/y.tab.c"
    break;

  case 8: /* varDecl: typeSpecifier ID SEMICLN  */
#line 159 "src/parser.y"
                                {
					// ----- IDENTIFIER ----- //

					tree *typeSpecNode = (yyvsp[-2].node);
					int data_type = typeSpecNode->val;

					tree *idNode = maketreeWithStrVal(IDENTIFIER, id);
					idNode->scope = "";
					idNode->data_type = data_type;
					idNode->sym_type = SCALAR;

					// ----- IDENTIFIER ----- //

					tree *varDeclNode = maketree(VARDECL);
                	addChild(varDeclNode, (yyvsp[-2].node));
                	addChild(varDeclNode, idNode);
                	(yyval.node) = varDeclNode;
				}
#line 1391 "obj/y.tab.c"
    break;

  case 9: /* typeSpecifier: KWD_INT  */
#line 180 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(TYPESPEC, INT_TYPE);
				}
#line 1399 "obj/y.tab.c"
    break;

  case 10: /* typeSpecifier: KWD_CHAR  */
#line 184 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(TYPESPEC, CHAR_TYPE);
				}
#line 1407 "obj/y.tab.c"
    break;

  case 11: /* typeSpecifier: KWD_STRING  */
#line 188 "src/parser.y"
                {
					(yyval.node) = maketreeWithIntVal(TYPESPEC, STRING_TYPE);
				}
#line 1415 "obj/y.tab.c"
    break;

  case 12: /* typeSpecifier: KWD_VOID  */
#line 192 "src/parser.y"
                {
					(yyval.node) = maketreeWithIntVal(TYPESPEC, VOID_TYPE);
				}
#line 1423 "obj/y.tab.c"
    break;

  case 13: /* funDecl: funcTypeName LPAREN formalDeclList RPAREN funBody  */
#line 198 "src/parser.y"
                                {
					// ----- Symbol Table Entry for function ----- //

					tree *funTypeNameNode = (yyvsp[-4].node);
					tree *idNode = funTypeNameNode->children[1];

					tree *funParamNode = (yyvsp[-2].node);

					// Last value of ST_insert is for FUNCTION parameter

					int hash = ST_insert(idNode->str_val, idNode->scope, idNode->data_type, idNode->sym_type, funParamNode);
					idNode->val = hash;

					// ----- Symbol Table Entry for function ----- //


					tree *funDeclNode = maketree(FUNDECL);
                	addChild(funDeclNode, (yyvsp[-4].node));
                	addChild(funDeclNode, (yyvsp[-2].node));
                	addChild(funDeclNode, (yyvsp[0].node));
                	(yyval.node) = funDeclNode;
				}
#line 1450 "obj/y.tab.c"
    break;

  case 14: /* funDecl: funcTypeName LPAREN RPAREN funBody  */
#line 221 "src/parser.y"
                                {
					// ----- Symbol Table Entry for function ----- //

					tree *funTypeNameNode = (yyvsp[-3].node);
					tree *idNode = funTypeNameNode->children[1];

					// Last value of ST_insert is for FUNCTION parameter

					int hash = ST_insert(idNode->str_val, idNode->scope, idNode->data_type, idNode->sym_type, NULL);
					idNode->val = hash;

					// ----- Symbol Table Entry for function ----- //

					tree *funDeclNode = maketree(FUNDECL);
                	addChild(funDeclNode, (yyvsp[-3].node));
                	addChild(funDeclNode, (yyvsp[0].node));
                	(yyval.node) = funDeclNode;
				}
#line 1473 "obj/y.tab.c"
    break;

  case 15: /* funcTypeName: typeSpecifier ID  */
#line 242 "src/parser.y"
                                {
					tree *typeSpecNode = (yyvsp[-1].node);
					int data_type = typeSpecNode->val;

					tree *idNode = maketreeWithStrVal(IDENTIFIER, id);
					idNode->scope = "global";
					idNode->data_type = data_type;
					idNode->sym_type = FUNCTION;

					tree *funcTypeNameNode = maketree(FUNCTYPENAME);
                	addChild(funcTypeNameNode, (yyvsp[-1].node));
                	addChild(funcTypeNameNode, idNode);
                	(yyval.node) = funcTypeNameNode;
				}
#line 1492 "obj/y.tab.c"
    break;

  case 16: /* formalDeclList: formalDecl  */
#line 259 "src/parser.y"
                                {
					tree *formalDeclListNode = maketree(FORMALDECLLIST);
                	addChild(formalDeclListNode, (yyvsp[0].node));
                	(yyval.node) = formalDeclListNode;
				}
#line 1502 "obj/y.tab.c"
    break;

  case 17: /* formalDeclList: formalDecl COMMA formalDeclList  */
#line 265 "src/parser.y"
                                {
					tree *formalDeclListNode = maketree(FORMALDECLLIST);
                	addChild(formalDeclListNode, (yyvsp[-2].node));
                	addChild(formalDeclListNode, (yyvsp[0].node));
                	(yyval.node) = formalDeclListNode;
				}
#line 1513 "obj/y.tab.c"
    break;

  case 18: /* formalDecl: typeSpecifier ID  */
#line 274 "src/parser.y"
                                {
					// ----- Symbol Table Entry for function arg ----- //

					tree *typeSpecNode = (yyvsp[-1].node);
					int data_type = typeSpecNode->val;

					tree *idNode = maketreeWithStrVal(IDENTIFIER, id);
					idNode->scope = "local";
					idNode->data_type = data_type;
					idNode->sym_type = ARG_SCALAR;

					// Last value of ST_insert is for FUNCTION parameter

					int hash = ST_insert(idNode->str_val, idNode->scope, idNode->data_type, idNode->sym_type, NULL);
					idNode->val = hash;

					// ----- Symbol Table Entry for function arg ----- //

					tree *formalDeclNode = maketree(FORMALDECL);
                	addChild(formalDeclNode, (yyvsp[-1].node));
                	addChild(formalDeclNode, idNode);
                	(yyval.node) = formalDeclNode;
				}
#line 1541 "obj/y.tab.c"
    break;

  case 19: /* formalDecl: typeSpecifier ID LSQ_BRKT RSQ_BRKT  */
#line 298 "src/parser.y"
                                {
					// ----- Symbol Table Entry for function arg ----- //

					tree *typeSpecNode = (yyvsp[-3].node);
					int data_type = typeSpecNode->val;

					tree *idNode = maketreeWithStrVal(IDENTIFIER, id);
					idNode->scope = "local";
					idNode->data_type = data_type;
					idNode->sym_type = ARG_ARRAY;

					// Last value of ST_insert is for FUNCTION parameter

					int hash = ST_insert(idNode->str_val, idNode->scope, idNode->data_type, idNode->sym_type, NULL);
					idNode->val = hash;

					// ----- Symbol Table Entry for function arg ----- //

					tree *formalDeclNode = maketree(FORMALDECL);
                	addChild(formalDeclNode, (yyvsp[-3].node));
                	addChild(formalDeclNode, idNode);
                	addChild(formalDeclNode, maketree(ARRAYDECL));
                	(yyval.node) = formalDeclNode;
				}
#line 1570 "obj/y.tab.c"
    break;

  case 20: /* funBody: LCRLY_BRKT localDeclList statementList RCRLY_BRKT  */
#line 325 "src/parser.y"
                                {
					tree *funBodyNode = maketree(FUNBODY);
                	addChild(funBodyNode, (yyvsp[-2].node));
                	addChild(funBodyNode, (yyvsp[-1].node));
                	(yyval.node) = funBodyNode;
				}
#line 1581 "obj/y.tab.c"
    break;

  case 21: /* localDeclList: %empty  */
#line 334 "src/parser.y"
                                {
                	(yyval.node) = NULL;
				}
#line 1589 "obj/y.tab.c"
    break;

  case 22: /* localDeclList: varDecl localDeclList  */
#line 338 "src/parser.y"
                                {
					// ----- Symbol Table Entry for local variable ----- //
					// 'varDecl' node contains both data_type & identifier value.
					// Here indicates the scope of the variable.

					tree *varNode = (yyvsp[-1].node);
					tree *idNode = varNode->children[1];
					idNode->scope = "local";

					// Last value of ST_insert is for FUNCTION parameter

					int hash = ST_insert(idNode->str_val, idNode->scope, idNode->data_type, idNode->sym_type, NULL);
					idNode->val = hash;

					// ----- Symbol Table Entry for local variable ----- //

					tree *localDeclListNode = maketree(LOCALDECLLIST);
                	addChild(localDeclListNode, (yyvsp[-1].node));
                	addChild(localDeclListNode, (yyvsp[0].node));
                	(yyval.node) = localDeclListNode;
				}
#line 1615 "obj/y.tab.c"
    break;

  case 23: /* statementList: %empty  */
#line 362 "src/parser.y"
                                {
                	(yyval.node) = NULL;
				}
#line 1623 "obj/y.tab.c"
    break;

  case 24: /* statementList: statement statementList  */
#line 366 "src/parser.y"
                                {
					tree *statementListNode = maketree(STATEMENTLIST);
                	addChild(statementListNode, (yyvsp[-1].node));
                	addChild(statementListNode, (yyvsp[0].node));
                	(yyval.node) = statementListNode;
				}
#line 1634 "obj/y.tab.c"
    break;

  case 25: /* statement: compoundStmt  */
#line 375 "src/parser.y"
                                {
					tree *statementNode = maketree(STATEMENT);
                	addChild(statementNode, (yyvsp[0].node));
                	(yyval.node) = statementNode;
				}
#line 1644 "obj/y.tab.c"
    break;

  case 26: /* statement: assignStmt  */
#line 381 "src/parser.y"
                                {
					tree *statementNode = maketree(STATEMENT);
                	addChild(statementNode, (yyvsp[0].node));
                	(yyval.node) = statementNode;
				}
#line 1654 "obj/y.tab.c"
    break;

  case 27: /* statement: condStmt  */
#line 387 "src/parser.y"
                {
					tree *statementNode = maketree(STATEMENT);
                	addChild(statementNode, (yyvsp[0].node));
                	(yyval.node) = statementNode;
				}
#line 1664 "obj/y.tab.c"
    break;

  case 28: /* statement: loopStmt  */
#line 393 "src/parser.y"
                {
					tree *statementNode = maketree(STATEMENT);
                	addChild(statementNode, (yyvsp[0].node));
                	(yyval.node) = statementNode;
				}
#line 1674 "obj/y.tab.c"
    break;

  case 29: /* statement: returnStmt  */
#line 399 "src/parser.y"
                {
					tree *statementNode = maketree(STATEMENT);
                	addChild(statementNode, (yyvsp[0].node));
                	(yyval.node) = statementNode;
				}
#line 1684 "obj/y.tab.c"
    break;

  case 30: /* statement: unaryStmt  */
#line 405 "src/parser.y"
                                {
					tree *statementNode = maketree(STATEMENT);
                	addChild(statementNode, (yyvsp[0].node));
                	(yyval.node) = statementNode;
				}
#line 1694 "obj/y.tab.c"
    break;

  case 31: /* compoundStmt: LCRLY_BRKT statementList RCRLY_BRKT  */
#line 413 "src/parser.y"
                                {
					tree *compoundStmtNode = maketree(COMPOUNDSTMT);
                	addChild(compoundStmtNode, (yyvsp[-1].node));
                	(yyval.node) = compoundStmtNode;
				}
#line 1704 "obj/y.tab.c"
    break;

  case 32: /* assignStmt: var OPER_ASGN expression SEMICLN  */
#line 421 "src/parser.y"
                                {
					// ----- TYPE MIS-MATCH ----- //

					tree *leftNode = (yyvsp[-3].node);
					tree *rightNode = (yyvsp[-1].node);

					int isMatch = isTypeMatch(leftNode, rightNode);
					if(isMatch == -1){
						yyerror("Type mismatch in assignment.");
					}


					// ----- TYPE MIS-MATCH ----- //

					tree *assignStmtNode = maketree(ASSIGNSTMT);
                	addChild(assignStmtNode, (yyvsp[-3].node));
                	addChild(assignStmtNode, maketreeWithIntVal(ASSIGNOP, ASSIGN));
                	addChild(assignStmtNode, (yyvsp[-1].node));
                	(yyval.node) = assignStmtNode;
				}
#line 1729 "obj/y.tab.c"
    break;

  case 33: /* assignStmt: expression SEMICLN  */
#line 442 "src/parser.y"
                                {
					tree *assignStmtNode = maketree(ASSIGNSTMT);
                	addChild(assignStmtNode, (yyvsp[-1].node));
                	(yyval.node) = assignStmtNode;
				}
#line 1739 "obj/y.tab.c"
    break;

  case 34: /* condStmt: KWD_IF LPAREN conditionExpr RPAREN statement  */
#line 450 "src/parser.y"
                                {
					tree *condStmtNode = maketree(CONDSTMT);
					addChild(condStmtNode, maketree(IF));
					addChild(condStmtNode, (yyvsp[-2].node));
                	addChild(condStmtNode, (yyvsp[0].node));	
                	(yyval.node) = condStmtNode;
				}
#line 1751 "obj/y.tab.c"
    break;

  case 35: /* condStmt: KWD_IF LPAREN conditionExpr RPAREN statement KWD_ELSE statement  */
#line 458 "src/parser.y"
                                {
					tree *condStmtNode = maketree(CONDSTMT);
					addChild(condStmtNode, maketree(IF));
					addChild(condStmtNode, (yyvsp[-4].node));
                	addChild(condStmtNode, (yyvsp[-2].node));	
                	addChild(condStmtNode, maketree(ELSE));
                	addChild(condStmtNode, (yyvsp[0].node));
                	(yyval.node) = condStmtNode;
				}
#line 1765 "obj/y.tab.c"
    break;

  case 36: /* loopStmt: KWD_WHILE LPAREN expression RPAREN statement  */
#line 470 "src/parser.y"
                                {
					tree *loopStmtNode = maketree(LOOPSTMT);
                	addChild(loopStmtNode, maketree(WHILE));
                	addChild(loopStmtNode, (yyvsp[-2].node));
                	addChild(loopStmtNode, (yyvsp[0].node));
                	(yyval.node) = loopStmtNode;
				}
#line 1777 "obj/y.tab.c"
    break;

  case 37: /* returnStmt: KWD_RETURN SEMICLN  */
#line 480 "src/parser.y"
                                {
					tree *returnStmtNode = maketree(RETURNSTMT);
                	addChild(returnStmtNode, maketree(RETURN));
                	(yyval.node) = returnStmtNode;
				}
#line 1787 "obj/y.tab.c"
    break;

  case 38: /* returnStmt: KWD_RETURN expression SEMICLN  */
#line 486 "src/parser.y"
                                {
					tree *returnStmtNode = maketree(RETURNSTMT);
                	addChild(returnStmtNode, maketree(RETURN));
                	addChild(returnStmtNode, (yyvsp[-1].node));
                	(yyval.node) = returnStmtNode;
				}
#line 1798 "obj/y.tab.c"
    break;

  case 39: /* unaryStmt: unaryop var SEMICLN  */
#line 495 "src/parser.y"
                                {
					tree *unaryStmtNode = maketree(UNARYSTMT);
                	addChild(unaryStmtNode, (yyvsp[-2].node));
                	addChild(unaryStmtNode, (yyvsp[-1].node));
                	(yyval.node) = unaryStmtNode;
				}
#line 1809 "obj/y.tab.c"
    break;

  case 40: /* unaryStmt: var unaryop SEMICLN  */
#line 502 "src/parser.y"
                                {
					tree *unaryStmtNode = maketree(UNARYSTMT);
                	addChild(unaryStmtNode, (yyvsp[-2].node));
                	addChild(unaryStmtNode, (yyvsp[-1].node));
                	(yyval.node) = unaryStmtNode;
				}
#line 1820 "obj/y.tab.c"
    break;

  case 41: /* unaryop: OPER_INC  */
#line 511 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(UNARYOP, INC);
				}
#line 1828 "obj/y.tab.c"
    break;

  case 42: /* unaryop: OPER_DEC  */
#line 515 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(UNARYOP, DEC);
				}
#line 1836 "obj/y.tab.c"
    break;

  case 43: /* var: ID  */
#line 521 "src/parser.y"
                                {
					// ----- Symbol table entry look up ----- //
					// Checking whether the var is declared in global or local scope
					// If not declared, then warning message is given

					int isGlobal = ST_lookup(yylval.strval, "global");
					int isLocal = ST_lookup(yylval.strval, "local");
					int hash;

					struct strEntry *idEntry = NULL;
					tree *idNode = NULL;
					if(isGlobal != UNDECLARED_VAR){
						hash = isGlobal;
						idEntry = strTable[isGlobal];
					}
					else if(isLocal != UNDECLARED_VAR){
						hash = isLocal;
						idEntry = strTable[isLocal];
					}

					if(idEntry != NULL){
						idNode = maketreeWithStrVal(IDENTIFIER, idEntry->id);
						idNode->val = hash;
						idNode->scope = idEntry->scope;
						idNode->data_type = idEntry->type->data_type;
						idNode->sym_type = idEntry->type->symbol_type;
					}
					else{
						yyerror("Use of undeclared varibale");
					}

					// ----- Symbol table entry look up ----- //

					tree *varNode = maketree(VAR);
                	addChild(varNode, idNode);
                	(yyval.node) = varNode;
				}
#line 1878 "obj/y.tab.c"
    break;

  case 44: /* var: ID LSQ_BRKT addExpr RSQ_BRKT  */
#line 559 "src/parser.y"
                                {
					// ----- Symbol table entry look up ----- //

					int isGlobal = ST_lookup(id, "global");
					int isLocal = ST_lookup(id, "local");
					int hash;

					struct strEntry *idEntry = NULL;
					tree *idNode = NULL;
					if(isGlobal != UNDECLARED_VAR){
						hash = isGlobal;
						idEntry = strTable[isGlobal];
					}
					else if(isLocal != UNDECLARED_VAR){
						hash = isLocal;
						idEntry = strTable[isLocal];
					}

					if(idEntry != NULL){
						idNode = maketreeWithStrVal(IDENTIFIER, idEntry->id);
						idNode->val = hash;
						idNode->scope = idEntry->scope;
						idNode->data_type = idEntry->type->data_type;
						idNode->sym_type = idEntry->type->symbol_type;

						// ----- Error checking for Array ----- //

						int arrayIndex = isValidArrayIndex((yyvsp[-1].node));

						if(arrayIndex == ARRAY_INDEX_ZERO){
							yyerror("Array variable declared with size of zero.");
						}
						else if(arrayIndex == ARRAY_INDEX_OUT_OF_BOUND){
							yyerror("Statically sized array indexed with constant, out-of-bounds expression.");
						}
						else if(arrayIndex == ARRAY_INDEX_NON_INT){
							yyerror("Array indexed using non-integer expression.");
						}
						else if(idNode->sym_type != ARRAY && idNode->sym_type != ARG_ARRAY){
							yyerror("Non-array identifier used as an array.");
						}

						// ----- Error checking for Array ----- //
					}
					else{
						yyerror("Use of undeclared varibale");
					}

					// ----- Symbol table entry look up ----- //

					tree *varNode = maketree(VAR);
                	addChild(varNode, maketreeWithStrVal(IDENTIFIER, id));
                	addChild(varNode, (yyvsp[-1].node));
                	(yyval.node) = varNode;
				}
#line 1938 "obj/y.tab.c"
    break;

  case 45: /* expression: addExpr  */
#line 617 "src/parser.y"
                                {
					tree *expressionNode = maketree(EXPRESSION);
                	addChild(expressionNode, (yyvsp[0].node));
                	(yyval.node) = expressionNode;
				}
#line 1948 "obj/y.tab.c"
    break;

  case 46: /* expression: expression relop addExpr  */
#line 623 "src/parser.y"
                                {
					tree *expressionNode = maketree(EXPRESSION);
                	addChild(expressionNode, (yyvsp[-2].node));
                	addChild(expressionNode, (yyvsp[-1].node));
                	addChild(expressionNode, (yyvsp[0].node));
                	(yyval.node) = expressionNode;
				}
#line 1960 "obj/y.tab.c"
    break;

  case 47: /* relop: OPER_LT  */
#line 633 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(RELOP, LT);
				}
#line 1968 "obj/y.tab.c"
    break;

  case 48: /* relop: OPER_GT  */
#line 637 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(RELOP, GT);
				}
#line 1976 "obj/y.tab.c"
    break;

  case 49: /* relop: OPER_LTE  */
#line 641 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(RELOP, LTE);
				}
#line 1984 "obj/y.tab.c"
    break;

  case 50: /* relop: OPER_GTE  */
#line 645 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(RELOP, GTE);
				}
#line 1992 "obj/y.tab.c"
    break;

  case 51: /* relop: OPER_EQ  */
#line 649 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(RELOP, EQ);
				}
#line 2000 "obj/y.tab.c"
    break;

  case 52: /* relop: OPER_NEQ  */
#line 653 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(RELOP, NEQ);
				}
#line 2008 "obj/y.tab.c"
    break;

  case 53: /* addExpr: term  */
#line 659 "src/parser.y"
                                {
					tree *addExprNode = maketree(ADDEXPR);
                	addChild(addExprNode, (yyvsp[0].node));
                	(yyval.node) = addExprNode;
				}
#line 2018 "obj/y.tab.c"
    break;

  case 54: /* addExpr: addExpr addop term  */
#line 665 "src/parser.y"
                                {
					tree *addExprNode = maketree(ADDEXPR);
                	addChild(addExprNode, (yyvsp[-2].node));
                	addChild(addExprNode, (yyvsp[-1].node));
                	addChild(addExprNode, (yyvsp[0].node));
                	(yyval.node) = addExprNode;
				}
#line 2030 "obj/y.tab.c"
    break;

  case 55: /* addop: OPER_ADD  */
#line 675 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(ADDOP, ADD);
				}
#line 2038 "obj/y.tab.c"
    break;

  case 56: /* addop: OPER_SUB  */
#line 679 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(ADDOP, SUB);
				}
#line 2046 "obj/y.tab.c"
    break;

  case 57: /* term: factor  */
#line 685 "src/parser.y"
                                {
					tree *termNode = maketree(TERM);
                	addChild(termNode, (yyvsp[0].node));
                	(yyval.node) = termNode;
				}
#line 2056 "obj/y.tab.c"
    break;

  case 58: /* term: term mulop factor  */
#line 691 "src/parser.y"
                                {
					tree *termNode = maketree(TERM);
                	addChild(termNode, (yyvsp[-2].node));
                	addChild(termNode, (yyvsp[-1].node));
                	addChild(termNode, (yyvsp[0].node));
                	(yyval.node) = termNode;
				}
#line 2068 "obj/y.tab.c"
    break;

  case 59: /* mulop: OPER_MUL  */
#line 701 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(MULOP, MUL);
				}
#line 2076 "obj/y.tab.c"
    break;

  case 60: /* mulop: OPER_DIV  */
#line 705 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(MULOP, DIV);
				}
#line 2084 "obj/y.tab.c"
    break;

  case 61: /* mulop: OPER_MOD  */
#line 709 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(MULOP, MOD);
				}
#line 2092 "obj/y.tab.c"
    break;

  case 62: /* factor: LPAREN expression RPAREN  */
#line 715 "src/parser.y"
                                {
					tree *factorNode = maketree(FACTOR);
                	addChild(factorNode, (yyvsp[-1].node));
                	(yyval.node) = factorNode;
				}
#line 2102 "obj/y.tab.c"
    break;

  case 63: /* factor: var  */
#line 721 "src/parser.y"
                                {
					tree *factorNode = maketree(FACTOR);
                	addChild(factorNode, (yyvsp[0].node));
                	(yyval.node) = factorNode;
				}
#line 2112 "obj/y.tab.c"
    break;

  case 64: /* factor: funCallExpr  */
#line 727 "src/parser.y"
                                {
					tree *factorNode = maketree(FACTOR);
                	addChild(factorNode, (yyvsp[0].node));
                	(yyval.node) = factorNode;
				}
#line 2122 "obj/y.tab.c"
    break;

  case 65: /* factor: INTCONST  */
#line 733 "src/parser.y"
                                {
					tree *factorNode = maketree(FACTOR);
                	addChild(factorNode, maketreeWithIntVal(INTEGER, yylval.value));
                	(yyval.node) = factorNode;
				}
#line 2132 "obj/y.tab.c"
    break;

  case 66: /* factor: CHARCONST  */
#line 739 "src/parser.y"
                                {
					tree *factorNode = maketree(FACTOR);
                	addChild(factorNode, maketreeWithIntVal(CHAR, yylval.value));
                	(yyval.node) = factorNode;
				}
#line 2142 "obj/y.tab.c"
    break;

  case 67: /* factor: STRCONST  */
#line 745 "src/parser.y"
                                {
					tree *factorNode = maketree(FACTOR);
                	addChild(factorNode, maketreeWithStrVal(STRING, yylval.strval));
                	(yyval.node) = factorNode;
				}
#line 2152 "obj/y.tab.c"
    break;

  case 68: /* funCallExpr: ID LPAREN argList RPAREN  */
#line 753 "src/parser.y"
                                {	
					// ----- Symbol table entry look up ----- //

					id = funName;

					int isGlobal = ST_lookup(id, "global");
					int hash;

					struct strEntry *idEntry = NULL;
					tree *idNode = NULL;
					if(isGlobal != UNDECLARED_VAR){
						hash = isGlobal;
						idEntry = strTable[isGlobal];
					}

					if(idEntry != NULL){

						// ----- Function call mis-match ----- //

						struct typeEntry *idType1 = idEntry->type;
						struct typeEntry *idType2 = (struct typeEntry*)malloc(sizeof(struct typeEntry));
						updateFunParam(idType2, (yyvsp[-1].node));

						// idType1 - Function declaration parameter
						// idType2 - Function call parameter

						matchFunParam(idType1, idType2);


						// ----- Function call mis-match ----- //

						idNode = maketreeWithStrVal(IDENTIFIER, idEntry->id);
						idNode->val = hash;
						idNode->scope = idEntry->scope;
						idNode->data_type = idEntry->type->data_type;
						idNode->sym_type = idEntry->type->symbol_type;
					}
					else{
						yyerror("Use of undeclared function");
					}

					// ----- Symbol table entry look up ----- //

					tree *funCallExprNode = maketree(FUNCCALLEXPR);
                	addChild(funCallExprNode, idNode);
                	addChild(funCallExprNode, (yyvsp[-1].node));
                	(yyval.node) = funCallExprNode;
					
				}
#line 2206 "obj/y.tab.c"
    break;

  case 69: /* funCallExpr: ID LPAREN RPAREN  */
#line 803 "src/parser.y"
                                {
					// ----- Symbol table entry look up ----- //

					int isGlobal = ST_lookup(id, "global");
					int hash;

					struct strEntry *idEntry = NULL;
					tree *idNode = NULL;
					if(isGlobal != UNDECLARED_VAR){
						hash = isGlobal;
						idEntry = strTable[isGlobal];
					}

					if(idEntry != NULL){

						// ----- Function call mis-match ----- //

						struct typeEntry *idType1 = idEntry->type;
						struct typeEntry *idType2 = (struct typeEntry*)malloc(sizeof(struct typeEntry));

						// idType1 - Function declaration parameter
						// idType2 - Function call parameter

						matchFunParam(idType1, idType2);


						// ----- Function call mis-match ----- //

						idNode = maketreeWithStrVal(IDENTIFIER, idEntry->id);
						idNode->val = hash;
						idNode->scope = idEntry->scope;
						idNode->data_type = idEntry->type->data_type;
						idNode->sym_type = idEntry->type->symbol_type;
					}
					else{
						yyerror("Use of undeclared function");
					}

					// ----- Symbol table entry look up ----- //

					tree *funCallExprNode = maketree(FUNCCALLEXPR);
                	addChild(funCallExprNode, idNode);
                	(yyval.node) = funCallExprNode;
				}
#line 2255 "obj/y.tab.c"
    break;

  case 70: /* argList: expression  */
#line 850 "src/parser.y"
                                {
					tree *argListNode = maketree(ARGLIST);
                	addChild(argListNode, (yyvsp[0].node));
                	(yyval.node) = argListNode;
				}
#line 2265 "obj/y.tab.c"
    break;

  case 71: /* argList: argList COMMA expression  */
#line 856 "src/parser.y"
                                {
					tree *argListNode = maketree(ARGLIST);
                	addChild(argListNode, (yyvsp[-2].node));
                	addChild(argListNode, (yyvsp[0].node));
                	(yyval.node) = argListNode;
				}
#line 2276 "obj/y.tab.c"
    break;

  case 72: /* conditionExpr: expression  */
#line 865 "src/parser.y"
                                {
					tree *expressionNode = maketree(EXPRESSION);
                	addChild(expressionNode, (yyvsp[0].node));
                	(yyval.node) = expressionNode;
				}
#line 2286 "obj/y.tab.c"
    break;

  case 73: /* conditionExpr: expression logicalop expression  */
#line 871 "src/parser.y"
                                {
					tree *expressionNode = maketree(EXPRESSION);
                	addChild(expressionNode, (yyvsp[-2].node));
                	addChild(expressionNode, (yyvsp[-1].node));
                	addChild(expressionNode, (yyvsp[0].node));
                	(yyval.node) = expressionNode;
				}
#line 2298 "obj/y.tab.c"
    break;

  case 74: /* conditionExpr: OPER_NOT expression  */
#line 879 "src/parser.y"
                                {
					tree *expressionNode = maketree(EXPRESSION);
                	addChild(expressionNode, maketreeWithIntVal(LOGICALOP, NOT));
                	addChild(expressionNode, (yyvsp[0].node));
                	(yyval.node) = expressionNode;
				}
#line 2309 "obj/y.tab.c"
    break;

  case 75: /* logicalop: OPER_AND  */
#line 888 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(LOGICALOP, AND);
				}
#line 2317 "obj/y.tab.c"
    break;

  case 76: /* logicalop: OPER_OR  */
#line 892 "src/parser.y"
                                {
					(yyval.node) = maketreeWithIntVal(LOGICALOP, OR);
				}
#line 2325 "obj/y.tab.c"
    break;


#line 2329 "obj/y.tab.c"

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

#line 897 "src/parser.y"


int yywarning(char * msg, char *id){
    printf("warning: line %d: %s %s\n", yylineno, msg, id);
    return 0;
}

int yyerror(char * msg){
    printf("error: line %d: %s\n", yylineno, msg);
    p_ast = 0;
    p_symtab = 0;
    return 0;
}
