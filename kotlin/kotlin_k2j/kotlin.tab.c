/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "kotlin.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "find_data.h"
#include "parse_tree.h"

#define NEED -1
#define NOT_NEED -2
#define NEED_NOW -3
#define Not_defined 0
#define Char 1
#define Bool 2
#define Int 3
#define Long 4
#define Float 5
#define Double 6
#define String 7
#define Unit 8
#define Any 9
#define Const 10
#define Question 20
#define List 30
#define C_fun 100
#define Class 200
#define Classtype 300

extern int yylex(void);
extern void yyterminate();
extern int yyerror(const char *s);

int Check_Type_Saved(char * name, int kind);
int Check_Type_Not_Saved(double value);
char * ttos(int type);

char * id_name[1000] = { 0 };
char * fun_name[1000] = { 0 };
double data[1000] = { 0 };
int id_type[1000] = { 0 };
int fun_type[1000] = { 0 };
char * class_type[1000] = { 0 };
char * class_name[1000] = { 0 };
int tmp_type = 0, tmp_idx = 0;
double tmp_data;
char * tmp_str;


NODE * parent;
NODE * child;
NODE * tmp_node;


#line 120 "kotlin.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "kotlin.tab.h".  */
#ifndef YY_YY_KOTLIN_TAB_H_INCLUDED
# define YY_YY_KOTLIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    L_NUMBER = 258,
    NUMBER = 259,
    STR = 260,
    PACK = 261,
    FUNC = 262,
    VAL = 263,
    VAR = 264,
    IMPORT = 265,
    IF = 266,
    ELSEIF = 267,
    ELSE = 268,
    NUL = 269,
    RETURN = 270,
    FOR = 271,
    WHILE = 272,
    WHEN = 273,
    IS = 274,
    IN = 275,
    DOWNTO = 276,
    STEP = 277,
    SETOF = 278,
    LISTOF = 279,
    LIST = 280,
    INT = 281,
    FLOAT = 282,
    LONG = 283,
    DOUBLE = 284,
    STRING = 285,
    CHAR = 286,
    BOOL = 287,
    ANY = 288,
    UNIT = 289,
    MAIN = 290,
    ID = 291,
    COMMENT = 292,
    COMMENT_LONG = 293,
    ABST = 294,
    CLASS = 295,
    OVER = 296,
    INTER = 297,
    M_OPEN = 298,
    M_CLOSE = 299,
    COMMA = 300,
    ARROW = 301,
    EQUAL = 302,
    E_PLUS = 303,
    E_MINUS = 304,
    E_MULT = 305,
    E_DIV = 306,
    OR = 307,
    AND = 308,
    B_OR = 309,
    B_XOR = 310,
    B_AND = 311,
    SAME = 312,
    NOT_SAME = 313,
    DOUBLEDOT = 314,
    E_LESS = 315,
    E_GREATER = 316,
    GREATER = 317,
    LESS = 318,
    L_SHIFT = 319,
    R_SHIFT = 320,
    PLUS = 321,
    MINUS = 322,
    MULT = 323,
    DIV = 324,
    INC = 325,
    DEC = 326,
    COLUMN = 327,
    DOT = 328,
    NOT = 329,
    QUESTION = 330,
    OPEN = 331,
    CLOSE = 332,
    B_OPEN = 333,
    B_CLOSE = 334,
    CALL = 335
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 55 "kotlin.y" /* yacc.c:355  */
 struct parse_node* node_var; double d_var; float f_var; int i_var; long l_var; char* s_var; char c_var; char** sp_var

#line 244 "kotlin.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 261 "kotlin.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  82
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   721

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  359

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   177,   177,   191,   202,   213,   231,   245,   254,   269,
     278,   287,   296,   305,   314,   323,   332,   341,   350,   366,
     382,   393,   402,   412,   426,   456,   484,   507,   519,   530,
     539,   548,   558,   568,   579,   593,   607,   616,   624,   634,
     645,   656,   665,   681,   700,   710,   720,   743,   752,   761,
     770,   779,   788,   798,   818,   834,   850,   860,   876,   892,
     902,   913,   924,   934,   952,   962,   975,   989,  1005,  1017,
    1029,  1041,  1053,  1066,  1075,  1086,  1105,  1117,  1126,  1144,
    1162,  1173,  1184,  1193,  1203,  1213,  1223,  1233,  1243,  1253,
    1264,  1275,  1285,  1296,  1308,  1334,  1344,  1353,  1362,  1378,
    1392,  1404,  1419,  1432,  1445,  1454,  1475,  1496,  1506,  1521,
    1534,  1549,  1559,  1568,  1578,  1588,  1600,  1612,  1627,  1649,
    1665,  1676,  1688,  1703,  1717,  1733,  1750,  1761,  1770,  1783,
    1793,  1805,  1815,  1824,  1833,  1843,  1851,  1862,  1873,  1884,
    1895,  1906,  1917,  1928,  1939,  1948,  1964,  1983,  1996,  2012,
    2023,  2034,  2043,  2054,  2063,  2075,  2087,  2102,  2114,  2139,
    2148,  2162,  2183,  2198,  2213,  2222,  2232,  2244,  2253,  2269,
    2279,  2322,  2336,  2350,  2366,  2382,  2396,  2405,  2416,  2427
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "L_NUMBER", "NUMBER", "STR", "PACK",
  "FUNC", "VAL", "VAR", "IMPORT", "IF", "ELSEIF", "ELSE", "NUL", "RETURN",
  "FOR", "WHILE", "WHEN", "IS", "IN", "DOWNTO", "STEP", "SETOF", "LISTOF",
  "LIST", "INT", "FLOAT", "LONG", "DOUBLE", "STRING", "CHAR", "BOOL",
  "ANY", "UNIT", "MAIN", "ID", "COMMENT", "COMMENT_LONG", "ABST", "CLASS",
  "OVER", "INTER", "M_OPEN", "M_CLOSE", "COMMA", "ARROW", "EQUAL",
  "E_PLUS", "E_MINUS", "E_MULT", "E_DIV", "OR", "AND", "B_OR", "B_XOR",
  "B_AND", "SAME", "NOT_SAME", "DOUBLEDOT", "E_LESS", "E_GREATER",
  "GREATER", "LESS", "L_SHIFT", "R_SHIFT", "PLUS", "MINUS", "MULT", "DIV",
  "INC", "DEC", "COLUMN", "DOT", "NOT", "QUESTION", "OPEN", "CLOSE",
  "B_OPEN", "B_CLOSE", "CALL", "$accept", "goal", "start", "eval", "expr",
  "generic", "class_stt", "val_decl", "var_decl", "class_keyword",
  "class_id_decl", "class_decl", "class_method_decl", "c_inheritance",
  "inheritance", "lambda", "assign", "main_fun", "cal_sent", "term",
  "signed_factor", "factor", "param", "class_param", "type", "fun_type",
  "fun_stt", "ret_type", "fun_body", "while_stt", "for_stt", "loop_body",
  "when_body", "when_id", "when_condition", "when_stt", "if_stt", "noelse",
  "withelse", "else_part", "cf", "cf_body", "com", "condition",
  "is_condition", "range", "step_count", "id_decl", "id_decl_stt",
  "decl_content", "list_content", "fun_call", "argument", "mul_argument",
  "epsilone", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335
};
# endif

#define YYPACT_NINF -261

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-261)))

