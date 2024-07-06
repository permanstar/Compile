/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 10 "/root/compile/Compiler/src/sysy.y"

#include <memory>
#include <string>
#include <cstring>

#include "ast.hpp"
#include "variable.hpp"

int yylex();
void yyerror(std::unique_ptr<BaseAST> &ast,std::string s);

using namespace std;

extern Val_Table val_table;

#line 86 "/root/compile/Compiler/build/sysy.tab.cpp"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_ROOT_COMPILE_COMPILER_BUILD_SYSY_TAB_HPP_INCLUDED
# define YY_YY_ROOT_COMPILE_COMPILER_BUILD_SYSY_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 2 "/root/compile/Compiler/src/sysy.y"

  #include <memory>
  #include <string>
  #include "ast.hpp"
  #include "variable.hpp"
  #include <cstring>

#line 137 "/root/compile/Compiler/build/sysy.tab.cpp"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    VOID = 259,
    FLOAT = 260,
    RETURN = 261,
    CONST = 262,
    IF = 263,
    ELSE = 264,
    WHILE = 265,
    BREAK = 266,
    CONTINUE = 267,
    FOR = 268,
    IDENT = 269,
    INT_CONST = 270
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "/root/compile/Compiler/src/sysy.y"

  std::string *str_val;
  int int_val;
  op op_val;
  Btype btype_val;
  BaseAST *ast_val;

#line 172 "/root/compile/Compiler/build/sysy.tab.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (std::unique_ptr<BaseAST> &ast);

#endif /* !YY_YY_ROOT_COMPILE_COMPILER_BUILD_SYSY_TAB_HPP_INCLUDED  */



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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   246

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  189

#define YYUNDEFTOK  2
#define YYMAXUTOK   270


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,     2,     2,    34,    26,     2,
      17,    18,    32,    30,    19,    31,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    16,
      29,    24,    28,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    22,    25,    23,     2,     2,     2,     2,
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
      15
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    61,    61,    68,    73,    80,    88,    93,   102,   117,
     120,   126,   135,   143,   150,   160,   169,   175,   190,   193,
     196,   207,   211,   221,   233,   242,   247,   256,   261,   268,
     273,   280,   285,   292,   298,   302,   311,   315,   321,   327,
     336,   339,   345,   353,   362,   367,   381,   386,   399,   407,
     417,   422,   425,   433,   438,   453,   460,   467,   477,   487,
     497,   503,   512,   518,   526,   537,   543,   551,   559,   564,
     575,   585,   594,   602,   609,   617,   624,   632,   640,   648,
     656,   664,   672,   680,   687,   695,   703,   710,   718,   726,
     734,   742,   745,   756,   759,   766,   775,   783,   786,   789,
     795,   798,   801,   804,   814,   823,   828,   837,   846,   852
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "VOID", "FLOAT", "RETURN",
  "CONST", "IF", "ELSE", "WHILE", "BREAK", "CONTINUE", "FOR", "IDENT",
  "INT_CONST", "';'", "'('", "')'", "','", "'['", "']'", "'{'", "'}'",
  "'='", "'|'", "'&'", "'!'", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "$accept", "CompUnit", "DefUnitList", "DefUnits", "DefUnit",
  "FuncDef", "FuncFParamList", "FuncFParams", "FuncFParam", "FuncArrays",
  "FuncArray", "BasicType", "Block", "BlockItems", "BlockItem", "Stmt",
  "Else", "OptionExp", "Declarationlist", "ConstDeclList", "VarDeclList",
  "ConstDefs", "VarDefs", "ConstDef", "ConstInitVal", "ConstVals",
  "VarDef", "ArrayDefs", "ArrayDef", "Assignments", "Assignment",
  "InitVal", "InitVals", "ConstExp", "Exp", "LOrExp", "LAndExp", "EqExp",
  "RelExp", "AddExp", "MulExp", "UnaryExp", "FuncRParamList",
  "FuncRParams", "UnaryOp", "PrimaryExp", "Number", "LVal", "LArrays",
  "LArray", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    59,    40,    41,    44,
      91,    93,   123,   125,    61,   124,    38,    33,    62,    60,
      43,    45,    42,    47,    37
};
# endif

