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

extern int yylex(void);
extern void yyterminate();
extern int yyerror(const char *s);

int Check_Type_Saved(char * name);
int Check_Type_Not_Saved(double value);

NODE * parent;
NODE * child;


#line 86 "kotlin.tab.c" /* yacc.c:339  */

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
    LISTOF = 278,
    LIST = 279,
    INT = 280,
    FLOAT = 281,
    LONG = 282,
    DOUBLE = 283,
    STRING = 284,
    CHAR = 285,
    BOOL = 286,
    ANY = 287,
    UNIT = 288,
    MAIN = 289,
    ID = 290,
    COMMENT = 291,
    COMMENT_LONG = 292,
    ABST = 293,
    CLASS = 294,
    OVER = 295,
    INTER = 296,
    M_OPEN = 297,
    M_CLOSE = 298,
    COMMA = 299,
    ARROW = 300,
    EQUAL = 301,
    E_PLUS = 302,
    E_MINUS = 303,
    E_MULT = 304,
    E_DIV = 305,
    OR = 306,
    AND = 307,
    B_OR = 308,
    B_XOR = 309,
    B_AND = 310,
    SAME = 311,
    NOT_SAME = 312,
    DOUBLEDOT = 313,
    E_LESS = 314,
    E_GREATER = 315,
    GREATER = 316,
    LESS = 317,
    L_SHIFT = 318,
    R_SHIFT = 319,
    PLUS = 320,
    MINUS = 321,
    MULT = 322,
    DIV = 323,
    INC = 324,
    DEC = 325,
    COLUMN = 326,
    DOT = 327,
    NOT = 328,
    QUESTION = 329,
    OPEN = 330,
    CLOSE = 331,
    B_OPEN = 332,
    B_CLOSE = 333,
    CALL = 334
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "kotlin.y" /* yacc.c:355  */
 struct parse_node* node_var; double d_var; float f_var; int i_var; long l_var; char* s_var; char c_var; char** sp_var

#line 209 "kotlin.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 226 "kotlin.tab.c" /* yacc.c:358  */

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
#define YYLAST   724

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

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
      75,    76,    77,    78,    79
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   142,   142,   150,   159,   168,   176,   184,   191,   200,
     207,   214,   221,   228,   235,   242,   249,   256,   263,   273,
     285,   294,   301,   309,   321,   344,   365,   381,   391,   401,
     409,   417,   425,   433,   442,   450,   458,   465,   473,   481,
     490,   498,   508,   519,   527,   535,   551,   559,   567,   575,
     583,   591,   600,   616,   626,   636,   644,   654,   664,   672,
     681,   690,   698,   706,   714,   722,   733,   745,   755,   765,
     775,   785,   796,   803,   812,   826,   837,   845,   857,   869,
     878,   887,   895,   904,   913,   922,   931,   940,   949,   958,
     968,   976,   985,   995,  1013,  1024,  1033,  1041,  1055,  1068,
    1079,  1088,  1097,  1106,  1114,  1133,  1152,  1160,  1171,  1182,
    1193,  1201,  1209,  1217,  1226,  1237,  1248,  1262,  1281,  1295,
    1304,  1314,  1327,  1339,  1353,  1368,  1377,  1385,  1396,  1404,
    1414,  1423,  1431,  1439,  1448,  1455,  1465,  1475,  1485,  1495,
    1505,  1515,  1525,  1535,  1542,  1553,  1567,  1578,  1592,  1602,
    1612,  1620,  1629,  1637,  1647,  1657,  1665,  1677,  1690,  1697,
    1707,  1718,  1731,  1739,  1747,  1758,  1767,  1777,  1785,  1799,
    1807,  1816,  1830,  1838,  1846,  1855,  1865
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "L_NUMBER", "NUMBER", "STR", "PACK",
  "FUNC", "VAL", "VAR", "IMPORT", "IF", "ELSEIF", "ELSE", "NUL", "RETURN",
  "FOR", "WHILE", "WHEN", "IS", "IN", "DOWNTO", "STEP", "LISTOF", "LIST",
  "INT", "FLOAT", "LONG", "DOUBLE", "STRING", "CHAR", "BOOL", "ANY",
  "UNIT", "MAIN", "ID", "COMMENT", "COMMENT_LONG", "ABST", "CLASS", "OVER",
  "INTER", "M_OPEN", "M_CLOSE", "COMMA", "ARROW", "EQUAL", "E_PLUS",
  "E_MINUS", "E_MULT", "E_DIV", "OR", "AND", "B_OR", "B_XOR", "B_AND",
  "SAME", "NOT_SAME", "DOUBLEDOT", "E_LESS", "E_GREATER", "GREATER",
  "LESS", "L_SHIFT", "R_SHIFT", "PLUS", "MINUS", "MULT", "DIV", "INC",
  "DEC", "COLUMN", "DOT", "NOT", "QUESTION", "OPEN", "CLOSE", "B_OPEN",
  "B_CLOSE", "CALL", "$accept", "goal", "start", "eval", "expr", "generic",
  "class_stt", "val_decl", "var_decl", "class_keyword", "class_id_decl",
  "class_decl", "class_method_decl", "c_inheritance", "inheritance",
  "lambda", "assign", "main_fun", "cal_sent", "term", "signed_factor",
  "factor", "param", "class_param", "type", "fun_type", "fun_stt",
  "ret_type", "fun_body", "while_stt", "for_stt", "loop_body", "when_body",
  "when_id", "when_condition", "when_stt", "if_stt", "noelse", "withelse",
  "else_part", "cf", "cf_body", "com", "condition", "is_condition",
  "range", "step_count", "id_decl", "id_decl_stt", "decl_content",
  "list_content", "fun_call", "argument", "mul_argument", "epsilone", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334
};
# endif

#define YYPACT_NINF -247

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-247)))