#define YYTABLE_NINF -39

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     297,  -261,  -261,   297,    -9,   -35,   -35,   297,     3,  -261,
     -63,   -40,   -38,   547,  -261,  -261,     1,    33,    50,   183,
     183,    63,    67,   555,   115,  -261,  -261,   379,  -261,  -261,
    -261,   379,    99,   113,  -261,  -261,  -261,  -261,  -261,  -261,
    -261,  -261,  -261,  -261,  -261,    70,   108,    54,    97,  -261,
    -261,  -261,   420,   420,   569,  -261,  -261,   569,   569,    18,
     102,   196,  -261,  -261,  -261,  -261,  -261,  -261,   169,   449,
    -261,   555,  -261,   175,   146,   221,   118,  -261,  -261,  -261,
    -261,    62,  -261,  -261,  -261,   555,   555,   555,   555,   160,
     236,   682,   -35,   465,   237,    21,  -261,   187,    99,     0,
     155,  -261,   267,   589,  -261,   250,   682,   220,    99,   258,
       4,   263,  -261,   235,  -261,    -8,  -261,   271,   241,   242,
      53,   271,   246,  -261,    99,   255,   190,   131,   290,  -261,
     113,   113,  -261,  -261,     2,   266,   273,  -261,   278,  -261,
    -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,   272,
     275,   631,   308,   569,  -261,   682,   339,   555,   337,   569,
     569,   569,   569,   569,   569,   569,   569,   338,   316,   317,
     490,  -261,   682,  -261,   555,   490,   341,   490,   319,   555,
     449,  -261,  -261,   504,   504,  -261,  -261,  -261,   190,   -35,
     -35,   288,  -261,  -261,  -261,   218,   151,   322,   194,   325,
     294,   379,   463,  -261,  -261,   672,   299,   682,  -261,   504,
     504,   -35,   601,  -261,   682,     9,   555,   489,   658,   231,
     231,  -261,  -261,  -261,  -261,   379,   357,   239,  -261,   379,
     379,  -261,  -261,     9,    18,   555,    18,    18,    -5,  -261,
     334,    82,   307,   312,   314,   340,   347,   326,  -261,  -261,
    -261,  -261,  -261,  -261,    51,    99,  -261,  -261,  -261,  -261,
    -261,   349,   672,     2,  -261,   343,   323,   324,  -261,   338,
    -261,   555,   555,  -261,  -261,     9,   358,   555,   327,   338,
    -261,  -261,  -261,   363,   366,  -261,  -261,     9,  -261,   367,
     352,   504,   504,   271,   271,   326,   190,   190,   376,   370,
    -261,   540,  -261,   236,   345,  -261,  -261,  -261,  -261,  -261,
     239,    35,    35,  -261,  -261,    99,   569,  -261,  -261,  -261,
    -261,  -261,   386,  -261,  -261,  -261,  -261,  -261,   383,  -261,
    -261,    -3,  -261,   385,   131,  -261,    39,  -261,  -261,   183,
    -261,  -261,  -261,   619,   389,   131,   376,   376,   391,  -261,
    -261,   338,   395,  -261,  -261,  -261,   239,  -261,  -261
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     179,    64,    63,   179,     0,     0,     0,   179,     0,    74,
       0,     0,     0,    65,   133,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     5,     7,    21,    14,
      13,   179,    15,    56,    59,    62,    16,    10,     9,    12,
      11,    17,    73,    22,     4,     0,     0,   156,   159,    27,
      28,     3,   179,   179,     0,   120,   121,     0,     0,   179,
       0,    48,    49,    50,    51,    52,    68,    69,     0,   179,
      20,     0,    47,     0,     0,     0,    65,    60,    61,    70,
      71,     0,     1,     6,     8,     0,     0,     0,     0,     0,
     179,     0,     0,     0,     0,     0,   155,    65,   144,    59,
       0,   135,     0,     0,   112,     0,     0,     0,   113,     0,
       0,     0,   111,     0,    19,    67,    66,   179,     0,     0,
     179,    73,     0,   176,    18,     0,   179,   179,     0,    72,
      54,    55,    57,    58,   179,     0,     0,    77,     0,    83,
      85,    84,    86,    87,    88,    89,   157,   160,   164,     0,
       0,   165,   161,     0,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   179,     0,     0,
       0,   114,     0,   119,     0,     0,     0,     0,     0,     0,
     179,   172,   178,     0,     0,   171,   175,   170,   179,     0,
       0,     0,    82,    30,    29,     0,   179,     0,   179,    31,
      67,   179,     0,    53,   104,     0,   179,     0,    90,     0,
       0,     0,     0,   147,     0,   179,     0,   142,   141,   136,
     143,   140,   139,   137,   138,   179,   132,   122,   129,   179,
     179,   109,   115,   179,   179,     0,   179,   179,     0,   177,
     167,   169,     0,     0,     0,    80,    81,   179,    33,    32,
      39,    34,    26,    35,     0,   101,   103,   102,    93,    92,
      91,    76,     0,   179,    97,     0,     0,     0,   158,   179,
     148,     0,     0,   145,   151,   179,     0,   131,     0,   179,
     124,   127,   107,     0,     0,   116,   108,   179,   110,     0,
     179,     0,     0,   179,   179,   179,   179,   179,     0,     0,
      41,     0,   100,   179,    91,    96,    94,    23,   162,   163,
     123,   179,   179,   146,   128,   130,     0,   126,   106,   105,
     117,   118,     0,    46,   166,   168,   174,   173,     0,    78,
      79,    44,    40,    45,   179,    99,     0,    75,    95,     0,
     150,   153,   149,     0,     0,   179,     0,     0,     0,    98,
     152,   179,     0,    43,    42,    25,   179,    24,   125
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -261,  -261,    93,    40,   203,  -261,  -261,   238,   245,  -261,
    -261,  -184,  -261,   147,   -79,   153,  -261,  -261,    -6,   193,
     -29,   -17,   138,  -180,   -62,   182,   252,  -261,   185,  -261,
    -261,   234,  -125,   -52,  -261,   249,   259,  -261,   380,   109,
    -260,   251,  -261,    83,  -261,  -215,   159,    86,    -2,  -261,
    -129,   -58,   298,  -114,   -13
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,   226,    27,   208,    28,    29,    30,   195,
     196,   197,   198,   299,   332,    70,    71,    31,    32,    33,
      34,    35,   136,   191,   146,   261,    36,   263,   203,    37,
      38,   283,   109,   110,   111,    39,    40,    55,    56,   280,
     227,   228,    41,   100,   101,   273,   340,    48,    49,   152,
     242,    42,   122,   181,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,    47,    77,    78,    50,    59,   185,   186,   244,   310,
     116,   121,   251,    57,   253,    52,    53,    81,   285,   317,
     157,     1,     2,   104,   174,    99,    45,    46,    99,    99,
     271,   105,     9,    52,    53,   179,    58,   106,    60,   290,
      26,    73,   346,    26,   171,   201,   112,    26,    98,   202,
     175,    98,    98,   108,    76,   243,   123,   339,   132,   133,
     313,    85,    86,   120,    99,   124,   301,    83,    69,    74,
     116,    84,   320,    69,   158,    85,    86,   137,   176,    54,
     266,   267,   272,   349,    19,    20,    75,    98,    21,    22,
     147,   356,   107,   213,    23,   302,    44,   153,   180,    79,
      51,    85,    86,    80,   182,    85,    86,   182,   182,   286,
     232,   288,   289,   192,   199,    82,   329,   330,   231,    85,
      86,   204,   121,   234,    99,   236,    91,   292,    85,    86,
      99,    99,    99,    99,    99,    99,    99,    99,   113,   129,
     102,   103,    92,   260,    93,   265,    89,    98,    85,    86,
     348,   215,   270,    98,    98,    98,    98,    98,    98,    98,
      98,   352,   324,   325,   108,    85,    86,   123,   233,   108,
     193,   108,   194,   238,   120,   192,   151,   241,   241,   326,
     327,    87,    88,   199,    90,   199,     1,     2,    66,    67,
     193,   128,   194,   264,    69,   -36,   255,     9,   189,   190,
     304,   114,   274,   241,   241,   115,   155,   159,   160,   268,
     275,   125,   161,   162,   281,   163,   164,   165,   166,    76,
     274,   112,   126,   112,   112,    94,     5,     6,   108,   287,
     108,   108,   167,   193,   300,   194,   212,   134,   -37,   172,
     333,   254,   217,   218,   219,   220,   221,   222,   223,   224,
     204,   278,   279,    21,    22,    95,    96,    66,    67,    23,
     128,   156,   274,    69,   127,   311,   312,   353,   354,   282,
     282,   315,   135,    46,   274,   245,   246,    72,   130,   131,
     182,   182,   300,   192,   192,   241,   241,    99,   333,   333,
     137,   163,   164,   165,   166,   336,   170,   281,   341,   341,
       1,     2,   173,     3,     4,     5,     6,     7,     8,   177,
      98,     9,   178,    10,    11,    12,   180,   183,   184,   159,
     160,   199,   350,   187,   161,   162,   200,   163,   164,   165,
     166,   188,   199,    13,    14,    15,    16,    17,   205,    18,
     207,     1,     2,   281,   168,     4,     5,     6,   209,     8,
     206,   210,     9,   211,    10,    11,    12,   216,   214,   229,
     230,   235,   237,    19,    20,   247,   252,    21,    22,   -38,
      69,   262,   277,    23,    13,    14,    15,    16,    17,   291,
      18,   225,     1,     2,   293,   296,     4,     5,     6,   294,
       8,   295,   297,     9,   303,    10,    11,    12,   298,   343,
     308,   309,   314,   316,    19,    20,   307,   318,    21,    22,
     319,   321,   331,   334,    23,    13,    14,    15,    16,    17,
     338,    18,   344,     1,     2,   322,   345,    94,     5,     6,
     347,     8,   179,   248,     9,   355,    10,    11,    12,   357,
     249,   337,   328,   323,   305,    19,    20,   250,   306,    21,
      22,   256,     1,     2,   117,    23,    13,    14,    15,    16,
      17,   257,    18,     9,   284,   358,     1,     2,     1,     2,
     148,   342,   118,   119,     8,   154,   276,     9,   239,     9,
       0,    12,     0,     0,     0,    76,    19,    20,   149,   150,
      21,    22,     0,     1,     2,   104,    23,     0,     0,    76,
       0,    97,     0,     0,     9,     0,     0,     1,     2,   240,
       0,     0,     0,     0,     0,    19,    20,     0,     9,    21,
      22,     0,     0,     0,     0,    23,    76,     0,     0,    19,
      20,    19,    20,    21,    22,    21,    22,     0,     0,    23,
      76,    23,   160,     1,     2,     0,   161,   162,     0,   163,
     164,   165,   166,     0,     9,     0,    19,    20,     1,     2,
      21,    22,     0,     0,     0,     0,    23,     0,     0,     9,
      19,    20,     1,     2,    21,    22,    76,     0,     0,     0,
      23,     0,     0,     9,   335,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    61,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,    97,    19,    20,     0,     0,
      21,    22,     0,     0,     0,     0,    23,    66,    67,     0,
      68,    19,    20,    69,     0,    21,    22,     0,     0,     0,
       0,    23,     0,     0,     0,    19,    20,     0,     0,    21,
      22,   159,   160,     0,     0,    23,   161,   162,     0,   163,
     164,   165,   166,   159,   160,     0,     0,     0,   161,   162,
       0,   163,   164,   165,   166,     0,   169,     0,     0,     0,
       0,   159,   160,     0,     0,     0,   161,   162,   269,   163,
     164,   165,   166,   159,   160,     0,     0,     0,   161,   162,
       0,   163,   164,   165,   166,     0,   351,   138,   139,   140,
     141,   142,   143,   144,   145,   258,   259,   138,   139,   140,
     141,   142,   143,   144,   145,   161,   162,     0,   163,   164,
     165,   166
};