#define YYPACT_NINF (-165)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     122,  -165,  -165,  -165,   143,    12,  -165,   122,  -165,  -165,
       3,    18,  -165,  -165,    26,  -165,  -165,     7,    42,  -165,
     -10,  -165,  -165,    15,    51,  -165,    28,   143,   209,   174,
      39,   209,   174,   180,    26,   180,    58,    62,  -165,    77,
      34,  -165,   209,  -165,  -165,  -165,    81,  -165,    89,   107,
      44,    91,   110,   117,  -165,   209,  -165,  -165,  -165,   132,
    -165,     6,  -165,  -165,    79,  -165,   134,  -165,   156,  -165,
    -165,  -165,  -165,   137,   143,   146,   154,  -165,   209,   209,
     145,  -165,   151,   149,   158,   160,    63,   198,   209,   209,
     209,   209,   209,  -165,   209,  -165,  -165,    98,  -165,  -165,
    -165,   111,    52,  -165,  -165,   164,   209,  -165,   172,   173,
     177,  -165,   209,   209,   209,   209,   209,   110,   209,   110,
     117,   117,  -165,  -165,  -165,   178,   174,  -165,   180,  -165,
     203,   176,   183,   187,   190,    72,  -165,    39,  -165,   101,
    -165,  -165,   192,   193,   200,  -165,  -165,   118,  -165,   206,
    -165,   209,  -165,   107,    44,    91,    91,   110,   110,  -165,
    -165,  -165,  -165,   205,   209,   209,  -165,  -165,   209,  -165,
    -165,  -165,  -165,  -165,   209,  -165,  -165,  -165,   196,   213,
    -165,  -165,   150,   150,   223,  -165,   150,  -165,  -165
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    18,    19,    20,     0,     0,     2,     3,     5,     6,
       0,     0,    40,    41,     0,     1,     4,    56,    43,    46,
      57,    60,     7,     0,    42,    44,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    12,     0,
     105,   104,     0,    99,    98,    97,     0,    70,    71,    73,
      75,    78,    83,    86,    90,     0,    91,   101,   102,   106,
     108,     0,    55,    65,    56,    47,     0,    58,     0,    48,
      50,    45,    49,     0,     0,    13,    14,    16,    94,     0,
       0,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,    67,    68,     0,    59,    52,
      53,     0,    39,     8,    11,     0,     0,    96,     0,    93,
       0,   100,     0,     0,     0,     0,     0,    79,     0,    80,
      84,    85,    87,    88,    89,     0,     0,    66,     0,    51,
       0,     0,     0,     0,     0,   105,    22,     0,    31,    39,
      24,    26,     0,     0,     0,    62,    38,   106,    17,     0,
     103,     0,   109,    72,    74,    76,    77,    81,    82,   107,
      69,    54,    30,     0,     0,     0,    34,    35,     0,    21,
      23,    29,    25,    27,     0,    15,    95,    28,     0,     0,
      63,    64,    39,    39,    37,    33,    39,    32,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,  -165,  -165,   228,  -165,  -165,  -165,   163,  -165,
    -165,    -2,   165,  -165,   102,  -164,  -165,  -165,   -93,  -165,
    -165,  -165,  -165,   208,   -30,  -165,   214,    -8,  -165,  -165,
    -165,   -31,  -165,   -20,   -29,  -165,   131,   133,    29,   -71,
      80,   -48,  -165,  -165,  -165,  -165,  -165,  -165,   -98,  -165
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    36,    37,    38,    76,
      77,    10,   138,   139,   140,   141,   187,   142,    11,    12,
      13,    24,    18,    25,    69,   101,    19,    20,    21,   144,
     145,    62,    97,    70,    47,    48,    49,    50,    51,    52,
      53,    54,   108,   109,    55,    56,    57,    58,    59,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      63,    67,    14,    63,   147,    72,    26,    93,    46,   143,
      31,    66,    15,    80,    32,   117,   119,    17,   184,   185,
      40,    41,   188,    42,    27,    39,    26,    28,    61,    95,
      96,    29,    63,    43,    22,    28,    44,    45,   100,    33,
      23,   147,   122,   123,   124,   157,   143,   158,    31,   107,
     110,    78,    35,    64,    79,     1,     2,     3,   130,     4,
     131,    30,   132,   133,   134,   125,   135,    41,    84,    42,
      34,    85,    39,   146,   102,   136,    73,    40,    41,    43,
      42,    74,    44,    45,   147,   147,   149,   116,   147,    78,
      43,    75,    79,    44,    45,   160,   168,    63,   161,    28,
     137,   163,    81,    29,     1,     2,     3,   130,     4,   131,
     146,   132,   133,   134,    82,   135,    41,   126,    42,    86,
      87,   127,   176,   102,   169,     1,     2,     3,    43,     4,
     128,    44,    45,    83,   129,   178,   179,   137,    94,   180,
      88,    89,   174,   155,   156,   181,     1,     2,     3,    90,
      91,    92,    94,   146,   146,    98,   130,   146,   131,   102,
     132,   133,   134,   111,   135,    41,   105,    42,   120,   121,
      40,    41,   102,    42,   106,   113,   112,    43,    68,    99,
      44,    45,   114,    43,   115,   148,    44,    45,    40,    41,
     150,    42,   151,   164,    40,    41,    61,    42,   152,   159,
     165,    43,    68,   166,    44,    45,   167,    43,   171,   172,
      44,    45,    40,    41,   182,    42,   173,    40,    41,   162,
      42,   177,   118,    40,    41,    43,    42,   175,    44,    45,
      43,   183,   186,    44,    45,    16,    43,   104,   103,    44,
      45,   170,    71,   153,    65,     0,   154
};