#define YYTABLE_NINF -38

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     322,  -247,  -247,   322,    83,    32,    32,   322,     3,  -247,
      24,    34,    -9,   212,  -247,  -247,    45,    70,    79,   153,
     153,    97,   110,   547,    63,  -247,  -247,   449,  -247,  -247,
    -247,   449,   -12,   157,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,    73,   100,   108,   116,  -247,
    -247,  -247,   490,   490,   560,  -247,  -247,   560,   560,   173,
     150,   184,  -247,  -247,  -247,  -247,  -247,  -247,   156,    20,
    -247,   547,  -247,   172,   136,   167,    89,  -247,  -247,  -247,
    -247,   -16,  -247,  -247,  -247,   547,   547,   547,   547,   137,
     183,   693,    32,   366,   186,     7,  -247,    28,   -12,    10,
     580,  -247,   592,   610,  -247,   170,   693,   216,   -12,   194,
      19,   199,  -247,   171,  -247,    -5,  -247,   207,   182,    -4,
     207,   191,  -247,   -12,   195,   222,   131,   234,  -247,   157,
     157,  -247,  -247,     2,   202,   204,  -247,   224,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,   213,   343,
     251,   560,  -247,   693,   277,   547,   279,   560,   560,   560,
     560,   560,   560,   560,   560,   408,   255,   266,   506,  -247,
     693,  -247,   547,   506,   289,   506,   268,   547,    20,  -247,
    -247,   531,  -247,  -247,  -247,   222,    32,    32,   238,  -247,
    -247,  -247,   196,   112,   274,   130,  -247,   244,   449,   478,
    -247,  -247,   679,   256,   693,  -247,   531,    32,   622,  -247,
     693,    81,   547,   291,   193,   134,   134,  -247,  -247,  -247,
    -247,   449,   307,   221,  -247,   449,   449,  -247,  -247,    81,
     173,   547,   173,   173,    22,  -247,   293,    14,   259,   265,
     300,   301,   275,  -247,  -247,  -247,  -247,  -247,  -247,    30,
     -12,  -247,  -247,  -247,  -247,  -247,   310,   679,     2,  -247,
     294,   286,  -247,   408,  -247,   547,   547,  -247,  -247,    81,
     321,   547,   290,   408,  -247,  -247,  -247,   323,   324,  -247,
    -247,    81,  -247,   325,   305,   531,   531,   207,   275,   222,
     222,   337,   336,  -247,   519,  -247,   183,   308,  -247,  -247,
    -247,  -247,   221,     9,     9,  -247,  -247,   -12,   560,  -247,
    -247,  -247,  -247,  -247,   344,  -247,  -247,  -247,  -247,   339,
    -247,  -247,    -3,  -247,   340,   131,  -247,    68,  -247,  -247,
     153,  -247,  -247,  -247,   640,   341,   131,   337,   337,   342,
    -247,  -247,   408,   347,  -247,  -247,  -247,   221,  -247,  -247
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     176,    63,    62,   176,     0,     0,     0,   176,     0,    73,
       0,     0,     0,    64,   132,   133,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     5,     7,    21,    14,
      13,   176,    15,    55,    58,    61,    16,    10,     9,    12,
      11,    17,    72,    22,     4,     0,     0,   155,   158,    27,
      28,     3,   176,   176,     0,   119,   120,     0,     0,   176,
       0,    47,    48,    49,    50,    51,    67,    68,     0,   176,
      20,     0,    46,     0,     0,     0,    64,    59,    60,    69,
      70,     0,     1,     6,     8,     0,     0,     0,     0,     0,
     176,     0,     0,     0,     0,     0,   154,    64,   143,    58,
       0,   134,     0,     0,   111,     0,     0,     0,   112,     0,
       0,     0,   110,     0,    19,    66,    65,   176,     0,   176,
      72,     0,   173,    18,     0,   176,   176,     0,    71,    53,
      54,    56,    57,   176,     0,     0,    76,     0,    82,    84,
      83,    85,    86,    87,    88,   156,   159,   162,     0,   163,
     160,     0,   153,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,     0,     0,     0,   113,
       0,   118,     0,     0,     0,     0,     0,     0,   176,   170,
     175,     0,   169,   172,   168,   176,     0,     0,     0,    81,
      30,    29,     0,   176,     0,   176,    31,    66,   176,     0,
      52,   103,     0,   176,     0,    89,     0,     0,     0,   146,
       0,   176,     0,   141,   140,   135,   142,   139,   138,   136,
     137,   176,   131,   121,   128,   176,   176,   108,   114,   176,
     176,     0,   176,   176,     0,   174,   165,   167,     0,     0,
      79,    80,   176,    33,    32,    38,    34,    26,    35,     0,
     100,   102,   101,    92,    91,    90,    75,     0,   176,    96,
       0,     0,   157,   176,   147,     0,     0,   144,   150,   176,
       0,   130,     0,   176,   123,   126,   106,     0,     0,   115,
     107,   176,   109,     0,   176,     0,     0,   176,   176,   176,
     176,     0,     0,    40,     0,    99,   176,    90,    95,    93,
      23,   161,   122,   176,   176,   145,   127,   129,     0,   125,
     105,   104,   116,   117,     0,    45,   164,   166,   171,     0,
      77,    78,    43,    39,    44,   176,    98,     0,    74,    94,
       0,   149,   152,   148,     0,     0,   176,     0,     0,     0,
      97,   151,   176,     0,    42,    41,    25,   176,    24,   124
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -247,  -247,    35,     1,   188,  -247,  -247,   201,   206,  -247,
    -247,  -182,  -247,    98,   -74,   122,  -247,  -247,   143,   180,
     -36,   -17,   111,  -159,   -94,   139,   218,  -247,   155,  -247,
    -247,   192,   -49,   -24,  -247,   228,   231,  -247,   326,    76,
    -246,   217,  -247,   -22,  -247,  -200,   129,   106,    -1,  -247,
    -192,   -59,   242,  -113,   -13
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,   222,    27,   205,    28,    29,    30,   192,
     193,   194,   195,   292,   323,    70,    71,    31,    32,    33,
      34,    35,   135,   188,   145,   256,    36,   258,   200,    37,
      38,   277,   109,   110,   111,    39,    40,    55,    56,   274,
     223,   224,    41,   100,   101,   267,   331,    48,    49,   150,
     238,    42,   121,   179,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,    26,    77,    78,    26,    50,   182,   183,    26,   116,
     120,   246,   169,   248,   261,    52,    53,   302,    99,    52,
      53,    99,    99,     1,     2,   117,   239,   309,    83,   279,
     155,   330,    84,    59,     9,   102,   103,   177,    44,   172,
     178,   337,    51,   118,   198,   294,   112,   153,   199,    85,
      86,   131,   132,    85,    86,    76,   122,    99,   286,   209,
     128,    85,    86,    82,   173,   284,    60,    47,   116,   305,
      69,   149,    69,   295,    85,    86,   228,   136,    54,    85,
      86,   312,   151,   156,    73,    19,    20,    85,    86,    21,
      22,   146,   174,   316,   317,    23,   347,    66,    67,    57,
     127,   154,   265,    69,   180,    74,   180,   180,   255,    58,
     260,   340,   189,   196,    75,    99,   264,    45,    46,   120,
     201,    99,    99,    99,    99,    99,    99,    99,    99,   208,
     320,   321,    79,    85,    86,   213,   214,   215,   216,   217,
     218,   219,   220,   339,   227,    80,    85,    86,    89,   230,
     190,   232,   191,   266,   343,   -36,     1,     2,    66,    67,
      92,   127,    93,   297,    69,   122,    81,     9,   190,   190,
     191,   191,   189,   -37,   318,    90,     1,     2,   104,    91,
     196,   280,   196,   282,   283,   113,   105,     9,    76,   114,
     259,   115,   106,   161,   162,   163,   164,    98,   268,   249,
      98,    98,   108,    94,     5,     6,   262,   124,    76,   126,
     275,   125,   119,   133,   123,   168,   268,   112,   134,   112,
     112,    46,    21,    22,    87,    88,   276,   276,    23,   293,
     186,   187,   324,   272,   273,   170,    98,   171,    19,    20,
      95,    96,    21,    22,   175,   201,   107,   176,    23,   159,
     160,   178,   161,   162,   163,   164,   268,   181,    61,    62,
      63,    64,    65,   344,   345,   129,   130,   184,   268,   197,
     185,    72,    99,   202,   180,   293,   189,   189,   324,   324,
     203,    66,    67,   136,    68,   204,   334,    69,   206,   275,
     332,   332,   240,   241,    98,   207,   210,   225,   211,   212,
      98,    98,    98,    98,    98,    98,    98,    98,   226,   231,
     233,   108,   196,   341,   242,   229,   108,   247,   108,    69,
     234,   119,   271,   196,   237,     1,     2,   257,     3,     4,
       5,     6,     7,     8,   275,   287,     9,   285,    10,    11,
      12,   288,   250,   158,   289,   290,   291,   159,   160,   237,
     161,   162,   163,   164,   296,   269,   300,    13,    14,    15,
      16,    17,   301,    18,   306,   308,   310,   311,   313,     1,
       2,   147,   322,   108,   281,   108,   108,   314,   325,   335,
       9,   336,   329,   177,   338,   346,   319,    19,    20,   148,
     348,    21,    22,   243,   157,   158,   298,    23,   244,   159,
     160,    97,   161,   162,   163,   164,   315,   328,   303,   304,
     245,     1,     2,   299,   307,     4,     5,     6,   278,     8,
     235,   152,     9,   349,    10,    11,    12,   251,   237,   237,
     252,    19,    20,   333,     0,    21,    22,   327,   270,     0,
       0,    23,     0,    13,    14,    15,    16,    17,     0,    18,
     221,    98,     1,     2,     0,     0,     4,     5,     6,     0,
       8,     0,     0,     9,     0,    10,    11,    12,     0,     0,
       0,     0,     0,    19,    20,     0,     0,    21,    22,     0,
       0,     1,     2,    23,    13,    14,    15,    16,    17,     8,
      18,     0,     9,     1,     2,     0,    12,    94,     5,     6,
       0,     8,     0,     0,     9,     0,    10,    11,    12,     1,
       2,   104,     0,    76,    19,    20,     0,     0,    21,    22,
       9,     0,     1,     2,    23,    13,    14,    15,    16,    17,
       0,    18,     0,     9,     1,     2,   236,     0,     0,     0,
       0,    76,     0,    19,    20,     9,     0,    21,    22,     0,
       1,     2,     0,    23,    76,    19,    20,     0,     0,    21,
      22,     9,   326,     1,     2,    23,    76,     0,     0,     0,
       0,    19,    20,     0,     9,    21,    22,     0,     0,     0,
       0,    23,    76,     0,    19,    20,     0,     0,    21,    22,
       0,     0,     0,     0,    23,    97,    19,    20,     0,     0,
      21,    22,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,    19,    20,     0,     0,    21,    22,     0,     0,
       0,     0,    23,     0,     0,    19,    20,     0,     0,    21,
      22,   157,   158,     0,     0,    23,   159,   160,     0,   161,
     162,   163,   164,   157,   158,     0,     0,     0,   159,   160,
       0,   161,   162,   163,   164,     0,   165,     0,     0,     0,
       0,   157,   158,     0,     0,     0,   159,   160,   166,   161,
     162,   163,   164,   157,   158,     0,     0,     0,   159,   160,
       0,   161,   162,   163,   164,     0,   167,     0,     0,     0,
       0,   157,   158,     0,     0,     0,   159,   160,   263,   161,
     162,   163,   164,   137,   138,   139,   140,   141,   142,   143,
     144,   253,   254,     0,     0,     0,   342,   137,   138,   139,
     140,   141,   142,   143,   144
};