static const yytype_int16 yycheck[] =
{
      13,    36,    19,    20,     6,    43,   120,   121,   188,   269,
      68,    69,   196,    76,   198,    12,    13,    23,   233,   279,
      20,     3,     4,     5,    20,    54,    35,    36,    57,    58,
      21,    13,    14,    12,    13,    43,    76,    19,    76,    44,
       0,    40,    45,     3,   106,    43,    59,     7,    54,    47,
      46,    57,    58,    59,    36,   184,    69,    22,    87,    88,
     275,    66,    67,    69,    93,    71,    15,    27,    76,    36,
     128,    31,   287,    76,    74,    66,    67,    90,    74,    76,
     209,   210,    73,    44,    66,    67,    36,    93,    70,    71,
      92,   351,    74,   155,    76,    44,     3,    76,    45,    36,
       7,    66,    67,    36,   117,    66,    67,   120,   121,   234,
     172,   236,   237,   126,   127,     0,   296,   297,   170,    66,
      67,   134,   180,   175,   153,   177,    72,    45,    66,    67,
     159,   160,   161,   162,   163,   164,   165,   166,    36,    77,
      57,    58,    45,   205,    47,   207,    76,   153,    66,    67,
     334,   157,   214,   159,   160,   161,   162,   163,   164,   165,
     166,   345,   291,   292,   170,    66,    67,   180,   174,   175,
      39,   177,    41,   179,   180,   188,    93,   183,   184,   293,
     294,    68,    69,   196,    76,   198,     3,     4,    70,    71,
      39,    73,    41,   206,    76,    44,   202,    14,     8,     9,
     262,     5,   215,   209,   210,    36,    19,    52,    53,   211,
     216,    36,    57,    58,   227,    60,    61,    62,    63,    36,
     233,   234,    76,   236,   237,     7,     8,     9,   234,   235,
     236,   237,    77,    39,   247,    41,   153,    77,    44,    19,
     298,   201,   159,   160,   161,   162,   163,   164,   165,   166,
     263,    12,    13,    70,    71,    52,    53,    70,    71,    76,
      73,    74,   275,    76,    43,   271,   272,   346,   347,   229,
     230,   277,    36,    36,   287,   189,   190,   290,    85,    86,
     293,   294,   295,   296,   297,   291,   292,   316,   346,   347,
     303,    60,    61,    62,    63,   301,    46,   310,   311,   312,
       3,     4,    44,     6,     7,     8,     9,    10,    11,    46,
     316,    14,    77,    16,    17,    18,    45,    76,    76,    52,
      53,   334,   339,    77,    57,    58,    36,    60,    61,    62,
      63,    76,   345,    36,    37,    38,    39,    40,    72,    42,
      62,     3,     4,   356,    77,     7,     8,     9,    76,    11,
      77,    76,    14,    45,    16,    17,    18,    20,    19,    43,
      43,    20,    43,    66,    67,    77,    44,    70,    71,    44,
      76,    72,    15,    76,    36,    37,    38,    39,    40,    45,
      42,    43,     3,     4,    77,    45,     7,     8,     9,    77,
      11,    77,    45,    14,    45,    16,    17,    18,    72,   316,
      77,    77,    44,    76,    66,    67,    63,    44,    70,    71,
      44,    44,    36,    43,    76,    36,    37,    38,    39,    40,
      75,    42,    36,     3,     4,    73,    43,     7,     8,     9,
      45,    11,    43,   195,    14,    44,    16,    17,    18,    44,
     195,   303,   295,   290,   262,    66,    67,   195,   263,    70,
      71,   202,     3,     4,     5,    76,    36,    37,    38,    39,
      40,   202,    42,    14,   230,   356,     3,     4,     3,     4,
       5,   312,    23,    24,    11,    95,   225,    14,   180,    14,
      -1,    18,    -1,    -1,    -1,    36,    66,    67,    23,    24,
      70,    71,    -1,     3,     4,     5,    76,    -1,    -1,    36,
      -1,    36,    -1,    -1,    14,    -1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    14,    70,
      71,    -1,    -1,    -1,    -1,    76,    36,    -1,    -1,    66,
      67,    66,    67,    70,    71,    70,    71,    -1,    -1,    76,
      36,    76,    53,     3,     4,    -1,    57,    58,    -1,    60,
      61,    62,    63,    -1,    14,    -1,    66,    67,     3,     4,
      70,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    14,
      66,    67,     3,     4,    70,    71,    36,    -1,    -1,    -1,
      76,    -1,    -1,    14,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    66,    67,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    76,    70,    71,    -1,
      73,    66,    67,    76,    -1,    70,    71,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    66,    67,    -1,    -1,    70,
      71,    52,    53,    -1,    -1,    76,    57,    58,    -1,    60,
      61,    62,    63,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    60,    61,    62,    63,    -1,    77,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    57,    58,    77,    60,
      61,    62,    63,    52,    53,    -1,    -1,    -1,    57,    58,
      -1,    60,    61,    62,    63,    -1,    77,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    25,    26,    27,
      28,    29,    30,    31,    32,    57,    58,    -1,    60,    61,
      62,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,     8,     9,    10,    11,    14,
      16,    17,    18,    36,    37,    38,    39,    40,    42,    66,
      67,    70,    71,    76,    82,    83,    84,    85,    87,    88,
      89,    98,    99,   100,   101,   102,   107,   110,   111,   116,
     117,   123,   132,   135,    83,    35,    36,    36,   128,   129,
     129,    83,    12,    13,    76,   118,   119,    76,    76,    43,
      76,    47,    48,    49,    50,    51,    70,    71,    73,    76,
      96,    97,   135,    40,    36,    36,    36,   102,   102,    36,
      36,    99,     0,    84,    84,    66,    67,    68,    69,    76,
      76,    72,    45,    47,     7,    85,    85,    36,    99,   101,
     124,   125,   124,   124,     5,    13,    19,    74,    99,   113,
     114,   115,   135,    36,     5,    36,   132,     5,    23,    24,
      99,   132,   133,   135,    99,    36,    76,    43,    73,    77,
     100,   100,   101,   101,    77,    36,   103,   135,    25,    26,
      27,    28,    29,    30,    31,    32,   105,   129,     5,    23,
      24,   124,   130,    76,   119,    19,    74,    20,    74,    52,
      53,    57,    58,    60,    61,    62,    63,    77,    77,    77,
      46,   105,    19,    44,    20,    46,    74,    46,    77,    43,
      45,   134,   135,    76,    76,   134,   134,    77,    76,     8,
       9,   104,   135,    39,    41,    90,    91,    92,    93,   135,
      36,    43,    47,   109,   135,    72,    77,    62,    86,    76,
      76,    45,   124,   105,    19,    99,    20,   124,   124,   124,
     124,   124,   124,   124,   124,    43,    84,   121,   122,    43,
      43,   114,   105,    99,   114,    20,   114,    43,    99,   133,
       5,    99,   131,   131,   104,   128,   128,    77,    88,    89,
     107,    92,    44,    92,    84,    99,   116,   117,    33,    34,
     105,   106,    72,   108,   135,   105,   131,   131,   129,    77,
     105,    21,    73,   126,   135,    99,   122,    15,    12,    13,
     120,   135,    84,   112,   112,   126,   113,    99,   113,   113,
      44,    45,    45,    77,    77,    77,    45,    45,    72,    94,
     135,    15,    44,    45,   105,   106,   109,    63,    77,    77,
     121,    99,    99,   126,    44,    99,    76,   121,    44,    44,
     126,    44,    73,    96,   131,   131,   134,   134,    94,   104,
     104,    36,    95,   132,    43,    44,    99,   103,    75,    22,
     127,   135,   127,   124,    36,    43,    45,    45,    92,    44,
     102,    77,    92,    95,    95,    44,   121,    44,   120
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    83,    83,    83,    84,    84,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    87,    87,    87,    88,    89,    90,
      90,    90,    91,    91,    92,    92,    92,    92,    92,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    97,    97,
      97,    97,    97,    98,    99,    99,    99,   100,   100,   100,
     101,   101,   101,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   103,   103,   103,   104,   104,
     104,   104,   104,   105,   105,   105,   105,   105,   105,   105,
     105,   106,   106,   106,   107,   108,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   110,   111,   112,   113,   113,
     113,   113,   114,   114,   115,   115,   115,   115,   116,   116,
     117,   117,   118,   119,   119,   120,   120,   120,   121,   121,
     122,   122,   122,   123,   123,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   125,   125,   126,
     126,   126,   127,   127,   119,   119,   128,   128,   129,   129,
     129,   129,   130,   130,   130,   130,   131,   131,   131,   131,
     132,   133,   133,   133,   133,   133,   133,   134,   134,   135
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     1,     3,    10,     9,     5,     2,     2,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     2,
       2,     1,     3,     3,     1,     1,     6,     1,     1,     1,
       1,     1,     1,     5,     3,     3,     1,     3,     3,     1,
       2,     2,     1,     1,     1,     1,     3,     3,     2,     2,
       2,     2,     3,     1,     1,     5,     3,     1,     4,     4,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     7,     3,     2,     1,     5,     4,
       3,     2,     2,     2,     1,     7,     7,     1,     4,     3,
       4,     1,     1,     1,     2,     3,     4,     5,     7,     4,
       2,     2,     4,     4,     5,     6,     2,     1,     3,     1,
       3,     2,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     4,     5,     3,     4,     3,
       3,     1,     2,     1,     3,     2,     1,     3,     5,     1,
       3,     3,     4,     4,     1,     1,     3,     1,     3,     1,
       4,     2,     2,     5,     5,     2,     1,     2,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
#line 178 "kotlin.y" /* yacc.c:1646  */
    {
		root = (NODE*)malloc(sizeof(NODE));
		root -> next= NULL;
		root -> prev = NULL;
		root -> parent = NULL;
		root -> token_type = NOT_NEED;
		root -> type = Not_defined;
		child = make_token_node("import java.util.*;\n");
		Add_Child(root, child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);
		Print_Tree(root, 0);
	}
#line 1682 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 192 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node((yyvsp[-1].s_var));
		Add_Child(parent, child, NEED_NOW);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 1697 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 203 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node((yyvsp[-1].s_var));
		Add_Child(parent, child, NEED_NOW);
		Add_Last((yyvsp[0].node_var), NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 1712 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 214 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("public class");
		Add_Child(parent, child, NOT_NEED);
		child = make_class_node("output", NULL);
		Add_Last(child, NOT_NEED);
		child = make_token_node("{");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);
		child = make_token_node("}");
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent; 
	}