static const yytype_int16 yycheck[] =
{
      29,    32,     4,    32,   102,    35,    14,    55,    28,   102,
      20,    31,     0,    42,    24,    86,    87,    14,   182,   183,
      14,    15,   186,    17,    17,    27,    34,    20,    22,    23,
      61,    24,    61,    27,    16,    20,    30,    31,    68,    24,
      14,   139,    90,    91,    92,   116,   139,   118,    20,    78,
      79,    17,    24,    14,    20,     3,     4,     5,     6,     7,
       8,    19,    10,    11,    12,    94,    14,    15,    24,    17,
      19,    27,    74,   102,    22,    23,    18,    14,    15,    27,
      17,    19,    30,    31,   182,   183,   106,    24,   186,    17,
      27,    14,    20,    30,    31,   126,    24,   126,   128,    20,
     102,   130,    21,    24,     3,     4,     5,     6,     7,     8,
     139,    10,    11,    12,    25,    14,    15,    19,    17,    28,
      29,    23,   151,    22,    23,     3,     4,     5,    27,     7,
      19,    30,    31,    26,    23,   164,   165,   139,    20,   168,
      30,    31,    24,   114,   115,   174,     3,     4,     5,    32,
      33,    34,    20,   182,   183,    21,     6,   186,     8,    22,
      10,    11,    12,    18,    14,    15,    20,    17,    88,    89,
      14,    15,    22,    17,    20,    26,    25,    27,    22,    23,
      30,    31,    24,    27,    24,    21,    30,    31,    14,    15,
      18,    17,    19,    17,    14,    15,    22,    17,    21,    21,
      17,    27,    22,    16,    30,    31,    16,    27,    16,    16,
      30,    31,    14,    15,    18,    17,    16,    14,    15,    16,
      17,    16,    24,    14,    15,    27,    17,    21,    30,    31,
      27,    18,     9,    30,    31,     7,    27,    74,    73,    30,
      31,   139,    34,   112,    30,    -1,   113
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,    36,    37,    38,    39,    40,
      46,    53,    54,    55,    46,     0,    39,    14,    57,    61,
      62,    63,    16,    14,    56,    58,    62,    17,    20,    24,
      19,    20,    24,    24,    19,    24,    41,    42,    43,    46,
      14,    15,    17,    27,    30,    31,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    79,    80,    81,    82,    83,
      84,    22,    66,    69,    14,    61,    68,    66,    22,    59,
      68,    58,    59,    18,    19,    14,    44,    45,    17,    20,
      69,    21,    25,    26,    24,    27,    28,    29,    30,    31,
      32,    33,    34,    76,    20,    23,    66,    67,    21,    23,
      59,    60,    22,    47,    43,    20,    20,    69,    77,    78,
      69,    18,    25,    26,    24,    24,    24,    74,    24,    74,
      75,    75,    76,    76,    76,    69,    19,    23,    19,    23,
       6,     8,    10,    11,    12,    14,    23,    46,    47,    48,
      49,    50,    52,    53,    64,    65,    69,    83,    21,    68,
      18,    19,    21,    71,    72,    73,    73,    74,    74,    21,
      66,    59,    16,    69,    17,    17,    16,    16,    24,    23,
      49,    16,    16,    16,    24,    21,    69,    16,    69,    69,
      69,    69,    18,    18,    50,    50,     9,    51,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    38,    38,    39,    39,    40,    41,
      41,    42,    42,    43,    43,    44,    44,    45,    46,    46,
      46,    47,    47,    48,    48,    49,    49,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    51,    51,    52,    52,
      53,    53,    54,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    59,    60,    60,    61,    61,    61,    61,    62,
      62,    63,    64,    65,    65,    66,    66,    66,    67,    67,
      68,    69,    70,    70,    71,    71,    72,    72,    72,    73,
      73,    73,    73,    73,    74,    74,    74,    75,    75,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    79,
      80,    80,    80,    80,    81,    82,    82,    83,    83,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     6,     1,
       0,     3,     1,     2,     2,     4,     1,     3,     1,     1,
       1,     3,     2,     2,     1,     2,     1,     2,     3,     2,
       2,     1,     6,     5,     2,     2,     2,     0,     1,     0,
       1,     1,     3,     2,     1,     3,     1,     3,     3,     3,
       1,     3,     2,     1,     3,     3,     1,     1,     3,     4,
       1,     4,     1,     3,     3,     1,     3,     2,     1,     3,
       1,     1,     4,     1,     4,     1,     4,     4,     1,     3,
       3,     4,     4,     1,     3,     3,     1,     3,     3,     3,
       1,     1,     2,     1,     0,     3,     1,     1,     1,     1,
       3,     1,     1,     4,     1,     1,     1,     4,     1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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
        yyerror (ast, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, ast); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, std::unique_ptr<BaseAST> &ast)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (ast);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, std::unique_ptr<BaseAST> &ast)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep, ast);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule, std::unique_ptr<BaseAST> &ast)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              , ast);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, ast); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, std::unique_ptr<BaseAST> &ast)
{
  YYUSE (yyvaluep);
  YYUSE (ast);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (std::unique_ptr<BaseAST> &ast)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  case 2:
#line 61 "/root/compile/Compiler/src/sysy.y"
              {
   auto comp_unit = make_unique<CompUnitAST>();
   comp_unit->start = unique_ptr<BaseAST>((yyvsp[0].ast_val));
   ast = move(comp_unit);
 }
#line 1497 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 3:
#line 68 "/root/compile/Compiler/src/sysy.y"
           {
    (yyval.ast_val) = (yyvsp[0].ast_val);
  }
#line 1505 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 4:
#line 73 "/root/compile/Compiler/src/sysy.y"
                    {
    DefUnitsAST* ast = dynamic_cast<DefUnitsAST*>((yyvsp[-1].ast_val));
    if(ast==nullptr){
      std::cerr << "Exception: " << "dynamic_cast failed"<< std::endl;
    }
    ast->unit_list.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = ast;
  }
#line 1518 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 5:
#line 80 "/root/compile/Compiler/src/sysy.y"
            {
    auto ast = new DefUnitsAST();
    ast->unit_list.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = ast;
  }
#line 1528 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 6:
#line 88 "/root/compile/Compiler/src/sysy.y"
            {
    auto ast = new DefUnitAST();
    ast->content = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val)=ast;
  }
#line 1538 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 7:
#line 93 "/root/compile/Compiler/src/sysy.y"
                     {
    auto ast = new DefUnitAST();
    ast->content = unique_ptr<BaseAST>((yyvsp[-1].ast_val));
    (yyval.ast_val)=ast;
  }
#line 1548 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 8:
#line 102 "/root/compile/Compiler/src/sysy.y"
                                                 {
    auto ast=new FuncDefAST();
    auto typeast=new DeclarationTypeAST();
    typeast->type=(yyvsp[-5].btype_val);
    ast->type = unique_ptr<BaseAST>(typeast);
    ast->ident = *unique_ptr<string>((yyvsp[-4].str_val));
    ast->params=unique_ptr<BaseAST>((yyvsp[-2].ast_val));
    ast->block = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val)=ast;
  }
#line 1563 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 9:
#line 117 "/root/compile/Compiler/src/sysy.y"
              {
    (yyval.ast_val) = (yyvsp[0].ast_val);
  }
#line 1571 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 10:
#line 120 "/root/compile/Compiler/src/sysy.y"
  {
    (yyval.ast_val) = nullptr;
  }