static const yytype_int16 yycheck[] =
{
      13,     0,    19,    20,     3,     6,   119,   120,     7,    68,
      69,   193,   106,   195,   206,    12,    13,   263,    54,    12,
      13,    57,    58,     3,     4,     5,   185,   273,    27,   229,
      20,    22,    31,    42,    14,    57,    58,    42,     3,    20,
      44,    44,     7,    23,    42,    15,    59,    19,    46,    65,
      66,    87,    88,    65,    66,    35,    69,    93,    44,   153,
      76,    65,    66,     0,    45,    43,    75,    35,   127,   269,
      75,    93,    75,    43,    65,    66,   170,    90,    75,    65,
      66,   281,    75,    73,    39,    65,    66,    65,    66,    69,
      70,    92,    73,   285,   286,    75,   342,    69,    70,    75,
      72,    73,    21,    75,   117,    35,   119,   120,   202,    75,
     204,    43,   125,   126,    35,   151,   210,    34,    35,   178,
     133,   157,   158,   159,   160,   161,   162,   163,   164,   151,
     289,   290,    35,    65,    66,   157,   158,   159,   160,   161,
     162,   163,   164,   325,   168,    35,    65,    66,    75,   173,
      38,   175,    40,    72,   336,    43,     3,     4,    69,    70,
      44,    72,    46,   257,    75,   178,    23,    14,    38,    38,
      40,    40,   185,    43,   287,    75,     3,     4,     5,    71,
     193,   230,   195,   232,   233,    35,    13,    14,    35,     5,
     203,    35,    19,    59,    60,    61,    62,    54,   211,   198,
      57,    58,    59,     7,     8,     9,   207,    35,    35,    42,
     223,    75,    69,    76,    71,    45,   229,   230,    35,   232,
     233,    35,    69,    70,    67,    68,   225,   226,    75,   242,
       8,     9,   291,    12,    13,    19,    93,    43,    65,    66,
      52,    53,    69,    70,    45,   258,    73,    76,    75,    56,
      57,    44,    59,    60,    61,    62,   269,    75,    46,    47,
      48,    49,    50,   337,   338,    85,    86,    76,   281,    35,
      75,   284,   308,    71,   287,   288,   289,   290,   337,   338,
      76,    69,    70,   296,    72,    61,   308,    75,    75,   302,
     303,   304,   186,   187,   151,    44,    19,    42,   155,    20,
     157,   158,   159,   160,   161,   162,   163,   164,    42,    20,
      42,   168,   325,   330,    76,   172,   173,    43,   175,    75,
     177,   178,    15,   336,   181,     3,     4,    71,     6,     7,
       8,     9,    10,    11,   347,    76,    14,    44,    16,    17,
      18,    76,   199,    52,    44,    44,    71,    56,    57,   206,
      59,    60,    61,    62,    44,   212,    62,    35,    36,    37,
      38,    39,    76,    41,    43,    75,    43,    43,    43,     3,
       4,     5,    35,   230,   231,   232,   233,    72,    42,    35,
      14,    42,    74,    42,    44,    43,   288,    65,    66,    23,
      43,    69,    70,   192,    51,    52,   257,    75,   192,    56,
      57,    35,    59,    60,    61,    62,   284,   296,   265,   266,
     192,     3,     4,   258,   271,     7,     8,     9,   226,    11,
     178,    95,    14,   347,    16,    17,    18,   199,   285,   286,
     199,    65,    66,   304,    -1,    69,    70,   294,   221,    -1,
      -1,    75,    -1,    35,    36,    37,    38,    39,    -1,    41,
      42,   308,     3,     4,    -1,    -1,     7,     8,     9,    -1,
      11,    -1,    -1,    14,    -1,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    65,    66,    -1,    -1,    69,    70,    -1,
      -1,     3,     4,    75,    35,    36,    37,    38,    39,    11,
      41,    -1,    14,     3,     4,    -1,    18,     7,     8,     9,
      -1,    11,    -1,    -1,    14,    -1,    16,    17,    18,     3,
       4,     5,    -1,    35,    65,    66,    -1,    -1,    69,    70,
      14,    -1,     3,     4,    75,    35,    36,    37,    38,    39,
      -1,    41,    -1,    14,     3,     4,     5,    -1,    -1,    -1,
      -1,    35,    -1,    65,    66,    14,    -1,    69,    70,    -1,
       3,     4,    -1,    75,    35,    65,    66,    -1,    -1,    69,
      70,    14,    43,     3,     4,    75,    35,    -1,    -1,    -1,
      -1,    65,    66,    -1,    14,    69,    70,    -1,    -1,    -1,
      -1,    75,    35,    -1,    65,    66,    -1,    -1,    69,    70,
      -1,    -1,    -1,    -1,    75,    35,    65,    66,    -1,    -1,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    65,    66,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    65,    66,    -1,    -1,    69,
      70,    51,    52,    -1,    -1,    75,    56,    57,    -1,    59,
      60,    61,    62,    51,    52,    -1,    -1,    -1,    56,    57,
      -1,    59,    60,    61,    62,    -1,    76,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    56,    57,    76,    59,
      60,    61,    62,    51,    52,    -1,    -1,    -1,    56,    57,
      -1,    59,    60,    61,    62,    -1,    76,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    56,    57,    76,    59,
      60,    61,    62,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    76,    24,    25,    26,
      27,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,     8,     9,    10,    11,    14,
      16,    17,    18,    35,    36,    37,    38,    39,    41,    65,
      66,    69,    70,    75,    81,    82,    83,    84,    86,    87,
      88,    97,    98,    99,   100,   101,   106,   109,   110,   115,
     116,   122,   131,   134,    82,    34,    35,    35,   127,   128,
     128,    82,    12,    13,    75,   117,   118,    75,    75,    42,
      75,    46,    47,    48,    49,    50,    69,    70,    72,    75,
      95,    96,   134,    39,    35,    35,    35,   101,   101,    35,
      35,    98,     0,    83,    83,    65,    66,    67,    68,    75,
      75,    71,    44,    46,     7,    84,    84,    35,    98,   100,
     123,   124,   123,   123,     5,    13,    19,    73,    98,   112,
     113,   114,   134,    35,     5,    35,   131,     5,    23,    98,
     131,   132,   134,    98,    35,    75,    42,    72,    76,    99,
      99,   100,   100,    76,    35,   102,   134,    24,    25,    26,
      27,    28,    29,    30,    31,   104,   128,     5,    23,   123,
     129,    75,   118,    19,    73,    20,    73,    51,    52,    56,
      57,    59,    60,    61,    62,    76,    76,    76,    45,   104,
      19,    43,    20,    45,    73,    45,    76,    42,    44,   133,
     134,    75,   133,   133,    76,    75,     8,     9,   103,   134,
      38,    40,    89,    90,    91,    92,   134,    35,    42,    46,
     108,   134,    71,    76,    61,    85,    75,    44,   123,   104,
      19,    98,    20,   123,   123,   123,   123,   123,   123,   123,
     123,    42,    83,   120,   121,    42,    42,   113,   104,    98,
     113,    20,   113,    42,    98,   132,     5,    98,   130,   103,
     127,   127,    76,    87,    88,   106,    91,    43,    91,    83,
      98,   115,   116,    32,    33,   104,   105,    71,   107,   134,
     104,   130,   128,    76,   104,    21,    72,   125,   134,    98,
     121,    15,    12,    13,   119,   134,    83,   111,   111,   125,
     112,    98,   112,   112,    43,    44,    44,    76,    76,    44,
      44,    71,    93,   134,    15,    43,    44,   104,   105,   108,
      62,    76,   120,    98,    98,   125,    43,    98,    75,   120,
      43,    43,   125,    43,    72,    95,   130,   130,   133,    93,
     103,   103,    35,    94,   131,    42,    43,    98,   102,    74,
      22,   126,   134,   126,   123,    35,    42,    44,    44,    91,
      43,   101,    76,    91,    94,    94,    43,   120,    43,   119
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    82,    82,    82,    83,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    85,    86,    86,    86,    87,    88,    89,
      89,    89,    90,    90,    91,    91,    91,    91,    92,    93,
      93,    94,    94,    94,    94,    95,    95,    96,    96,    96,
      96,    96,    97,    98,    98,    98,    99,    99,    99,   100,
     100,   100,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   102,   102,   102,   103,   103,   103,
     103,   103,   104,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   106,   107,   107,   107,   108,   108,   108,
     108,   108,   108,   108,   109,   110,   111,   112,   112,   112,
     112,   113,   113,   114,   114,   114,   114,   115,   115,   116,
     116,   117,   118,   118,   119,   119,   119,   120,   120,   121,
     121,   121,   122,   122,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   124,   124,   125,   125,
     125,   126,   126,   118,   118,   127,   127,   128,   128,   128,
     128,   129,   129,   129,   130,   130,   130,   130,   131,   132,
     132,   132,   132,   132,   133,   133,   134
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     1,     3,    10,     9,     5,     2,     2,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     2,     2,
       1,     3,     3,     1,     1,     6,     1,     1,     1,     1,
       1,     1,     5,     3,     3,     1,     3,     3,     1,     2,
       2,     1,     1,     1,     1,     3,     3,     2,     2,     2,
       2,     3,     1,     1,     5,     3,     1,     4,     4,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     7,     3,     2,     1,     5,     4,     3,
       2,     2,     2,     1,     7,     7,     1,     4,     3,     4,
       1,     1,     1,     2,     3,     4,     5,     7,     4,     2,
       2,     4,     4,     5,     6,     2,     1,     3,     1,     3,
       2,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     4,     5,     3,     4,     3,     3,
       1,     2,     1,     3,     2,     1,     3,     5,     1,     3,
       3,     4,     1,     1,     3,     1,     3,     1,     4,     2,
       2,     5,     2,     1,     2,     1,     0
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
#line 143 "kotlin.y" /* yacc.c:1646  */
    {
		root = (NODE*)malloc(sizeof(NODE));
		root -> token_name = "goal";
		Add_Child(root, (yyvsp[0].node_var));
		Print_Tree(root, 0);
	}
#line 1636 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 151 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("start");
		child = make_token_node("IMPORT");
		Add_Child(parent, child);
		Add_Last((yyvsp[0].node_var));
		
		(yyval.node_var) = parent;
	}