#line 1733 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 232 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		tmp_type = tmp_node -> type;
		tmp_node = (yyvsp[0].node_var);
		if(tmp_type >= tmp_node -> type)
			tmp_node = (yyvsp[-1].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[-1].node_var), NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
    	}
#line 1751 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 246 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 1764 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 255 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		tmp_type = tmp_node -> type;
		tmp_node = (yyvsp[0].node_var);
		if(tmp_type >= tmp_node -> type)
			tmp_node = (yyvsp[-1].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[-1].node_var),NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 1782 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 270 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
		
		(yyval.node_var) = parent; 
	}
#line 1795 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 279 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
	
		(yyval.node_var) = parent;
	}
#line 1808 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 288 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 1821 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 297 "kotlin.y" /* yacc.c:1646  */
    {
		parent= make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 1834 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 306 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NEED);
	
		(yyval.node_var) = parent;
	}
#line 1847 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 315 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NEED);
		
		(yyval.node_var) = parent; 
	}
#line 1860 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 324 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NEED);
	
		(yyval.node_var) = parent; 
	}
#line 1873 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 333 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 1886 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 342 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 1899 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 351 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		tmp_idx = Find_var_index((yyvsp[-2].s_var), id_name);
		if(tmp_idx == -1)
			tmp_idx = Var_Save((yyvsp[-2].s_var), tmp_node -> data, tmp_node -> type, id_name, data, id_type);
		child = make_id_node(id_name[tmp_idx], id_type[tmp_idx], data[tmp_idx]);
		child -> data = tmp_node -> data;
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[-1].node_var), NOT_NEED);
		Add_Last((yyvsp[0].node_var), NEED);

		(yyval.node_var) = parent;
	}
#line 1919 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 367 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_str = (yyvsp[0].s_var);
		tmp_idx = Find_var_index((yyvsp[-2].s_var), id_name);
		if(tmp_idx == -1)
			tmp_idx = Var_Save((yyvsp[-2].s_var), 0, String, id_name, data, id_type); 
		child = make_id_node(id_name[tmp_idx], id_type[tmp_idx], 0);
		Add_Child(parent, child, NOT_NEED);
		child = make_token_node("=");
		Add_Last(child, NOT_NEED);
		child = make_token_node((yyvsp[0].s_var));
		Add_Last(child, NEED);

		(yyval.node_var) = parent;
	}
#line 1939 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 383 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		child = make_id_node((yyvsp[-1].s_var), tmp_node -> type, tmp_node -> data);
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NEED);

		(yyval.node_var) = parent;
	}
#line 1954 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 394 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NEED);
		
		(yyval.node_var) = parent;
	}