#line 1579 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 11:
#line 126 "/root/compile/Compiler/src/sysy.y"
                             {
    FuncFParamsAST* ast = nullptr;
    ast = dynamic_cast<FuncFParamsAST*>((yyvsp[-2].ast_val));
    if(ast==nullptr){
      std::cerr << "Exception: " << "dynamic_cast failed"<< std::endl;
    }
    ast->paramlist.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = ast;
  }
#line 1593 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 12:
#line 135 "/root/compile/Compiler/src/sysy.y"
             {
    auto ast = new FuncFParamsAST();
    ast->paramlist.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = ast;
  }
#line 1603 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 13:
#line 143 "/root/compile/Compiler/src/sysy.y"
                    {
      auto ast = new FuncFParamAST();
      ast->type = (yyvsp[-1].btype_val);
      ast->ident = *((yyvsp[0].str_val));
      ast->arraydef = nullptr;
      (yyval.ast_val) = ast;
    }
#line 1615 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 14:
#line 150 "/root/compile/Compiler/src/sysy.y"
                         {
      auto ast = new FuncFParamAST();
      ast->type = (yyvsp[-1].btype_val);
      ast->ident = "";
      ast->arraydef = unique_ptr<BaseAST>((yyvsp[0].ast_val));
      (yyval.ast_val) = ast;
    }
#line 1627 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 15:
#line 160 "/root/compile/Compiler/src/sysy.y"
                             {
    FuncArrayAST* ast = nullptr;
    ast = dynamic_cast<FuncArrayAST*>((yyvsp[-3].ast_val));
    if(ast==nullptr){
      throw std::runtime_error("error: FuncArrayAST dynamic_cast failed");
    }
    ast->dimon_list.push_back(unique_ptr<BaseAST>((yyvsp[-1].ast_val)));
    (yyval.ast_val) = ast;
  }
#line 1641 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 16:
#line 169 "/root/compile/Compiler/src/sysy.y"
            {
    (yyval.ast_val) = (yyvsp[0].ast_val);
  }
#line 1649 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 17:
#line 175 "/root/compile/Compiler/src/sysy.y"
               {
    auto ast = new FuncArrayAST();
    ast->ident = *((yyvsp[-2].str_val));
    (yyval.ast_val) = ast;
  }
#line 1659 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 18:
#line 190 "/root/compile/Compiler/src/sysy.y"
               {
  (yyval.btype_val) = Btype::BINT;
}
#line 1667 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 19:
#line 193 "/root/compile/Compiler/src/sysy.y"
       {
    (yyval.btype_val) = Btype::BVOID;
  }
#line 1675 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 20:
#line 196 "/root/compile/Compiler/src/sysy.y"
        {
    (yyval.btype_val) = Btype::BFLOAT;
  }
#line 1683 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 21:
#line 207 "/root/compile/Compiler/src/sysy.y"
                       {
    auto ast=new BlockAST();
    ast->blockitems = unique_ptr<BaseAST>((yyvsp[-1].ast_val));
    (yyval.ast_val)=ast;
  }
#line 1693 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 22:
#line 211 "/root/compile/Compiler/src/sysy.y"
           {
    auto ast=new BlockAST();
    ast->blockitems=nullptr;
    (yyval.ast_val)=ast;
  }
#line 1703 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 23:
#line 221 "/root/compile/Compiler/src/sysy.y"
                       {
    BlockItemsAST* Items = nullptr;

      Items = dynamic_cast<BlockItemsAST*>((yyvsp[-1].ast_val));
      //后续可能会改进
      if(Items==nullptr){
        std::cerr << "Exception: " << "dynamic_cast failed"<< std::endl;
      }

    Items->itemlist.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = Items;
  }
#line 1720 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 24:
#line 233 "/root/compile/Compiler/src/sysy.y"
              {
      auto Items = new BlockItemsAST();
      Items->itemlist.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
      (yyval.ast_val) = Items;
    }
#line 1730 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 25:
#line 242 "/root/compile/Compiler/src/sysy.y"
                     {
    auto ast = new BlockItemAST();
    ast->content = unique_ptr<BaseAST>((yyvsp[-1].ast_val));
    (yyval.ast_val)=ast;
  }
#line 1740 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 26:
#line 247 "/root/compile/Compiler/src/sysy.y"
       {
    auto ast = new StmtAST();
    ast->sent = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val) = ast;
  }
#line 1750 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 27:
#line 256 "/root/compile/Compiler/src/sysy.y"
                  {
    auto ast =new BlockItemAST();
    ast->content = unique_ptr<BaseAST>((yyvsp[-1].ast_val));
    (yyval.ast_val)=ast;
  }
#line 1760 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 28:
#line 261 "/root/compile/Compiler/src/sysy.y"
                 {
    auto ast = new BlockItemAST();
    auto retAst=new ReturnAST();
    retAst->retNum=unique_ptr<BaseAST>((yyvsp[-1].ast_val));
    ast->content=unique_ptr<BaseAST>(retAst);
    (yyval.ast_val)=ast;
  }
#line 1772 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 29:
#line 268 "/root/compile/Compiler/src/sysy.y"
                {
    auto ast = new BlockItemAST();
    ast->content = unique_ptr<BaseAST>((yyvsp[-1].ast_val));
    (yyval.ast_val)=ast;
  }
#line 1782 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 30:
#line 273 "/root/compile/Compiler/src/sysy.y"
              {
    auto ast = new BlockItemAST();
    auto retAst=new ReturnAST();
    retAst->retNum=nullptr;
    ast->content=unique_ptr<BaseAST>(retAst);
    (yyval.ast_val)=ast;
  }
#line 1794 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 31:
#line 280 "/root/compile/Compiler/src/sysy.y"
       {
    auto ast = new BlockItemAST();
    ast->content = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val)=ast;
  }