#line 1649 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 160 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("start");
		child = make_token_node("PACK");
		Add_Child(parent, child);
		Add_Last((yyvsp[0].node_var));
		
		(yyval.node_var) = parent;
	}
#line 1662 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 169 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("start");
		Add_Child(parent, (yyvsp[0].node_var));
		
		(yyval.node_var) = parent; 
	}
#line 1673 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 177 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("eval");
		Add_Child(parent, (yyvsp[-1].node_var));
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
    	}
#line 1685 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 185 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("eval");
		Add_Child(parent, (yyvsp[0].node_var));
		
		(yyval.node_var) = parent;
	}
#line 1696 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 192 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("eval");
		Add_Child(parent, (yyvsp[-1].node_var));
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 1708 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 201 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("expr");
		Add_Child(parent, (yyvsp[0].node_var));
		
		(yyval.node_var) = parent; 
	}
#line 1719 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 208 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("expr");
		Add_Child(parent, (yyvsp[0].node_var));
	
		(yyval.node_var) = parent;
	}
#line 1730 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 215 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("expr");
		Add_Child(parent, (yyvsp[0].node_var));
		
		(yyval.node_var) = parent;
	}
#line 1741 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 222 "kotlin.y" /* yacc.c:1646  */
    {
		parent= make_nt_node("expr");
		Add_Child(parent, (yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 1752 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 229 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("expr");
		Add_Child(parent, (yyvsp[0].node_var));
	
		(yyval.node_var) = parent;
	}
#line 1763 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 236 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("expr");
		Add_Child(parent, (yyvsp[0].node_var));
		
		(yyval.node_var) = parent; 
	}
#line 1774 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 243 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("expr");
		Add_Child(parent, (yyvsp[0].node_var));
	
		(yyval.node_var) = parent; 
	}