#line 1967 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 403 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 1980 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 413 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			child = make_token_node("<");
			tmp_node = (yyvsp[-1].node_var);
			child -> type = tmp_node -> type;
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			child = make_token_node(">");
			Add_Last(child, NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 1997 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 427 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Class;
			child = make_token_node("abstract");
			Add_Child(parent, child, NOT_NEED);
			child = make_token_node("class");
			Add_Last(child, NOT_NEED);
			tmp_idx = Class_type_Save((yyvsp[-7].s_var), class_type); 
			if(tmp_idx == -1)
			{
				printf("Error : Duplicated Class Type.\n");
				exit(1);
			}
			child = make_class_type_node(class_type[tmp_idx]);
			Add_Last(child, NOT_NEED);
			child = make_token_node("(");	
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-5].node_var), NOT_NEED);
			child = make_token_node(")");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-3].node_var), NOT_NEED);
			child = make_token_node("{");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			child = make_token_node("}");
			Add_Last(child, NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 2031 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 457 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Class;
			child = make_token_node("class");
			Add_Child(parent, child, NOT_NEED);
			tmp_idx = Class_type_Save((yyvsp[-7].s_var), class_type); 
			if(tmp_idx == -1)
			{
				printf("Error : Duplicated Class Type.\n");
				exit(1);
			}
			child = make_class_type_node(class_type[tmp_idx]);
			Add_Last(child, NOT_NEED);
			child = make_token_node("(");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-5].node_var), NOT_NEED);
			child = make_token_node(")");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-3].node_var), NOT_NEED);
			child = make_token_node("{");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			child = make_token_node("}");
			Add_Last(child, NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 2063 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 485 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Class;
			child = make_token_node("interface");
			Add_Child(parent, child, NOT_NEED);
			tmp_idx = Class_type_Save((yyvsp[-3].s_var), class_type); 
			if(tmp_idx == -1)
			{
				printf("Error : Duplicated Class Type.\n");
				exit(1);
			}
			child = make_class_type_node(class_type[tmp_idx]);
			Add_Last(child, NOT_NEED);
			child = make_token_node("{");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			child = make_token_node("}");
			Add_Last(child, NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 2089 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 508 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			child = make_token_node("final");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2104 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 520 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = tmp_node -> type;
			child = make_token_node("");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2118 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 531 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Classtype;
			child = make_token_node("override");
			Add_Child(parent, child, NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2131 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 540 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Classtype;
			parent = make_token_node("abstract");
			Add_Child(parent, child, NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2144 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 549 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Not_defined;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2156 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 559 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[-1].node_var), NOT_NEED);
			Add_Last((yyvsp[0].node_var), NEED);
		
			(yyval.node_var) = parent;
		}
#line 2170 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 569 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[-1].node_var), NOT_NEED);
			Add_Last((yyvsp[0].node_var), NEED);
		
			(yyval.node_var) = parent;
		}
#line 2184 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 580 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-1].node_var);
			tmp_type = tmp_node -> type;
			tmp_node = (yyvsp[0].node_var);
			if(tmp_type >= tmp_node -> type)
				tmp_node = (yyvsp[-1].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[-1].node_var), NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 2202 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 594 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-1].node_var);
			tmp_type = tmp_node -> type;
			tmp_node = (yyvsp[0].node_var);
			if(tmp_type >= tmp_node -> type)
				tmp_node = (yyvsp[-1].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[-1].node_var), NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 2220 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 608 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 2233 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 617 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 2245 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 625 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Not_defined;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 2257 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 635 "kotlin.y" /* yacc.c:1646  */
    {
				parent = make_nt_node();
				tmp_node = (yyvsp[0].node_var);
				parent -> type = tmp_node -> type;
				Add_Child(parent, (yyvsp[-1].node_var), NOT_NEED);
				Add_Last((yyvsp[0].node_var), NEED);				

				(yyval.node_var) = parent;
			}
#line 2271 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 646 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			child = make_token_node(":");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 2286 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 657 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Not_defined;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 2298 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 666 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-2].node_var);
			tmp_type = tmp_node -> type;
			tmp_node = (yyvsp[0].node_var);
			if(tmp_type >= tmp_node -> type)
				tmp_node = (yyvsp[-2].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node(",");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2318 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 682 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			tmp_idx = Find_class_type_index((yyvsp[-2].s_var), class_type);
			if(tmp_idx == -1)
			{
				printf("There is no such class\n");
				exit(1);
			}
			child = make_class_type_node(class_type[tmp_idx]);
			Add_Child(parent, child, NOT_NEED);
			child = make_token_node(",");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2341 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 701 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Class;
			tmp_idx = Find_class_type_index((yyvsp[0].s_var), class_type);
			child = make_class_type_node(class_type[tmp_idx]);
			Add_Child(parent, child, NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2355 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 711 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2368 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 721 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-2].node_var);
		tmp_type = tmp_node -> type;
		tmp_node = (yyvsp[0].node_var);
		if(tmp_type >= tmp_node -> type)
			tmp_node = (yyvsp[-2].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node(".");
		Add_Child(parent, child, NOT_NEED);
		tmp_idx = Fun_Save((yyvsp[-4].s_var), Unit, fun_name, fun_type);
		child = make_fun_node(fun_name[tmp_idx], fun_type[tmp_idx]);
		Add_Last(child, NOT_NEED);
		child = make_token_node("{");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-2].node_var), NOT_NEED);
		child = make_token_node("}");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2395 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 744 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Not_defined;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2407 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 753 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Not_defined;
		child = make_token_node("=");
		Add_Child(parent, child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2420 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 762 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Not_defined;
		child = make_token_node("+=");
		Add_Child(parent, child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2433 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 771 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Not_defined;
		child = make_token_node("-=");
		Add_Child(parent, child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2446 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 780 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Not_defined;
		child = make_token_node("*=");
		Add_Child(parent, child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2459 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 789 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Not_defined;
		child = make_token_node("/=");
		Add_Child(parent, child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2472 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 799 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = Unit;
		child = make_token_node("public static void");
		Add_Child(parent, child, NOT_NEED);
		child = make_fun_node("main", Unit);
		Add_Last(child, NOT_NEED);
		child = make_token_node("(");
		Add_Last(child, NOT_NEED);
		child = make_token_node("String[] args");
		Add_Last(child, NOT_NEED);
		child = make_token_node(")");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);
	
		(yyval.node_var) = parent;
	}
#line 2495 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 819 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-2].node_var);
		tmp_type = tmp_node -> type;
		tmp_node = (yyvsp[0].node_var);
		if(tmp_type >= tmp_node -> type)
			tmp_node = (yyvsp[-2].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
		child = make_token_node("+");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	  }
#line 2515 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 835 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-2].node_var);
		tmp_type = tmp_node -> type;
		tmp_node = (yyvsp[0].node_var);
		if(tmp_type >= tmp_node -> type)
			tmp_node = (yyvsp[-2].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
		child = make_token_node("-");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	  }
#line 2535 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 851 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
	
		(yyval.node_var) = parent;
	  }
#line 2548 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 861 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		tmp_node = (yyvsp[-2].node_var);
		tmp_type = tmp_node -> type;
		tmp_node = (yyvsp[0].node_var);
		if(tmp_type >= tmp_node -> type)
			tmp_node = (yyvsp[-2].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
		child = make_token_node("*");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
    	}
#line 2568 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 877 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		tmp_node = (yyvsp[-2].node_var);
		tmp_type = tmp_node -> type;
		tmp_node = (yyvsp[0].node_var);
		if(tmp_type >= tmp_node -> type)
			tmp_node = (yyvsp[-2].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
		child = make_token_node("/");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2588 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 893 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2601 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 903 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			child = make_token_node("+");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
	     	}
#line 2616 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 914 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			child = make_token_node("-");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2631 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 925 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2644 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 935 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_str = (yyvsp[0].s_var);
		int len = strlen(tmp_str);
		tmp_type = Int;
		for(int i = 0; i < len; i++)
		{
			if(tmp_str[i] =='.')
				tmp_type = Double;
		}	
		parent -> type = tmp_type;
		child = make_token_node((yyvsp[0].s_var));
		child -> type = tmp_type;
		Add_Child(parent, child, NOT_NEED);
		
		(yyval.node_var) = parent;
        }
#line 2666 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 953 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Long;
		child = make_token_node((yyvsp[0].s_var));
		child -> type = tmp_type;
		Add_Child(parent, child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2680 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 963 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		parent -> type = Not_defined;
		tmp_idx = Find_var_index((yyvsp[0].s_var), id_name);
		if(tmp_idx == -1)
			tmp_idx = Var_Save((yyvsp[0].s_var), 0, Not_defined, id_name, data, id_type);
		child = make_id_node(id_name[tmp_idx], id_type[tmp_idx], 0);
		child -> type = id_type[tmp_idx];
		Add_Child(parent, child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2697 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 976 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		tmp_idx = Var_Save((yyvsp[-2].s_var), 0, tmp_node -> type, id_name, data, id_type);
		child = make_id_node(id_name[tmp_idx], id_type[tmp_idx], 0);
		Add_Child(parent, child, NOT_NEED);
		child = make_token_node(".");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2715 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 990 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		tmp_idx = Var_Save((yyvsp[-2].s_var), 0, Not_defined, id_name, data, id_type);
		parent -> type = id_type[tmp_idx];
		printf("%s %d\n", (yyvsp[-2].s_var), id_type[tmp_idx]);
		child = make_id_node(id_name[tmp_idx], id_type[tmp_idx], 0);
		Add_Child(parent, child, NOT_NEED);
		child = make_token_node(".");
		Add_Last(child, NOT_NEED);
		tmp_idx = Var_Save((yyvsp[-2].s_var), 0, Not_defined, id_name, data, id_type);
		child = make_id_node(id_name[tmp_idx], id_type[tmp_idx], 0);
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2735 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1006 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		parent -> type = Int;
		tmp_idx = Find_var_index((yyvsp[-1].s_var), id_name);
		child = make_id_node(id_name[tmp_idx], Int, 0);
		Add_Child(parent, child, NOT_NEED);
		child = make_token_node("++");
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2751 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1018 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		parent -> type = Int;
		tmp_idx = Find_var_index((yyvsp[-1].s_var), id_name);
		child = make_id_node(id_name[tmp_idx], Int, 0);
		Add_Child(parent, child, NOT_NEED);
		child = make_token_node("--");
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2767 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1030 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		parent -> type = Int;
		child = make_token_node("++");
		Add_Child(parent, child, NOT_NEED);
		tmp_idx = Find_var_index((yyvsp[0].s_var), id_name);
		child = make_id_node(id_name[tmp_idx], Int, 0);
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2783 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1042 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		parent -> type = Int;
		child = make_token_node("--");
		Add_Child(parent, child, NOT_NEED);
		tmp_idx = Find_var_index((yyvsp[0].s_var), id_name);
		child = make_id_node(id_name[tmp_idx], Int, 0);
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2799 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1054 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("(");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[-1].node_var), NOT_NEED);
		child = make_token_node(")");
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2816 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1067 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2829 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1076 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		parent -> type = Int;
		child = make_token_node("null");
		child -> type = Int;
		Add_Child(parent, child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2843 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1087 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
		tmp_node = (yyvsp[-2].node_var);
		tmp_type = tmp_node -> type;
		tmp_node = (yyvsp[0].node_var);
		if(tmp_type >= tmp_node -> type)
			tmp_node = (yyvsp[-2].node_var);
		tmp_idx = Var_Save((yyvsp[-4].s_var), 0, tmp_node -> type, id_name, data, id_type);
		child = make_id_node(id_name[tmp_idx], tmp_node -> type, 0);
		parent -> type = tmp_node -> type;	
		Add_Last(child, NOT_NEED);
		child = make_token_node(",");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);
		
		(yyval.node_var) = parent;
     	}