#line 1804 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 32:
#line 285 "/root/compile/Compiler/src/sysy.y"
                          {
    auto ast=new IfElseAST();
    ast->exp=unique_ptr<BaseAST>((yyvsp[-3].ast_val));
    ast->then_part=unique_ptr<BaseAST>((yyvsp[-1].ast_val));
    ast->else_part=unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val)=ast; 
  }
#line 1816 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 33:
#line 292 "/root/compile/Compiler/src/sysy.y"
                        {
    auto ast=new WhileAST();
    ast->exp=unique_ptr<BaseAST>((yyvsp[-2].ast_val));
    ast->body=unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val)=ast;
  }
#line 1827 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 34:
#line 298 "/root/compile/Compiler/src/sysy.y"
           {
    auto ast=new BreakAST();
    (yyval.ast_val)=ast;
  }
#line 1836 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 35:
#line 302 "/root/compile/Compiler/src/sysy.y"
              {
    auto ast=new ContinueAST();
    (yyval.ast_val)=ast;
  }
#line 1845 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 36:
#line 311 "/root/compile/Compiler/src/sysy.y"
           {
    (yyval.ast_val)=(yyvsp[0].ast_val);
  }
#line 1853 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 37:
#line 315 "/root/compile/Compiler/src/sysy.y"
  {
    (yyval.ast_val)=nullptr;
  }
#line 1861 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 38:
#line 321 "/root/compile/Compiler/src/sysy.y"
       {
      auto ast=new OptionExpAST();
      ast->exp=unique_ptr<BaseAST>((yyvsp[0].ast_val));
      (yyval.ast_val)=ast;
    }
#line 1871 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 39:
#line 327 "/root/compile/Compiler/src/sysy.y"
    {
      auto ast=new OptionExpAST();
      ast->exp=nullptr;
      (yyval.ast_val) = ast;
    }
#line 1881 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 40:
#line 336 "/root/compile/Compiler/src/sysy.y"
                {
    (yyval.ast_val) = (yyvsp[0].ast_val);
  }
#line 1889 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 41:
#line 339 "/root/compile/Compiler/src/sysy.y"
              {
    (yyval.ast_val) = (yyvsp[0].ast_val);
  }
#line 1897 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 42:
#line 345 "/root/compile/Compiler/src/sysy.y"
                            {
    auto constdecllist = new ConstDeclListAST();
    constdecllist->type = (yyvsp[-1].btype_val);
    constdecllist->constdefs = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val) = constdecllist;
  }
#line 1908 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 43:
#line 353 "/root/compile/Compiler/src/sysy.y"
                    {
    auto vardecllist = new VarDeclListAST();
    vardecllist->type = (yyvsp[-1].btype_val);
    vardecllist->vardefs = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val) = vardecllist;
  }
#line 1919 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 44:
#line 362 "/root/compile/Compiler/src/sysy.y"
           {
    auto Defs = new ConstDefsAST();
    Defs->constdefs.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = Defs;
  }
#line 1929 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 45:
#line 367 "/root/compile/Compiler/src/sysy.y"
                         {
    ConstDefsAST* defsast = nullptr;
    defsast = dynamic_cast<ConstDefsAST*>((yyvsp[-2].ast_val));
    //后续可能会改进
    if(defsast==nullptr){
        std::cerr << "Exception: " << "dynamic_cast failed"<< std::endl;
      }
    defsast->constdefs.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = defsast;
  }
#line 1944 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 46:
#line 381 "/root/compile/Compiler/src/sysy.y"
         {
    auto Defs = new VarDefsAST();
    Defs->vardefs.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = Defs;
  }
#line 1954 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 47:
#line 386 "/root/compile/Compiler/src/sysy.y"
                     {
    VarDefsAST* defsast = nullptr;
    defsast = dynamic_cast<VarDefsAST*>((yyvsp[-2].ast_val));
    //后续可能会改进
    if(defsast==nullptr){
        std::cerr << "Exception: " << "dynamic_cast failed"<< std::endl;
      }
    defsast->vardefs.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = defsast;
  }
#line 1969 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 48:
#line 399 "/root/compile/Compiler/src/sysy.y"
                         {
    auto ast = new ConstDefAST();
    ast->ident = *((yyvsp[-2].str_val));
    ast->arraydef = nullptr;
    ast->initval = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val) = ast;
  }
#line 1981 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 49:
#line 407 "/root/compile/Compiler/src/sysy.y"
                             {
    auto ast = new ConstDefAST();
    ast->ident = "";
    ast->arraydef = unique_ptr<BaseAST>((yyvsp[-2].ast_val));
    ast->initval = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val) = ast;
  }
#line 1993 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 50:
#line 417 "/root/compile/Compiler/src/sysy.y"
           {
    auto initval = new ConstExpAST();
    initval->exp = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val) = initval;
  }
#line 2003 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 51:
#line 422 "/root/compile/Compiler/src/sysy.y"
                    {
    (yyval.ast_val)=(yyvsp[-1].ast_val);
  }
#line 2011 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 52:
#line 425 "/root/compile/Compiler/src/sysy.y"
         {
    auto initvals = new ConstInitValsAST();
    initvals->constexp = nullptr;
    (yyval.ast_val) = initvals;
  }
#line 2021 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 53:
#line 433 "/root/compile/Compiler/src/sysy.y"
               {
    auto ast = new ConstInitValsAST();
    ast->array_val_list.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = ast;
  }
#line 2031 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 54:
#line 438 "/root/compile/Compiler/src/sysy.y"
                             {
    ConstInitValsAST* valsast = nullptr;
    valsast = dynamic_cast<ConstInitValsAST*>((yyvsp[-2].ast_val));
    if(valsast==nullptr){
        throw std::runtime_error("error: ConstInitValsAST dynamic_cast failed");
      }
    valsast->array_val_list.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = valsast;
  }