#line 1785 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 250 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("expr");
		Add_Child(parent, (yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 1796 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 257 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("expr");
		Add_Child(parent, (yyvsp[0].node_var));
		
		(yyval.node_var) = parent;
	}
#line 1807 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 264 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("expr");
		child = make_token_node((yyvsp[-2].s_var));
		Add_Child(parent, child);
		Add_Last((yyvsp[-1].node_var));
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 1821 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 274 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("expr");
		child = make_token_node((yyvsp[-2].s_var));
		Add_Child(parent, child);
		child = make_token_node("EQUAL");
		Add_Last(child);
		child = make_token_node("STR");
		Add_Last(child);

		(yyval.node_var) = parent;
	}
#line 1837 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 286 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("expr");
		child = make_token_node((yyvsp[-1].s_var));
		Add_Child(parent, child);
		Add_Last((yyvsp[0].node_var));

		parent;
	}
#line 1850 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 295 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("expr");
		Add_Child(parent, (yyvsp[0].node_var));
		
		(yyval.node_var) = parent;
	}
#line 1861 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 302 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("expr");
		Add_Child(parent, (yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 1872 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 310 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("generic");
			child = make_token_node("GREATER");
			Add_Child(parent, child);
			Add_Last((yyvsp[-1].node_var));
			child = make_token_node("LESS");
			Add_Last(child);
	
			(yyval.node_var) = parent;
		}
#line 1887 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 322 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_stt");
			child = make_token_node("ABST");
			Add_Child(parent, child);
			child = make_token_node("CLASS");
			Add_Last(child);
			child = make_token_node("ID");
			Add_Last(child);
			child = make_token_node("OPEN");
			Add_Last(child);
			Add_Last((yyvsp[-5].node_var));
			child = make_token_node("CLOSE");
			Add_Last(child);
			Add_Last((yyvsp[-3].node_var));
			child = make_token_node("M_OPEN");
			Add_Last(child);
			Add_Last((yyvsp[-1].node_var));
			child = make_token_node("M_CLOSE");
			Add_Last(child);
	
			(yyval.node_var) = parent;
		}
#line 1914 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 345 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_stt");
			child = make_token_node("CLASS");
			Add_Child(parent, child);
			child = make_token_node("ID");
			Add_Last(child);
			child = make_token_node("OPEN");
			Add_Last(child);
			Add_Last((yyvsp[-5].node_var));
			child = make_token_node("CLOSE");
			Add_Last(child);
			Add_Last((yyvsp[-3].node_var));
			child = make_token_node("M_OPEN");
			Add_Last(child);
			Add_Last((yyvsp[-1].node_var));
			child = make_token_node("M_CLOSE");
			Add_Last(child);
	
			(yyval.node_var) = parent;
		}
#line 1939 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 366 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_stt");
			child = make_token_node("INTER");
			Add_Child(parent, child);
			child = make_token_node("ID");
			Add_Last(child);
			child = make_token_node("M_OPEN");
			Add_Last(child);
			Add_Last((yyvsp[-1].node_var));
			child = make_token_node("M_CLOSE");
			Add_Last(child);
	
			(yyval.node_var) = parent;
		}
#line 1958 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 382 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("val_decl");
			child = make_token_node("VAL");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 1971 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 392 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("var_decl");
			child = make_token_node("VAR");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 1984 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 402 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_keyword");
			child = make_token_node("OVER");
			Add_Child(parent, child);

			(yyval.node_var) = parent;
		}
#line 1996 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 410 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_keyword");
			parent = make_token_node("ABST");
			Add_Child(parent, child);

			(yyval.node_var) = parent;
		}