#line 2866 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1106 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;	
		tmp_idx = Var_Save((yyvsp[-2].s_var), 0, tmp_node -> type, id_name, data, id_type);
		child = make_id_node(id_name[tmp_idx], id_type[tmp_idx], 0);
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 2882 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1118 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = 0;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 2894 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1127 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-2].node_var);
			tmp_type = tmp_node -> type;
			tmp_node = (yyvsp[0].node_var);
			if(tmp_type >= tmp_node -> type)
				tmp_node = (yyvsp[-2].node_var);
			parent -> type = tmp_node -> type;
			child = make_token_node("final");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node(",");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2916 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1145 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-2].node_var);
			tmp_type = tmp_node -> type;
			tmp_node = (yyvsp[0].node_var);
			if(tmp_type >= tmp_node -> type)
				tmp_node = (yyvsp[-2].node_var);
			parent -> type = tmp_node -> type;
			child = make_token_node("");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node(",");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2938 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1163 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			child = make_token_node("final");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2953 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1174 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			child = make_token_node("");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 2968 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1185 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Not_defined;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
			
			(yyval.node_var) = parent;
		}
#line 2980 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1194 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Int;
		child = make_token_node("int");
		child -> type = Int;
		Add_Child(parent, child, NOT_NEED);
		
		(yyval.node_var) = parent;
    	}
#line 2994 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1204 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Long;
		child = make_token_node("long");
		child -> type = Long;
		Add_Child(parent, child, NOT_NEED);
		
		(yyval.node_var) = parent;
    	}
#line 3008 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1214 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		parent -> type = Float;
		child = make_token_node("float");
		child -> type = Float;
		Add_Child(parent, child, NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 3022 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1224 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		parent -> type = Double;
		child = make_token_node("double");
		child -> type = Double;
		Add_Child(parent, child, NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 3036 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1234 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		parent -> type = String;
		child = make_token_node("String");
		child -> type = String;
		Add_Child(parent, child, NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 3050 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1244 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		parent -> type = Char;
		child = make_token_node("char");
		child -> type = Char;
		Add_Child(parent, child, NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 3064 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1254 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Bool;
		child = make_token_node("bool");
		child -> type = Bool;
		Add_Child(parent, child, NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 3078 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1265 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type + List;
		child = make_token_node("LIST");
		Add_Child(parent, child, NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 3092 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1276 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 3105 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1286 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node();
			parent -> type = Unit;
			child = make_token_node("void");
			child -> type = Unit;
			Add_Child(parent, child, NOT_NEED);
			child -> type = Unit;

			(yyval.node_var) = parent;
		}
#line 3120 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1297 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node();
			parent -> type = Any;
			child = make_token_node("Object");
			child -> type = Any;
			Add_Child(parent, child, NOT_NEED);
			child -> type = Any;

			(yyval.node_var) = parent;
		}
#line 3135 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1309 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		child = make_token_node("public static");
		Add_Child(parent, child, NOT_NEED);
		tmp_node = (yyvsp[-1].node_var);
		if(tmp_node -> type == Not_defined)
		{
			tmp_node = (yyvsp[-3].node_var);
		}
		child = make_token_node(ttos(tmp_node -> type));
		parent -> type = tmp_node -> type;
		Add_Last(child, NOT_NEED);
		tmp_idx = Fun_Save((yyvsp[-5].s_var), tmp_node -> type, fun_name, fun_type);
		child = make_fun_node(fun_name[tmp_idx], fun_type[tmp_idx]);
		Add_Last(child, NOT_NEED);
		child = make_token_node("(");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-3].node_var), NOT_NEED);
		child = make_token_node(")");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
      	}
#line 3164 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1335 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		tmp_node -> type += Question;
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[-1].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3178 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1345 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3191 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1354 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Not_defined;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
	
		(yyval.node_var) = parent;
	}
#line 3203 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1363 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("{");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[-3].node_var), NOT_NEED);
		child = make_token_node("return");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-1].node_var), NEED);
		child = make_token_node("}");
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3223 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1379 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Unit;
		child = make_token_node("{");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[-2].node_var), NOT_NEED);
		child = make_token_node("return");
		Add_Last(child, NEED);
		child = make_token_node("}");
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3241 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1393 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		parent -> type = Unit;
		child = make_token_node("{");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[-1].node_var), NOT_NEED);
		child = make_token_node("}");
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3257 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1405 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("{");
		Add_Child(parent, child, NOT_NEED);
		child = make_token_node("return");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NEED);
		child = make_token_node("}");
		Add_Last(child, NOT_NEED);
	
		(yyval.node_var) = parent;
	}
#line 3276 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1420 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("{");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);
		child = make_token_node("}");
		Add_Last(child, NOT_NEED);
	
		(yyval.node_var) = parent;
	}
#line 3293 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1433 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("{");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);
		child = make_token_node("}");
		Add_Last(child, NOT_NEED);
	
		(yyval.node_var) = parent;
	}
#line 3310 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1446 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Not_defined;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3322 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1455 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("while");
		Add_Child(parent, child, NOT_NEED);
		child = make_token_node("(");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-4].node_var), NOT_NEED);
		child = make_token_node(")");
		Add_Last(child, NOT_NEED);
		child = make_token_node("{");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-1].node_var), NOT_NEED);
		child = make_token_node("}");
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
	 }