#line 2045 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 55:
#line 453 "/root/compile/Compiler/src/sysy.y"
                    {
    auto ast = new VarDefAST();
    ast->ident = *((yyvsp[-2].str_val));
    ast->arraydef = nullptr;
    ast->initval = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val) = ast;
  }
#line 2057 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 56:
#line 460 "/root/compile/Compiler/src/sysy.y"
         {
    auto ast = new VarDefAST();
    ast->ident = *((yyvsp[0].str_val));
    ast->arraydef = nullptr;
    ast->initval = nullptr;
    (yyval.ast_val) = ast;
  }
#line 2069 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 57:
#line 467 "/root/compile/Compiler/src/sysy.y"
            {
    auto ast = new VarDefAST();
    ast->ident = "";
    ast->arraydef = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    auto initvals = new InitValsAST();
    initvals->exp = nullptr;
    ast->initval = unique_ptr<BaseAST>(initvals);
    (yyval.ast_val) = ast;
  }
#line 2083 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 58:
#line 477 "/root/compile/Compiler/src/sysy.y"
                         {
    auto ast = new VarDefAST();
    ast->ident = "";
    ast->arraydef = unique_ptr<BaseAST>((yyvsp[-2].ast_val));
    ast->initval = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val) = ast;
  }
#line 2095 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 59:
#line 487 "/root/compile/Compiler/src/sysy.y"
                            {
    ArrayDefsAST* ast = nullptr;
    ast = dynamic_cast<ArrayDefsAST*>((yyvsp[-3].ast_val));
    if(ast==nullptr){
      throw std::runtime_error("error: ArrayDefsAST cast failed");
    }
    ast->dimon_list.push_back(unique_ptr<BaseAST>((yyvsp[-1].ast_val))); 
    (yyval.ast_val) = ast;
  }
#line 2109 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 60:
#line 497 "/root/compile/Compiler/src/sysy.y"
           {
    (yyval.ast_val) = (yyvsp[0].ast_val);
  }
#line 2117 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 61:
#line 503 "/root/compile/Compiler/src/sysy.y"
                         {
    auto ast = new ArrayDefsAST();
    ast->ident = *((yyvsp[-3].str_val));
    ast->dimon_list.push_back(unique_ptr<BaseAST>((yyvsp[-1].ast_val)));
    (yyval.ast_val) = ast;
  }
#line 2128 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 62:
#line 512 "/root/compile/Compiler/src/sysy.y"
               {
    (yyval.ast_val)=(yyvsp[0].ast_val);
  }
#line 2136 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 63:
#line 518 "/root/compile/Compiler/src/sysy.y"
                {
    auto ast=new AssignAST();
    ast->ident=*((yyvsp[-2].str_val));
    ast->arraydef=nullptr;
    ast->exp=unique_ptr<BaseAST>((yyvsp[0].ast_val));
    //set_sym_val(sym_head,sym_tail,*($1),$3);
    (yyval.ast_val)=ast;
  }
#line 2149 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 64:
#line 526 "/root/compile/Compiler/src/sysy.y"
                 {
    auto ast=new AssignAST();
    ast->ident="";
    ast->arraydef=unique_ptr<BaseAST>((yyvsp[-2].ast_val));
    ast->exp=unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val)=ast;
  }
#line 2161 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 65:
#line 537 "/root/compile/Compiler/src/sysy.y"
      {
    auto initval = new ExpAST();
    initval->exp = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val) = initval;
  }
#line 2171 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 66:
#line 543 "/root/compile/Compiler/src/sysy.y"
                  {
    InitValsAST* ast=dynamic_cast<InitValsAST*>((yyvsp[-1].ast_val));
    if(ast==nullptr){
      throw std::runtime_error("error: ArrayDefsAST cast failed");
    }
    (yyval.ast_val) = ast;
  }
#line 2183 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 67:
#line 551 "/root/compile/Compiler/src/sysy.y"
         {
    auto initvals = new InitValsAST();
    initvals->exp = nullptr;
    (yyval.ast_val) = initvals;
  }
#line 2193 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 68:
#line 559 "/root/compile/Compiler/src/sysy.y"
          {
    auto ast = new InitValsAST();
    ast->array_val_list.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = ast;
  }
#line 2203 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 69:
#line 564 "/root/compile/Compiler/src/sysy.y"
                       {
    InitValsAST* valsast = nullptr;
    valsast = dynamic_cast<InitValsAST*>((yyvsp[-2].ast_val));
    if(valsast==nullptr){
        std::cerr << "Exception: " << "dynamic_cast failed"<< std::endl;
      }
    valsast->array_val_list.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = valsast;
  }
#line 2217 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 70:
#line 575 "/root/compile/Compiler/src/sysy.y"
     {
    auto ast=new ConstExpAST();
    ast->exp=unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val)=ast;
  }
#line 2227 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 71:
#line 585 "/root/compile/Compiler/src/sysy.y"
           {
    auto ast=new ExpAST();
    ast->exp=unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val)=ast;
  }
#line 2237 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 72:
#line 594 "/root/compile/Compiler/src/sysy.y"
                        {
    auto lorexp = new BinaryExpAST();
    lorexp->exp1 = unique_ptr<BaseAST>((yyvsp[-3].ast_val));
    lorexp->exp2 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    lorexp->op2=op::OR;
    //lorexp->calc_f=($1->calc_f)&&($4->calc_f);
    (yyval.ast_val) = lorexp;
  }
#line 2250 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 73:
#line 602 "/root/compile/Compiler/src/sysy.y"
            {
    (yyval.ast_val)=(yyvsp[0].ast_val);
  }
#line 2258 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 74:
#line 609 "/root/compile/Compiler/src/sysy.y"
                       {
    auto landexp = new BinaryExpAST();
    landexp->exp1 = unique_ptr<BaseAST>((yyvsp[-3].ast_val));
    landexp->exp2 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    landexp->op2 = op::AND;
    //landexp->calc_f=($1->calc_f)&&($4->calc_f);
    (yyval.ast_val) = landexp;
  }