#line 2008 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 418 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_token_node("class_keyword");
			Add_Child(parent, (yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 2019 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 426 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_id_decl");
			Add_Child(parent, (yyvsp[-1].node_var));
			Add_Last((yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 2031 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 434 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_id_decl");
			Add_Child(parent, (yyvsp[-1].node_var));
			Add_Last((yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 2043 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 443 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_decl");
			Add_Child(parent, (yyvsp[-1].node_var));
			Add_Last((yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 2055 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 451 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_decl");
			Add_Child(parent, (yyvsp[-1].node_var));
			Add_Last((yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 2067 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 459 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_decl");
			Add_Child(parent, (yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 2078 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 466 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_decl");
			Add_Child(parent, (yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 2089 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 474 "kotlin.y" /* yacc.c:1646  */
    {
				parent = make_nt_node("class_method_decl");
				Add_Child(parent, (yyvsp[-1].node_var));
			
				(yyval.node_var) = parent;
			}
#line 2100 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 482 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("c_inheritance");
			child = make_token_node("COLUMN");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 2113 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 491 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("c_inheritance");
			Add_Child(parent, (yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 2124 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 499 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("inheritnace");
			Add_Child(parent, (yyvsp[-2].node_var));
			child = make_token_node("COMMA");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 2138 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 509 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("inheritance");
			child = make_token_node("ID");
			Add_Child(parent, child);
			child = make_token_node("COMMA");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 2153 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 520 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("inheritance");
			child = make_token_node("ID");
			Add_Child(parent, child);

			(yyval.node_var) = parent;
		}
#line 2165 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 528 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("inheritnace");
			Add_Child(parent, (yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 2176 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 536 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("lambda");
		child = make_token_node("DOT");
		Add_Child(parent, child);
		child = make_token_node("ID");
		Add_Last(child);
		child = make_token_node("M_OPEN");
		Add_Last(child);
		Add_Last((yyvsp[-2].node_var));
		child = make_token_node("M_CLOSE");
		Add_Last(child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 2196 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 552 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("lambda");
		Add_Child(parent, (yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 2207 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 560 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("assign");
		child = make_token_node("EQUAL");
		Add_Child(parent, child);

		(yyval.node_var) = parent;
	}
#line 2219 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 568 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("assign");
		child = make_token_node("E_PLUS");
		Add_Child(parent, child);

		(yyval.node_var) = parent;
	}
#line 2231 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 576 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("assign");
		child = make_token_node("E_MINUS");
		Add_Child(parent, child);

		(yyval.node_var) = parent;
	}
#line 2243 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 584 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("assign");
		child = make_token_node("E_MULT");
		Add_Child(parent, child);

		(yyval.node_var) = parent;
	}
#line 2255 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 592 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("assign");
		child = make_token_node("E_DIV");
		Add_Child(parent, child);

		(yyval.node_var) = parent;
	}
#line 2267 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 601 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("main_fun");
		child = make_token_node("FUNC");
		Add_Child(parent, child);
		child = make_token_node("MAIN");
		Add_Last(child);
		child = make_token_node("OPEN");
		Add_Last(child);
		child = make_token_node("CLOSE");
		Add_Last(child);
		Add_Last((yyvsp[0].node_var));
	
		(yyval.node_var) = parent;
	}
#line 2286 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 617 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("cal_sent");
		Add_Child(parent, (yyvsp[-2].node_var));
		child = make_token_node("PLUS");
		Add_Last(child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	  }
#line 2300 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 627 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("cal_sent");
		Add_Child(parent, (yyvsp[-2].node_var));
		child = make_token_node("MINUS");
		Add_Last(child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	  }
#line 2314 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 637 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("term");
		Add_Child(parent, (yyvsp[0].node_var));
	
		(yyval.node_var) = parent;
	  }
#line 2325 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 645 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("term");
		Add_Child(parent, (yyvsp[-2].node_var));
		child = make_token_node("MULT");
		Add_Last(child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
    	}
#line 2339 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 655 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("term");
		Add_Child(parent, (yyvsp[-2].node_var));
		child = make_token_node("DIV");
		Add_Last(child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 2353 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 665 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("term");
		Add_Child(parent, (yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 2364 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 673 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node("signed_factor");
			child = make_token_node("PLUS");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
	     	}
#line 2377 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 682 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node("signed_factor");
			child = make_token_node("MINUS");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 2390 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 691 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("signed_factor");
			Add_Child(parent, (yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 2401 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 699 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("factor");
		child = make_token_node("NUMBER");
		Add_Child(parent, child);
		
		(yyval.node_var) = parent;
        }
#line 2413 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 707 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("factor");
		child = make_token_node("L_NUMBER");
		Add_Child(parent, child);

		(yyval.node_var) = parent;
	}
#line 2425 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 715 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("factor");
		child = make_token_node("ID");
		Add_Child(parent, child);

		(yyval.node_var) = parent;
	}
#line 2437 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 723 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("factor");
		child = make_token_node("ID");
		Add_Child(parent, child);
		child = make_token_node("DOT");
		Add_Last(child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 2452 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 734 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("factor");
		child = make_token_node("ID");
		Add_Child(parent, child);
		child = make_token_node("DOT");
		Add_Last(child);
		child = make_token_node("ID");
		Add_Last(child);

		(yyval.node_var) = parent;
	}
#line 2468 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 746 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("factor");
		child = make_token_node("ID");
		Add_Child(parent, child);
		child = make_token_node("INC");
		Add_Last(child);

		(yyval.node_var) = parent;
	}
#line 2482 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 756 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("factor");
		child = make_token_node("ID");
		Add_Child(parent, child);
		child = make_token_node("DEC");
		Add_Last(child);

		(yyval.node_var) = parent;
	}
#line 2496 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 766 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("factor");
		child = make_token_node("INC");
		Add_Child(parent, child);
		child = make_token_node("ID");
		Add_Last(child);

		(yyval.node_var) = parent;
	}
#line 2510 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 776 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("factor");
		child = make_token_node("DEC");
		Add_Child(parent, child);
		child = make_token_node("ID");
		Add_Last(child);

		(yyval.node_var) = parent;
	}
#line 2524 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 786 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("factor");
		child = make_token_node("OPEN");
		Add_Child(parent, child);
		Add_Last((yyvsp[-1].node_var));
		child = make_token_node("CLOSE");
		Add_Last(child);

		(yyval.node_var) = parent;
	}
#line 2539 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 797 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("factor");
		Add_Child(parent, (yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 2550 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 804 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("factor");
		child = make_token_node("NULL");
		Add_Child(parent, child);

		(yyval.node_var) = parent;
	}
#line 2562 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 813 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("param");
		child = make_token_node("ID");
		Add_Child(parent, child);
		child = make_token_node("COLUMN");
		Add_Last(child);
		Add_Last((yyvsp[-2].node_var));
		child = make_token_node("COMMA");
		Add_Last(child);
		Add_Last((yyvsp[0].node_var));
		
		(yyval.node_var) = parent;
     	}
#line 2580 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 827 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("param");
		child = make_token_node("ID");
		Add_Child(parent, child);
		child = make_token_node("COLUMN");
		Add_Last(child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 2595 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 838 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("param");
		Add_Child(parent, (yyvsp[0].node_var));
		
		(yyval.node_var) = parent;
	}
#line 2606 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 846 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_param");
			child = make_token_node("VAL");
			Add_Child(parent, child);
			Add_Last((yyvsp[-2].node_var));
			child = make_token_node("COMMA");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 2622 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 858 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_param");
			child = make_token_node("VAR");
			Add_Child(parent, child);
			Add_Last((yyvsp[-2].node_var));
			child = make_token_node("COMMA");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 2638 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 870 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_param");
			child = make_token_node("VAL");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 2651 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 879 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_param");
			child = make_token_node("VAR");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 2664 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 888 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("class_param");
			Add_Child(parent, (yyvsp[0].node_var));
			
			(yyval.node_var) = parent;
		}
#line 2675 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 896 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("type");
		child = make_token_node("INT");
		child -> type = 1;
		Add_Child(parent, child);
		
		(yyval.node_var) = parent;
    	}
#line 2688 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 905 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("type");
		child = make_token_node("LONG");
		child -> type = 2;
		Add_Child(parent, child);
		
		(yyval.node_var) = parent;
    	}
#line 2701 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 914 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("type");
		child = make_token_node("FLOAT");
		child -> type = 3;
		Add_Child(parent, child);
		
		(yyval.node_var) = parent;
	}
#line 2714 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 923 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("type");
		child = make_token_node("DOUBLE");
		child -> type = 4;
		Add_Child(parent, child);
		
		(yyval.node_var) = parent;
	}
#line 2727 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 932 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("type");
		child = make_token_node("STRING");
		child -> type = 5;
		Add_Child(parent, child);
		
		(yyval.node_var) = parent;
	}
#line 2740 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 941 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("type");
		child = make_token_node("CHAR");
		child -> type = 6;
		Add_Child(parent, child);
		
		(yyval.node_var) = parent;
	}
#line 2753 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 950 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("type");
		child = make_token_node("BOOL");
		child -> type = 7;
		Add_Child(parent, child);
		
		(yyval.node_var) = parent;
	}
#line 2766 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 959 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("type");
		child = make_token_node("LIST");
		child -> type = 30;
		Add_Child(parent, child);
		
		(yyval.node_var) = parent;
	}
#line 2779 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 969 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("fun_type");
			Add_Child(parent, (yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 2790 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 977 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node("fun_type");
			child = make_token_node("UNIT");
			Add_Child(parent, child);
			child -> type = 8;

			(yyval.node_var) = parent;
		}
#line 2803 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 986 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node("fun_type");
			child = make_token_node("ANY");
			Add_Child(parent, child);
			child -> type = 9;

			(yyval.node_var) = parent;
		}
#line 2816 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 996 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("fun_stt");
		child = make_token_node("FUNC");
		Add_Child(parent, child);
		child = make_token_node("ID");
		Add_Last(child);
		child = make_token_node("OPEN");
		Add_Last(child);
		Add_Last((yyvsp[-3].node_var));
		child = make_token_node("CLOSE");
		Add_Last(child);
		Add_Last((yyvsp[-1].node_var));
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
      	}
#line 2837 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1014 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("ret_type");
		child = make_token_node("COLUMN");
		Add_Child(parent, child);
		Add_Last((yyvsp[-1].node_var));
		child = make_token_node("QUESTION");
		Add_Last(child);

		(yyval.node_var) = parent;
	}
#line 2852 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1025 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("ret_type");
		child = make_token_node("COLUMN");
		Add_Child(parent, child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 2865 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1034 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("ret_type");
		Add_Child(parent, (yyvsp[0].node_var));
	
		(yyval.node_var) = parent;
	}
#line 2876 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1042 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("fun_body");
		child = make_token_node("M_OPEN");
		Add_Child(parent, child);
		Add_Last((yyvsp[-3].node_var));
		child = make_token_node("RETURN");
		Add_Last(child);
		Add_Last((yyvsp[-1].node_var));
		child = make_token_node("M_CLOSE");
		Add_Last(child);

		(yyval.node_var) = parent;
	}
#line 2894 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1056 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("fun_body");
		child = make_token_node("M_OPEN");
		Add_Child(parent, child);
		Add_Last((yyvsp[-2].node_var));
		child = make_token_node("RETURN");
		Add_Last(child);
		child = make_token_node("M_CLOSE");
		Add_Last(child);

		(yyval.node_var) = parent;
	}
#line 2911 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1069 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("fun_body");
		child = make_token_node("M_OPEN");
		Add_Child(parent, child);
		Add_Last((yyvsp[-1].node_var));
		child = make_token_node("M_CLOSE");
		Add_Last(child);

		(yyval.node_var) = parent;
	}