#line 3346 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1476 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("for");
		Add_Child(parent, child, NOT_NEED);
		child = make_token_node("(");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-4].node_var), NOT_NEED);
		child = make_token_node(")");
		Add_Last(child, NOT_NEED);
		child = make_token_node("{");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-1].node_var), NOT_NEED);
		child = make_token_node("}");
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
      	 }
#line 3370 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1497 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
		
		(yyval.node_var) = parent;
	 }
#line 3383 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1507 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("case");
		Add_Child(parent ,child, NOT_NEED);
		Add_Last((yyvsp[-3].node_var), NOT_NEED);
		child = make_token_node(":");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-1].node_var), NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 3402 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1522 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("default");
		Add_Child(parent, child, NOT_NEED);
		child = make_token_node(":");
		Add_Last(child, NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3419 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1535 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("case");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[-3].node_var), NOT_NEED);
		child = make_token_node(":");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-1].node_var), NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3438 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1550 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Not_defined;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
	
		(yyval.node_var) = parent;
	}
#line 3450 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1560 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = String;
		child = make_token_node((yyvsp[0].s_var));
		Add_Child(parent, child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3463 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1569 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3476 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1579 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			child = make_token_node("instance of");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 3490 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1589 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			child = make_token_node("!");
			Add_Child(parent, child, NOT_NEED);
			child = make_token_node("instance of");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 3506 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1601 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			Add_Child(parent, (yyvsp[-3].node_var), NOT_NEED);
			child = make_token_node(":");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 3522 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1613 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			Add_Child(parent, (yyvsp[-4].node_var), NOT_NEED);
			child = make_token_node("!");
			Add_Last(child, NOT_NEED);
			child = make_token_node(":");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 3540 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1628 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("switch");
		Add_Child(parent, child, NOT_NEED);
		child = make_token_node("(");
		Add_Last(child, NOT_NEED);
		tmp_idx = Var_Save((yyvsp[-4].s_var), 0, Not_defined, id_name, data, id_type);
		child = make_id_node(id_name[tmp_idx], id_type[tmp_idx], 0);
		Add_Last(child, NOT_NEED);
		child = make_token_node(")");
		Add_Last(child, NOT_NEED);
		child = make_token_node("{");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-1].node_var), NOT_NEED);
		child = make_token_node("}");	
		Add_Last(child, NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 3566 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1650 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("switch");
		Add_Child(parent, child, NOT_NEED);
		child = make_token_node("{");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-1].node_var), NOT_NEED);
		child = make_token_node("}");	
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3585 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1666 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("if");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3600 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1677 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("if");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3615 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1689 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("(");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[-2].node_var), NOT_NEED);
		child = make_token_node(")");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3633 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1704 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("(");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[-2].node_var), NOT_NEED);
		child = make_token_node(")");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3651 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1718 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("(");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[-3].node_var), NOT_NEED);
		child = make_token_node(")");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-1].node_var), NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3670 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1734 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("else if");
		Add_Child(parent, child, NOT_NEED);
		child = make_token_node("(");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-3].node_var), NOT_NEED);
		child = make_token_node(")");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[-1].node_var), NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);
	
		(yyval.node_var) = parent;
	 }
#line 3691 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1751 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("else");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NOT_NEED);

		(yyval.node_var) = parent;
	 }
#line 3706 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1762 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Not_defined;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
	
		(yyval.node_var) = parent;
	 }
#line 3718 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1771 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[-1].node_var);
		parent -> type = tmp_node -> type;
		child = make_token_node("{");
		Add_Child(parent, child, NOT_NEED);
		Add_Last((yyvsp[-1].node_var), NOT_NEED);
		child = make_token_node("}");
		Add_Last(child, NOT_NEED);

		(yyval.node_var) = parent;
	 }
#line 3735 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1784 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
		
		(yyval.node_var) = parent;
	 }
#line 3748 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1794 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		tmp_node = (yyvsp[0].node_var);
		parent -> type = tmp_node -> type;
		Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
		child = make_token_node("return");
		Add_Last(child, NOT_NEED);
		Add_Last((yyvsp[0].node_var), NEED);
		
		(yyval.node_var) = parent;
	}
#line 3764 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1806 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Unit;
		Add_Child(parent, (yyvsp[-1].node_var), NOT_NEED);
		child = make_token_node("return");
		Add_Last(child, NEED);
		
		(yyval.node_var) = parent;
	}
#line 3778 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1816 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Unit;
		Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
		
		(yyval.node_var) = parent;
	}
#line 3790 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1825 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node();
		parent -> type = Unit;
		child = make_token_node((yyvsp[0].s_var));
		Add_Child(parent, child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3803 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1834 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node();
		parent -> type = Unit;
		child = make_token_node((yyvsp[0].s_var));
		Add_Child(parent, child, NOT_NEED);

		(yyval.node_var) = parent;
	}
#line 3816 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1844 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node();
			parent -> type = Bool;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 3828 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1852 "kotlin.y" /* yacc.c:1646  */
    {	
			parent = make_nt_node();
			parent -> type = Bool;
			Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node("==");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 3843 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1863 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node("<");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 3858 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1874 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node(">");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 3873 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1885 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node("<=");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 3888 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1896 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node(">=");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 3903 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1907 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node("&&");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 3918 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1918 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node("||");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 3933 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1929 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node("!=");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 3948 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1940 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 3961 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1949 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			tmp_node = (yyvsp[-1].node_var);
			tmp_str = ttos(tmp_node -> type - List);
			child = make_token_node(tmp_str);
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[-3].node_var), NOT_NEED);
			child = make_token_node(":");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 3981 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1965 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			tmp_node = (yyvsp[-1].node_var);
			tmp_str = ttos(tmp_node -> type - List);
			child = make_token_node(tmp_str);
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[-4].node_var), NOT_NEED);
			child = make_token_node("!");
			Add_Last(child, NOT_NEED);
			child = make_token_node(":");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4003 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1984 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node();
			parent -> type = Bool;
			tmp_idx = Var_Save((yyvsp[-2].s_var), 0, Not_defined, id_name, data, id_type);
			child = make_id_node(id_name[tmp_idx], id_type[tmp_idx], 0);
			Add_Child(parent, child, NOT_NEED);
			child = make_token_node("instance of");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
	     	}
#line 4020 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1997 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			tmp_idx = Var_Save((yyvsp[-3].s_var), 0, Not_defined, id_name, data, id_type);
			child = make_id_node(id_name[tmp_idx], id_type[tmp_idx], 0);
			Add_Child(parent, child, NOT_NEED);
			child = make_token_node("!");
			Add_Last(child, NOT_NEED);
			child = make_token_node("instance of");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4039 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2013 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			child = make_token_node(".");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
      		}
#line 4054 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2024 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Bool;
			child = make_token_node("downTo");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4069 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2035 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Unit;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 4081 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2044 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			child = make_token_node("step");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
	  	}