#line 2271 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 75:
#line 617 "/root/compile/Compiler/src/sysy.y"
          {
    (yyval.ast_val)=(yyvsp[0].ast_val);
  }
#line 2279 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 76:
#line 624 "/root/compile/Compiler/src/sysy.y"
                      {
    auto eqexp = new BinaryExpAST();
    eqexp->exp1 = unique_ptr<BaseAST>((yyvsp[-3].ast_val));
    eqexp->exp2 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    eqexp->op2 = op::EQ;
    //eqexp->calc_f=($1->calc_f)&&($4->calc_f);
    (yyval.ast_val) = eqexp;
  }
#line 2292 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 77:
#line 632 "/root/compile/Compiler/src/sysy.y"
                         {
    auto eqexp = new BinaryExpAST();
    eqexp->exp1 = unique_ptr<BaseAST>((yyvsp[-3].ast_val));
    eqexp->exp2 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    eqexp->op2 = op::NE;
    //eqexp->calc_f=($1->calc_f)&&($4->calc_f);
    (yyval.ast_val) = eqexp;
  }
#line 2305 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 78:
#line 640 "/root/compile/Compiler/src/sysy.y"
           {
    (yyval.ast_val)=(yyvsp[0].ast_val);
  }
#line 2313 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 79:
#line 648 "/root/compile/Compiler/src/sysy.y"
                    {
    auto relexp = new BinaryExpAST();
    relexp->exp1 = unique_ptr<BaseAST>((yyvsp[-2].ast_val));
    relexp->exp2 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    relexp->op2 = op::GT;
    //relexp->calc_f=($1->calc_f)&&($3->calc_f);
    (yyval.ast_val) = relexp;
  }
#line 2326 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 80:
#line 656 "/root/compile/Compiler/src/sysy.y"
                      {
    auto relexp = new BinaryExpAST();
    relexp->exp1 = unique_ptr<BaseAST>((yyvsp[-2].ast_val));
    relexp->exp2 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    relexp->op2 = op::LT;
    //relexp->calc_f=($1->calc_f)&&($3->calc_f);
    (yyval.ast_val) = relexp;
  }
#line 2339 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 81:
#line 664 "/root/compile/Compiler/src/sysy.y"
                         {
    auto relexp = new BinaryExpAST();
    relexp->exp1 = unique_ptr<BaseAST>((yyvsp[-3].ast_val));
    relexp->exp2 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    relexp->op2 = op::GE;
    //relexp->calc_f=($1->calc_f)&&($4->calc_f);
    (yyval.ast_val) = relexp;
  }
#line 2352 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 82:
#line 672 "/root/compile/Compiler/src/sysy.y"
                         {
    auto relexp = new BinaryExpAST();
    relexp->exp1 = unique_ptr<BaseAST>((yyvsp[-3].ast_val));
    relexp->exp2 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    relexp->op2 = op::LE;
    //relexp->calc_f=($1->calc_f)&&($4->calc_f);
    (yyval.ast_val) = relexp;
  }
#line 2365 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 83:
#line 680 "/root/compile/Compiler/src/sysy.y"
           {
    (yyval.ast_val)=(yyvsp[0].ast_val);
  }
#line 2373 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 84:
#line 687 "/root/compile/Compiler/src/sysy.y"
                    {
    auto addexp = new BinaryExpAST();
    addexp->exp1 = unique_ptr<BaseAST>((yyvsp[-2].ast_val));
    addexp->exp2 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    addexp->op2 = op::ADD;
    //addexp->calc_f=($1->calc_f)&&($3->calc_f);
    (yyval.ast_val) = addexp;
  }
#line 2386 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 85:
#line 695 "/root/compile/Compiler/src/sysy.y"
                      {
    auto addexp = new BinaryExpAST();
    addexp->exp1 = unique_ptr<BaseAST>((yyvsp[-2].ast_val));
    addexp->exp2 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    addexp->op2 = op::SUB;
    //addexp->calc_f=($1->calc_f)&&($3->calc_f);
    (yyval.ast_val) = addexp;
  }
#line 2399 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 86:
#line 703 "/root/compile/Compiler/src/sysy.y"
           {
    (yyval.ast_val)=(yyvsp[0].ast_val);
  }
#line 2407 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 87:
#line 710 "/root/compile/Compiler/src/sysy.y"
                      {
    auto mulexp = new BinaryExpAST();
    mulexp->exp1 = unique_ptr<BaseAST>((yyvsp[-2].ast_val));
    mulexp->op2 = op::MUL;
    mulexp->exp2 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    //mulexp->calc_f=($1->calc_f)&&($3->calc_f);
    (yyval.ast_val) = mulexp;
  }
#line 2420 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 88:
#line 718 "/root/compile/Compiler/src/sysy.y"
                        {
    auto mulexp = new BinaryExpAST();
    mulexp->exp1 = unique_ptr<BaseAST>((yyvsp[-2].ast_val));
    mulexp->op2 = op::DIV;
    mulexp->exp2 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    //mulexp->calc_f=($1->calc_f)&&($3->calc_f);
    (yyval.ast_val) = mulexp;
  }
#line 2433 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 89:
#line 726 "/root/compile/Compiler/src/sysy.y"
                        {
    auto mulexp = new BinaryExpAST();
    mulexp->exp1 = unique_ptr<BaseAST>((yyvsp[-2].ast_val));
    mulexp->op2 = op::MOD;
    mulexp->exp2 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    //mulexp->calc_f=($1->calc_f)&&($3->calc_f);
    (yyval.ast_val) = mulexp;
  }