#line 2926 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1080 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("fun_body");
		child = make_token_node("EQUAL");
		Add_Child(parent, child);
		Add_Last((yyvsp[0].node_var));
	
		(yyval.node_var) = parent;
	}
#line 2939 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1089 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("fun_body");
		child = make_token_node("EQUAL");
		Add_Child(parent, child);
		Add_Last((yyvsp[0].node_var));
	
		(yyval.node_var) = parent;
	}
#line 2952 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1098 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("fun_body");
		child = make_token_node("EQUAL");
		Add_Child(parent, child);
		Add_Last((yyvsp[0].node_var));
	
		(yyval.node_var) = parent;
	}
#line 2965 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1107 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("fun_body");
		Add_Child(parent, (yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 2976 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1115 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("while_stt");
		child = make_token_node("WHILE");
		Add_Child(parent, child);
		child = make_token_node("OPEN");
		Add_Last(child);
		Add_Last((yyvsp[-4].node_var));
		child = make_token_node("CLOSE");
		Add_Last(child);
		child = make_token_node("M_OPEN");
		Add_Last(child);
		Add_Last((yyvsp[-1].node_var));
		child = make_token_node("M_CLOSE");
		Add_Last(child);

		(yyval.node_var) = parent;
	 }
#line 2998 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1134 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("for_stt");
		child = make_token_node("FOR");
		Add_Child(parent, child);
		child = make_token_node("OPEN");
		Add_Last(child);
		Add_Last((yyvsp[-4].node_var));
		child = make_token_node("CLOSE");
		Add_Last(child);
		child = make_token_node("M_OPEN");
		Add_Last(child);
		Add_Last((yyvsp[-1].node_var));
		child = make_token_node("M_CLOSE");
		Add_Last(child);

		(yyval.node_var) = parent;
      	 }
#line 3020 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1153 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("loop_body");
		Add_Child(parent, (yyvsp[0].node_var));
		
		(yyval.node_var) = parent;
	 }
#line 3031 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1161 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("when_body");
		Add_Child(parent ,(yyvsp[-3].node_var));
		child = make_token_node("ARROW");
		Add_Last(child);
		Add_Last((yyvsp[-1].node_var));
		Add_Last((yyvsp[0].node_var));
		
		(yyval.node_var) = parent;
	}
#line 3046 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1172 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("when_body");
		child = make_token_node("ELSE");
		Add_Child(parent, child);
		child = make_token_node("ARROW");
		Add_Last(child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 3061 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1183 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("when_body");
		Add_Child(parent, (yyvsp[-3].node_var));
		child = make_token_node("ARROW");
		Add_Last(child);
		Add_Last((yyvsp[-1].node_var));
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 3076 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1194 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("when_body");
		Add_Child(parent, (yyvsp[0].node_var));
	
		(yyval.node_var) = parent;
	}
#line 3087 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1202 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("when_id");
		child = make_token_node("STR");
		Add_Child(parent, child);

		(yyval.node_var) = parent;
	}
#line 3099 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1210 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("when_id");
		Add_Child(parent, (yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 3110 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1218 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("when_condition");
			child = make_token_node("IS");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3123 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1227 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("when_condition");
			child = make_token_node("NOT");
			Add_Child(parent, child);
			child = make_token_node("IS");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3138 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1238 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("when_condition");
			Add_Child(parent, (yyvsp[-3].node_var));
			child = make_token_node("IN");
			Add_Last(child);
			Add_Last((yyvsp[-1].node_var));
			Add_Last((yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 3153 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1249 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("when_condition");
			Add_Child(parent, (yyvsp[-4].node_var));
			child = make_token_node("NOT");
			Add_Last(child);
			child = make_token_node("IN");
			Add_Last(child);
			Add_Last((yyvsp[-1].node_var));
			Add_Last((yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 3170 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1263 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("when_stt");
		child = make_token_node("WHEN");
		Add_Child(parent, child);
		child = make_token_node("OPEN");
		Add_Last(child);
		child = make_token_node("ID");
		Add_Last(child);
		child = make_token_node("CLOSE");
		Add_Last(child);
		child = make_token_node("M_OPEN");
		Add_Last(child);
		Add_Last((yyvsp[-1].node_var));
		child = make_token_node("M_CLOSE");	
		Add_Last(child);
		
		(yyval.node_var) = parent;
	}
#line 3193 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1282 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("when_stt");
		child = make_token_node("WHEN");
		Add_Child(parent, child);
		child = make_token_node("M_OPEN");
		Add_Last(child);
		Add_Last((yyvsp[-1].node_var));
		child = make_token_node("M_CLOSE");	
		Add_Last(child);

		(yyval.node_var) = parent;
	}
#line 3210 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1296 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("if_stt");
		child = make_token_node("IF");
		Add_Child(parent, child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 3223 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1305 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("if_stt");
		child = make_token_node("IF");
		Add_Child(parent, child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 3236 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1315 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("noelse");
		child = make_token_node("OPEN");
		Add_Child(parent, child);
		Add_Last((yyvsp[-2].node_var));
		child = make_token_node("CLOSE");
		Add_Last(child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 3252 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1328 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("withelse");
		child = make_token_node("OPEN");
		Add_Child(parent, child);
		Add_Last((yyvsp[-2].node_var));
		child = make_token_node("CLOSE");
		Add_Last(child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 3268 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1340 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("withelse");
		child = make_token_node("OPEN");
		Add_Child(parent, child);
		Add_Last((yyvsp[-3].node_var));
		child = make_token_node("CLOSE");
		Add_Last(child);
		Add_Last((yyvsp[-1].node_var));
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	}
#line 3285 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1354 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("else_part");
		child = make_token_node("ELSEIF");
		Add_Child(parent, child);
		child = make_token_node("OPEN");
		Add_Last(child);
		Add_Last((yyvsp[-3].node_var));
		child = make_token_node("CLOSE");
		Add_Last(child);
		Add_Last((yyvsp[-1].node_var));
		Add_Last((yyvsp[0].node_var));
	
		(yyval.node_var) = parent;
	 }
#line 3304 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1369 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("else_part");
		child = make_token_node("ELSE");
		Add_Child(parent, child);
		Add_Last((yyvsp[0].node_var));

		(yyval.node_var) = parent;
	 }
#line 3317 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1378 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("else_part");
		Add_Child(parent, (yyvsp[0].node_var));
	
		(yyval.node_var) = parent;
	 }
#line 3328 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1386 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("cf");
		child = make_token_node("M_OPEN");
		Add_Child(parent, child);
		Add_Last((yyvsp[-1].node_var));
		child = make_token_node("M_CLOSE");
		Add_Last(child);

		(yyval.node_var) = parent;
	 }
#line 3343 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1397 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("cf");
		Add_Child(parent, (yyvsp[0].node_var));
		
		(yyval.node_var) = parent;
	 }
#line 3354 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1405 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("cf_body");
		Add_Child(parent, (yyvsp[-2].node_var));
		child = make_token_node("RETURN");
		Add_Last(child);
		Add_Last((yyvsp[0].node_var));
		
		(yyval.node_var) = parent;
	}
#line 3368 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1415 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("cf_body");
		Add_Child(parent, (yyvsp[-1].node_var));
		child = make_token_node("RETURN");
		Add_Last(child);
		
		(yyval.node_var) = parent;
	}
#line 3381 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1424 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("cf_body");
		Add_Child(parent, (yyvsp[0].node_var));
		
		(yyval.node_var) = parent;
	}