#line 4096 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2055 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Unit;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 4108 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2064 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-1].node_var);
			parent -> type = tmp_node -> type;
			child = make_token_node("else if");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4124 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2076 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			child = make_token_node("else");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4139 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2088 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_idx = Find_var_index((yyvsp[0].s_var), id_name);
			if(tmp_idx == -1)
			{
				tmp_idx = Var_Save((yyvsp[0].s_var), 0, Not_defined, id_name, data, id_type);
			}
			parent -> type = id_type[tmp_idx];
			child = make_id_node(id_name[tmp_idx], id_type[tmp_idx], 0);
			child -> type = id_type[tmp_idx];
			Add_Child(parent, child, NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4158 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2103 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			tmp_idx = Var_Save((yyvsp[-2].s_var), 0, tmp_node -> type, id_name, data, id_type);
			child = make_id_node(id_name[tmp_idx], tmp_node -> type, 0);
			Add_Child(parent, child, NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 4173 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2115 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-4].node_var);
			if(tmp_node -> type == 0)
			{
				tmp_node = (yyvsp[-2].node_var);
			}
			tmp_str = ttos(tmp_node -> type);
			parent -> type = tmp_node -> type;
			tmp_node = (yyvsp[-4].node_var);
			tmp_idx = Find_var_index(tmp_node -> child -> name, id_name);
			id_type[tmp_idx] = parent -> type;
			child = make_token_node(tmp_str);
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[-4].node_var), NOT_NEED);
			child = make_token_node("=");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node(",");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 4202 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2140 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4215 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2149 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-2].node_var);
			if(tmp_node -> type == 0)
				tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node(",");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 4233 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2163 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-2].node_var);
			if(tmp_node -> type == 0)
				tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			tmp_str = ttos(tmp_node -> type);
			tmp_node = (yyvsp[-2].node_var);
			tmp_idx = Find_var_index(tmp_node -> child -> name, id_name);
			id_type[tmp_idx] = parent -> type;
			child = make_token_node(tmp_str);
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node("=");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 4257 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2184 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-1].node_var);
			parent -> type = List + tmp_node -> type;
			child = make_token_node("Set.of");
			Add_Child(parent, child, NOT_NEED);
			child = make_token_node("(");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			child = make_token_node(")");
			Add_Last(child, NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4276 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2199 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-1].node_var);
			parent -> type = List + tmp_node -> type;
			child = make_token_node("List.of");
			Add_Child(parent, child, NOT_NEED);
			child = make_token_node("(");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			child = make_token_node(")");
			Add_Last(child, NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 4295 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2214 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = String;
			child = make_token_node((yyvsp[0].s_var));
			Add_Child(parent, child, NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4308 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2223 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4321 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2233 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = String;
			child = make_token_node((yyvsp[-2].s_var));
			Add_Child(parent, child, NOT_NEED);
			child = make_token_node(",");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
	    	}
#line 4337 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2245 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = String;
			child = make_token_node((yyvsp[0].s_var));
			Add_Child(parent, child, NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 4350 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2254 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-2].node_var);
			tmp_type = tmp_node -> type;
			tmp_node = (yyvsp[0].node_var);
			if(tmp_type >= tmp_node -> type);
				tmp_node = (yyvsp[-2].node_var);
			parent -> type = Double;
			Add_Child(parent, (yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node(",");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
	    	}
#line 4370 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2270 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4383 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2280 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			if(strcmp((yyvsp[-3].s_var), "println") == 0 || strcmp((yyvsp[-3].s_var), "print") == 0)
			{
			tmp_idx = Fun_Save("System.out.println", Not_defined, fun_name, fun_type);
			parent -> type = Not_defined;
			child = make_fun_node(fun_name[tmp_idx], Not_defined);
			}
			else
			{
				tmp_idx = Find_fun_index((yyvsp[-3].s_var), id_name);
				if(tmp_idx == -1)
				{
					tmp_idx = Find_class_type_index((yyvsp[-3].s_var), class_type);
					if(tmp_idx == -1)
					{
						tmp_idx = Fun_Save((yyvsp[-3].s_var), Not_defined, fun_name, fun_type);
						parent -> type = id_type[tmp_idx];
						child = make_fun_node(fun_name[tmp_idx], id_type[tmp_idx]);
					}
					else
					{
						child = make_class_type_node(class_type[tmp_idx]);
						parent -> type = Class;
					}
				}
				else
				{
					child = make_fun_node(fun_name[tmp_idx], fun_type[tmp_idx]);
					parent -> type = fun_type[tmp_idx];
				}
			}
			Add_Child(parent, child, NOT_NEED);
			child = make_token_node("(");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-1].node_var), NOT_NEED);
			child = make_token_node(")");
			Add_Last(child, NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4429 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2323 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-1].node_var);
			tmp_type = tmp_node -> type;
			tmp_node = (yyvsp[0].node_var);
			if(tmp_type >= tmp_node -> type)
				tmp_node = (yyvsp[-1].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, (yyvsp[-1].node_var), NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4447 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2337 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			if(String >= tmp_node -> type)
				parent -> type = String;
			else
				parent -> type = tmp_node -> type;
			child = make_token_node((yyvsp[-1].s_var));
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 4465 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2351 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-2].node_var);
			parent -> type = tmp_node -> type + List;
			child = make_token_node("List.of");
			Add_Child(parent, child, NOT_NEED);
			child = make_token_node("(");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node(")");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 4485 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2367 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-2].node_var);
			parent -> type = tmp_node -> type + List;
			child = make_token_node("Set.of");
			Add_Child(parent, child, NOT_NEED);
			child = make_token_node("(");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[-2].node_var), NOT_NEED);
			child = make_token_node(")");
			Add_Last(child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 4505 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2383 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[-1].node_var);
			tmp_type = tmp_node -> type;
			tmp_node = (yyvsp[0].node_var);
			if(tmp_type >= tmp_node -> type)
				tmp_node = (yyvsp[-1].node_var);
			parent -> type = tmp_node -> type;
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);

			(yyval.node_var) = parent;
		}
#line 4523 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 2397 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Not_defined;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
			
			(yyval.node_var) = parent;
		}
#line 4535 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 2406 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			tmp_node = (yyvsp[0].node_var);
			parent -> type = tmp_node -> type;
			child = make_token_node(",");
			Add_Child(parent, child, NOT_NEED);
			Add_Last((yyvsp[0].node_var), NOT_NEED);
		
			(yyval.node_var) = parent;
		}
#line 4550 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 2417 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node();
			parent -> type = Not_defined;
			Add_Child(parent, (yyvsp[0].node_var), NOT_NEED);
	
			(yyval.node_var) = parent;
		}
#line 4562 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 2427 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_token_node("");
		parent -> type = Not_defined;
		(yyval.node_var) = parent;
	}
#line 4572 "kotlin.tab.c" /* yacc.c:1646  */
    break;


#line 4576 "kotlin.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
                  yystos[yystate], yyvsp);
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 2433 "kotlin.y" /* yacc.c:1906  */



/* User code */

extern int line_num;

int yyerror(const char *s)
{
	return printf("Line : %d is error with %s\n", line_num, s);
}

int Check_Type_Not_Saved(double value)
{
	double * tmp = &value;
	if(*((int*)tmp) == value)
		return Int;
	else if(*((long*)tmp) == value)
		return Long;
	else if(*((char*)tmp) == value)
		return Char;
	else if(*((float*)tmp) == value)
		return Float;

	return Double;
}

int Check_Type_Saved(char * name, int kind)
{
	int i = 0;
	switch(kind)
	{
	//For id
	case 1:
		i = Find_var_index(name, id_name);
		return i; 
	//for function
	case 2:
		i = Find_fun_index(name, fun_name);
		return i;
	//for class
	case 3:
		i = Find_class_index(name, class_name);
	}
}

char * ttos(int type)
{
	char * tmp = (char*)calloc(10, sizeof(char));
	strcpy(tmp, "");
	switch(type)
	{
	case Int:
		strcpy(tmp, "int");
		return tmp;
	case Long:
		strcpy(tmp, "long");
		return tmp;
	case Float:
		strcpy(tmp, "float");
		return tmp;
	case Double:
		strcpy(tmp, "double");
		return tmp;
	case String:
		strcpy(tmp, "String");
		return tmp;
	case Char:
		strcpy(tmp, "char");
		return tmp;
	case Bool:
		strcpy(tmp, "bool");
		return tmp;
	case Unit:
		strcpy(tmp, "void");
		return tmp;
	case Any:
		strcpy(tmp, "Object");
		return tmp;
	case List + Int:
		strcpy(tmp, "List<int>");
		return tmp;
	case List + Long:
		strcpy(tmp, "List<long>");
		return tmp;
	case List + Float:
		strcpy(tmp, "List<float>");
		return tmp;
	case List + Double:
		strcpy(tmp, "List<double>");
		return tmp;
	case List + String:
		strcpy(tmp, "List<String>");
		return tmp;
	case List + Char:
		strcpy(tmp, "List<char>");
		return tmp;
	case List + Bool:
		strcpy(tmp, "List<Bool>");
		return tmp;
	case Question + Int:
		strcpy(tmp, "int");
		return tmp;
	case Question + Long:
		strcpy(tmp, "long");
		return tmp;
	case Question + Float:
		strcpy(tmp, "float");
		return tmp;
	case Question + Double:
		strcpy(tmp, "double");
		return tmp;
	case Question + String:
		strcpy(tmp, "String");
		return tmp;
	case Question + Char:
		strcpy(tmp, "char");
		return tmp;
	case Question + Bool:
		strcpy(tmp, "bool");
		return tmp;
	case Question + Any:
		strcpy(tmp, "Object");
		return tmp;
	default:
		strcpy(tmp, "default");
		return tmp;
	}
}