#line 2446 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 90:
#line 734 "/root/compile/Compiler/src/sysy.y"
            {
    (yyval.ast_val) = (yyvsp[0].ast_val);
  }
#line 2454 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 91:
#line 742 "/root/compile/Compiler/src/sysy.y"
             {
    (yyval.ast_val) = (yyvsp[0].ast_val);
  }
#line 2462 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 92:
#line 745 "/root/compile/Compiler/src/sysy.y"
                    {
    auto ast = new UnaryExpAST();
    ast->op1 = (yyvsp[-1].op_val);
    ast->exp1 = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    //ast->calc_f=ast->exp1->calc_f;
    (yyval.ast_val) = ast;
  }
#line 2474 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 93:
#line 756 "/root/compile/Compiler/src/sysy.y"
             {
    (yyval.ast_val) = (yyvsp[0].ast_val);
  }
#line 2482 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 94:
#line 759 "/root/compile/Compiler/src/sysy.y"
  {
    (yyval.ast_val) = nullptr;
  }
#line 2490 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 95:
#line 766 "/root/compile/Compiler/src/sysy.y"
                     {
    FuncRParamsAST* ast = nullptr;
    ast = dynamic_cast<FuncRParamsAST*>((yyvsp[-2].ast_val));
    if(ast==nullptr){
      std::cerr << "Exception: " << "dynamic_cast failed"<< std::endl;
    }
    ast->paramlist.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = ast;
  }
#line 2504 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 96:
#line 775 "/root/compile/Compiler/src/sysy.y"
     {
    auto ast = new FuncRParamsAST();
    ast->paramlist.push_back(unique_ptr<BaseAST>((yyvsp[0].ast_val)));
    (yyval.ast_val) = ast;
  }
#line 2514 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 97:
#line 783 "/root/compile/Compiler/src/sysy.y"
      {
    (yyval.op_val) = op::SUB;
  }
#line 2522 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 98:
#line 786 "/root/compile/Compiler/src/sysy.y"
      {
    (yyval.op_val) = op::ADD;
  }
#line 2530 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 99:
#line 789 "/root/compile/Compiler/src/sysy.y"
       {
    (yyval.op_val) = op::NOT;
  }
#line 2538 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 100:
#line 795 "/root/compile/Compiler/src/sysy.y"
              {
    (yyval.ast_val) = (yyvsp[-1].ast_val);
  }
#line 2546 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 101:
#line 798 "/root/compile/Compiler/src/sysy.y"
          {
    (yyval.ast_val) = (yyvsp[0].ast_val);
  }
#line 2554 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 102:
#line 801 "/root/compile/Compiler/src/sysy.y"
       {
    (yyval.ast_val) = (yyvsp[0].ast_val);
  }
#line 2562 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 103:
#line 804 "/root/compile/Compiler/src/sysy.y"
                             {
    auto ast = new FuncCallAST();
    ast->ident = *((yyvsp[-3].str_val));
    ast->params = unique_ptr<BaseAST>((yyvsp[-1].ast_val));
    (yyval.ast_val) = ast;
  }
#line 2573 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 104:
#line 814 "/root/compile/Compiler/src/sysy.y"
              {
    auto ast = new NumberAST();
    ast->value = (yyvsp[0].int_val);
    ast->calc_f=1;
    (yyval.ast_val) = ast;
  }
#line 2584 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 105:
#line 823 "/root/compile/Compiler/src/sysy.y"
        {
    auto ast = new LValAST();
    ast->ident = *((yyvsp[0].str_val));
    (yyval.ast_val) = ast;
  }
#line 2594 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 106:
#line 828 "/root/compile/Compiler/src/sysy.y"
         {
    auto ast=new LValAST();
    ast->ident="";
    ast->arraydef = unique_ptr<BaseAST>((yyvsp[0].ast_val));
    (yyval.ast_val)=ast;
  }
#line 2605 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 107:
#line 837 "/root/compile/Compiler/src/sysy.y"
                     {
    LArrayAST* ast = nullptr;
    ast = dynamic_cast<LArrayAST*>((yyvsp[-3].ast_val));
    if(ast==nullptr){
      std::cerr << "Exception: " << "dynamic_cast failed"<< std::endl;
    }
    ast->dimon_list.push_back(unique_ptr<BaseAST>((yyvsp[-1].ast_val)));
    (yyval.ast_val) = ast;
  }
#line 2619 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 108:
#line 846 "/root/compile/Compiler/src/sysy.y"
        {
    (yyval.ast_val)=(yyvsp[0].ast_val);
  }
#line 2627 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;

  case 109:
#line 852 "/root/compile/Compiler/src/sysy.y"
                   {
    auto ast = new LArrayAST();
    ast->ident = *((yyvsp[-3].str_val));
    ast->dimon_list.push_back(unique_ptr<BaseAST>((yyvsp[-1].ast_val)));
    (yyval.ast_val) = ast;
  }
#line 2638 "/root/compile/Compiler/build/sysy.tab.cpp"
    break;


#line 2642 "/root/compile/Compiler/build/sysy.tab.cpp"

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (ast, YY_("syntax error"));
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
        yyerror (ast, yymsgp);
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
                      yytoken, &yylval, ast);
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
                  yystos[yystate], yyvsp, ast);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (ast, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, ast);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, ast);
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
  return yyresult;
}
#line 859 "/root/compile/Compiler/src/sysy.y"


void yyerror(std::unique_ptr<BaseAST> &ast,std::string s) {
  extern int yylineno; //define and maintained in lex
  extern char *yytext; //define and maintained in lex
  int len = strlen(yytext);
  int i;
  char buf[512]={0};
  for(i=0;i<len;++i){
    sprintf(buf,"%s%d",buf,yytext[i]);
  }
  fprintf(stderr, "Error: %s at symbol '%s' on line %d\n", s.c_str(), buf,yylineno);
  
}