#line 3392 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1432 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_nt_node("com");
		child = make_token_node("COMMENT");
		Add_Child(parent, child);

		(yyval.node_var) = parent;
	}
#line 3404 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1440 "kotlin.y" /* yacc.c:1646  */
    { 
		parent = make_nt_node("com");
		child = make_token_node("COMMENT_LONG");
		Add_Child(parent, child);

		(yyval.node_var) = parent;
	}
#line 3416 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1449 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node("condition");
			Add_Child(parent, (yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 3427 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1456 "kotlin.y" /* yacc.c:1646  */
    {	
			parent = make_nt_node("condition");
			Add_Child(parent, (yyvsp[-2].node_var));
			child = make_token_node("SAME");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3441 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1466 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("condition");
			Add_Child(parent, (yyvsp[-2].node_var));
			child = make_token_node("GREATER");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3455 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1476 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("condition");
			Add_Child(parent, (yyvsp[-2].node_var));
			child = make_token_node("LESS");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3469 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1486 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("condition");
			Add_Child(parent, (yyvsp[-2].node_var));
			child = make_token_node("E_GREATER");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3483 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1496 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("condition");
			Add_Child(parent, (yyvsp[-2].node_var));
			child = make_token_node("E_LESS");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3497 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1506 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("condition");
			Add_Child(parent, (yyvsp[-2].node_var));
			child = make_token_node("AND");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3511 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1516 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("condition");
			Add_Child(parent, (yyvsp[-2].node_var));
			child = make_token_node("OR");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3525 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1526 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("condition");
			Add_Child(parent, (yyvsp[-2].node_var));
			child = make_token_node("NOT_SAME");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3539 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1536 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node("condition");
			Add_Child(parent, (yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3550 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1543 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("condition");
			Add_Child(parent, (yyvsp[-3].node_var));
			child = make_token_node("IN");
			Add_Last(child);
			Add_Last((yyvsp[-1].node_var));
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3565 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1554 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("condition");
			Add_Child(parent, (yyvsp[-4].node_var));
			child = make_token_node("NOT");
			Add_Last(child);
			child = make_token_node("IN");
			Add_Last(child);
			Add_Last((yyvsp[-1].node_var));
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3582 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1568 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node("is_condition");
			child = make_token_node("ID");
			Add_Child(parent, child);
			child = make_token_node("IS");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
	     	}
#line 3597 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1579 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("is_condition");
			child = make_token_node("ID");
			Add_Child(parent, child);
			child = make_token_node("NOT");
			Add_Last(child);
			child = make_token_node("IS");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3614 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1593 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("range");
			child = make_token_node("DOT");
			Add_Child(parent, child);
			Add_Last((yyvsp[-1].node_var));
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
      		}
#line 3628 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1603 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("range");
			child = make_token_node("DOWNTO");
			Add_Child(parent, child);
			Add_Last((yyvsp[-1].node_var));
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3642 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1613 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("range");
			Add_Child(parent, (yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3653 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1621 "kotlin.y" /* yacc.c:1646  */
    { 
			parent = make_nt_node("step_count");
			child = make_token_node("STEP");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
	  	}
#line 3666 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1630 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("step_count");
			Add_Child(parent, (yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3677 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1638 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("withelse");
			child = make_token_node("ELSEIF");
			Add_Child(parent, child);
			Add_Last((yyvsp[-1].node_var));
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3691 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1648 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("withelse");
			child = make_token_node("ELSE");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3704 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1658 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("id_decl");
			child = make_token_node("ID");
			Add_Child(parent, child);

			(yyval.node_var) = parent;
		}
#line 3716 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1666 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("id_decl");
			child = make_token_node("ID");
			Add_Child(parent, child);
			child = make_token_node("COLUMN");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 3731 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1678 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("id_decl_stt");
			Add_Child(parent, (yyvsp[-4].node_var));
			child = make_token_node("EQUAL");
			Add_Last(child);
			Add_Last((yyvsp[-2].node_var));
			child = make_token_node("COMMA");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 3748 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1691 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("id_decl_stt");
			Add_Child(parent, (yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3759 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1698 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("id_decl_stt");
			Add_Child(parent, (yyvsp[-2].node_var));
			child = make_token_node("COMMA");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 3773 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1708 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("id_decl_stt");
			Add_Child(parent, (yyvsp[-2].node_var));
			child = make_token_node("EQUAL");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 3787 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1719 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("decl_content");
			child = make_token_node("LISTOF");
			Add_Child(parent, child);
			child = make_token_node("OPEN");
			Add_Last(child);
			Add_Last((yyvsp[-1].node_var));
			child = make_token_node("CLOSE");
			Add_Last(child);
		
			(yyval.node_var) = parent;
		}
#line 3804 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1732 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("decl_content");
			child = make_token_node("STR");
			Add_Child(parent, child);

			(yyval.node_var) = parent;
		}
#line 3816 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1740 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("decl_content");
			Add_Child(parent, (yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3827 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1748 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("list_content");
			child = make_token_node("STR");
			Add_Child(parent, child);
			child = make_token_node("COMMA");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
	    	}
#line 3842 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1759 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("list_content");
			child = make_token_node("STR");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3855 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1768 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("list_content");
			Add_Child(parent, (yyvsp[-2].node_var));
			child = make_token_node("COMMA");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
	    	}
#line 3869 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1778 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("list_content");
			Add_Child(parent, (yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3880 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1786 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("fun_call");
			child = make_token_node("ID");
			Add_Child(parent, child);
			child = make_token_node("OPEN");
			Add_Last(child);
			Add_Last((yyvsp[-1].node_var));
			child = make_token_node("CLOSE");
			Add_Last(child);

			(yyval.node_var) = parent;
		}
#line 3897 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1800 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("argument");
			Add_Child(parent, (yyvsp[-1].node_var));
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3909 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1808 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("argument");
			child = make_token_node("STR");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3922 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1817 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("argument");
			child = make_token_node("LISTOF");
			Add_Child(parent, child);
			child = make_token_node("OPEN");
			Add_Last(child);
			Add_Last((yyvsp[-2].node_var));
			child = make_token_node("CLOSE");
			Add_Last(child);
			Add_Last((yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3940 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1831 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("argument");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));

			(yyval.node_var) = parent;
		}
#line 3952 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1839 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("argument");
			Add_Child(parent, (yyvsp[0].node_var));
			
			(yyval.node_var) = parent;
		}
#line 3963 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1847 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("mul_argument");
			child = make_token_node("COMMA");
			Add_Child(parent, child);
			Add_Last((yyvsp[0].node_var));
		
			(yyval.node_var) = parent;
		}
#line 3976 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1856 "kotlin.y" /* yacc.c:1646  */
    {
			parent = make_nt_node("mul_argument");
			Add_Child(parent, (yyvsp[0].node_var));
	
			(yyval.node_var) = parent;
		}
#line 3987 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1865 "kotlin.y" /* yacc.c:1646  */
    {
		parent = make_token_node("epsilone");
		(yyval.node_var) = parent;
	}
#line 3996 "kotlin.tab.c" /* yacc.c:1646  */
    break;


#line 4000 "kotlin.tab.c" /* yacc.c:1646  */
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
#line 1870 "kotlin.y" /* yacc.c:1906  */



/* User code */

extern int line_num;

int yyerror(const char *s)
{
	return printf("Line : %d is error with %s\n", line_num, s);
}

int Check_Type_Not_Saved(double value)
{
	return 1;
}

