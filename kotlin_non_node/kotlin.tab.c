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

extern int yylex(void);
extern void yyterminate();
extern int yyerror(const char *s);

char * var_name[1000] = { 0 };
char * fun_name[1000] = { 0 };
double data[1000] = { 0 };
//Type value - 0 : Not_defined 1 : INT, 2 : LONG, 3 : FLOAT, 4 : DOUBLE, 5 : STRING, 6 : CHAR, 7 : BOOL, const : +10
int var_type[100] = { 0 }; 
//Type value - 0 : Not_defined 1 : INT, 2 : LONG, 3 : FLOAT, 4 : DOUBLE, 5 : STRING, 6 : CHAR, 7 : BOOL, 8 : UNIT, 9 : ANY, const : +10, question : +20, class_fct : +100
int fun_type[100] = { 0 };
char * class_type[1000] = { 0 };
char * class_name[1000] = { 0 };
int var_idx = 0, fun_idx = 0, err = 0, tmp_blank, tmp_blank, tmp_idx;

int Check_Type_Saved(char * name);
int Check_Type_Not_Saved(double value);
void Print_Blank(double n);


#line 94 "kotlin.tab.c" /* yacc.c:339  */

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
#line 29 "kotlin.y" /* yacc.c:355  */
 double d_var; float f_var; int i_var; long l_var; char* s_var; char c_var; char** sp_var

#line 217 "kotlin.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "kotlin.tab.c" /* yacc.c:358  */

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
       0,   149,   149,   155,   161,   167,   174,   184,   190,   201,
     207,   213,   219,   225,   231,   237,   243,   250,   257,   267,
     273,   279,   285,   290,   297,   305,   313,   320,   327,   334,
     340,   346,   351,   357,   364,   371,   378,   384,   391,   399,
     405,   410,   417,   423,   429,   436,   443,   448,   454,   460,
     466,   472,   479,   487,   494,   501,   508,   515,   522,   529,
     535,   541,   548,   554,   560,   568,   576,   584,   592,   600,
     608,   616,   622,   628,   635,   642,   648,   653,   660,   667,
     673,   679,   684,   690,   697,   704,   711,   718,   725,   732,
     739,   746,   753,   761,   771,   778,   785,   790,   797,   803,
     809,   815,   821,   827,   832,   840,   848,   855,   862,   868,
     876,   881,   888,   895,   901,   907,   915,   923,   929,   936,
     942,   949,   961,   968,   977,   985,   991,   996,  1002,  1009,
    1016,  1022,  1029,  1036,  1044,  1050,  1061,  1072,  1083,  1094,
    1105,  1116,  1127,  1138,  1144,  1152,  1161,  1173,  1186,  1193,
    1200,  1205,  1211,  1216,  1223,  1230,  1236,  1243,  1259,  1269,
    1279,  1292,  1300,  1308,  1315,  1323,  1334,  1343,  1355,  1363,
    1370,  1376,  1382,  1389,  1394,  1400,  1406
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
#line 150 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("goal <- start\n");
	}
#line 1642 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 156 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("start <- IMPORT start\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1652 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 162 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("start <- PACK start\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1662 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 168 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("start <- eval\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1672 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 175 "kotlin.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].d_var) > (yyvsp[0].d_var))
			tmp_blank = (yyvsp[-1].d_var);
		else
			tmp_blank = (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("eval <- expr eval\n");
		(yyval.d_var) = tmp_blank + 1; 
    	}
#line 1686 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 185 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("eval <- expr\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1696 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 191 "kotlin.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].d_var) > (yyvsp[0].d_var))
			tmp_blank = (yyvsp[-1].d_var);
		else
			tmp_blank = (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("expr <- mainfun\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 1710 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 202 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- for_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1720 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 208 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- while_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1730 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 214 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- if_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1740 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 220 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- when_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1750 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 226 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- var_decl\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1760 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 232 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- val_decl\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1770 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 238 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- cal_sent\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1780 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 244 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var) + 1);
		printf("expr <- fun_stt\n");
		printf("\n\n");
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1791 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 251 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- comment\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
		printf("\n\n");
	}
#line 1802 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 258 "kotlin.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].d_var) > (yyvsp[0].d_var))
			tmp_blank = (yyvsp[-1].d_var);
		else
			tmp_blank = (yyvsp[0].d_var);	
		Print_Blank(tmp_blank);
		printf("expr <- ID assign cal_sent\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 1816 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 268 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("expr <- ID EQUAL STR\n");
		(yyval.d_var) = 1;
	}
#line 1826 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 274 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- ID lambda\n");
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1836 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 280 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- class_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1846 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 286 "kotlin.y" /* yacc.c:1646  */
    {
		/*empty*/
	}
#line 1854 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 291 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[-1].d_var));
			printf("generic <- GREATER type LESS\n");
			(yyval.d_var) = (yyvsp[-1].d_var);
		}
#line 1864 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 298 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-5].d_var) > (yyvsp[-3].d_var)) ? (yyvsp[-5].d_var) : (yyvsp[-3].d_var);
			tmp_blank = (tmp_blank > (yyvsp[-1].d_var)) ? tmp_blank : (yyvsp[-1].d_var);
			Print_Blank(tmp_blank);
			printf("class_stt <- ABST CLASS ID OPEN param CLOSE c_inheritance M_OPEN class_decl M_CLOSE\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 1876 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 306 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-5].d_var) > (yyvsp[-3].d_var)) ? (yyvsp[-5].d_var) : (yyvsp[-3].d_var);
			tmp_blank = (tmp_blank > (yyvsp[-1].d_var)) ? tmp_blank : (yyvsp[-1].d_var);
			Print_Blank(tmp_blank);
			printf("class_stt <- CLASS ID OPEN param CLOSE c_inheritance M_OPEN class_decl M_CLOSE\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 1888 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 314 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[-1].d_var));
			printf("class_stt <- INTER ID M_OPEN class_decl M_CLOSE\n");
			(yyval.d_var) = (yyvsp[-1].d_var) + 1;
		}
#line 1898 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 321 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("val_decl <- VAL id_decl_stt\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 1908 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 328 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("var_decl <- VAR id_decl_stt\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 1918 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 335 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank(0);
			printf("class_keyword <- OVER\n");
			(yyval.d_var) = 1;
		}
#line 1928 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 341 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank(0);
			printf("class_keyword <- ABST\n");
			(yyval.d_var) = 1;
		}
#line 1938 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 347 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 1946 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 352 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("class_id_decl <- class_keyword var_decl\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 1956 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 358 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("class_id_decl <- class_keyword val_decl\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 1966 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 365 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("class_decl <- class_id_decl class_decl\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 1977 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 372 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("class_decl <- class_method_decl class_decl\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 1988 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 379 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("class_decl <- class_id_decl\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 1998 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 385 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("class_decl <- class_method_decl\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2008 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 392 "kotlin.y" /* yacc.c:1646  */
    {
				tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
				Print_Blank(tmp_blank);
				printf("class_method_decl <- class_keyword fun_stt\n");
				(yyval.d_var) = tmp_blank + 1;
			}
#line 2019 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 400 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("c_inheritance <- COLUMN inheritance\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2029 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 406 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 2037 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 411 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[0].d_var) > (yyvsp[-2].d_var)) ? (yyvsp[0].d_var) : (yyvsp[-2].d_var);
			Print_Blank(tmp_blank);
			printf("inheritance <- fun_call COMMA inheritance\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 2048 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 418 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("inheritance <- ID COMMA inheritance\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2058 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 424 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank(0);
			printf("inheritance <- ID\n");
			(yyval.d_var) = 1;
		}
#line 2068 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 430 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("inheritance <- fun_call\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2078 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 437 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("lambda <- DOT ID M_OPEN cal_sent M_CLOSE lambda\n");
		(yyval.d_var) = tmp_blank;
	}
#line 2089 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 444 "kotlin.y" /* yacc.c:1646  */
    {
		/*empty*/
	}
#line 2097 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 449 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- EQUAL\n");
		(yyval.d_var) = 1;
	}
#line 2107 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 455 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- E_PLUS\n");
		(yyval.d_var) = 1;
	}
#line 2117 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 461 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- E_MINUS\n");
		(yyval.d_var) = 1;
	}
#line 2127 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 467 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- E_MULT\n");
		(yyval.d_var) = 1;
	}
#line 2137 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 473 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- E_DIV\n");
		(yyval.d_var) = 1;
	}
#line 2147 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 480 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("main_fun <- FUNC MAIN OPEN CLOSE fun_body\n");
		printf("\n\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2158 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 488 "kotlin.y" /* yacc.c:1646  */
    {	
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("cal_sent <- cal_sent PLUS term\n");
		(yyval.d_var) = tmp_blank + 1;
	  }
#line 2169 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 495 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("cal_sent <- cal_sent MINUS term\n");
		(yyval.d_var) = tmp_blank + 1;
	  }
#line 2180 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 502 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("cal_sent <- term\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	  }
#line 2190 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 509 "kotlin.y" /* yacc.c:1646  */
    { 
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("term <- term MULT signed_factor\n");
		(yyval.d_var) = tmp_blank + 1;
    	}
#line 2201 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 516 "kotlin.y" /* yacc.c:1646  */
    { 
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("term <- term DIV signed_factor\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 2212 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 523 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("term <- signed_factor\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2222 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 530 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("signed_factor <- PLUS factor\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
	     	}
#line 2232 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 536 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("signed_factor <- MINUS factor\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2242 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 542 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("signed_factor <- factor\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2252 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 549 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("factor <- NUMBER\n");
		(yyval.d_var) = 1;
        }
#line 2262 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 555 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("factor <- L_NUMBER\n");
		(yyval.d_var) = 1;
	}
#line 2272 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 561 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 2284 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 569 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("factor <- ID DOT fun_call\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2296 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 577 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- ID DOT ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 2308 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 585 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- ID INC\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 2320 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 593 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- ID DEC\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;	
	}
#line 2332 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 601 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- INC ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 2344 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 609 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- DEC ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 2356 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 617 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[-1].d_var));
		printf("factor <- OPEN cal_sent CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2366 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 623 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("factor <- fun_call\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2376 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 629 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- NULL\n");
		(yyval.d_var) = 1;
	}
#line 2386 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 636 "kotlin.y" /* yacc.c:1646  */
    { 
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var))? (yyvsp[-2].d_var) : (yyvsp[0].d_var); 
		Print_Blank(tmp_blank);
		printf("param <- ID COLUMN fun_type COMMA param\n");
		(yyval.d_var) = tmp_blank + 1;	
     	}
#line 2397 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 643 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("param <- ID COLUMN fun_type\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2407 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 649 "kotlin.y" /* yacc.c:1646  */
    {
		/*empty*/
	}
#line 2415 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 654 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("class_param <- VAR id_decl COMMA class_param\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 2426 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 661 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("class_param <- VAR id_decl COMMA class_param\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 2437 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 668 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("class_param <- VAL id_decl\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2447 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 674 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("class_param <- VAR id_decl\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2457 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 680 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 2465 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 685 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("type <- INT\n");
		(yyval.d_var) = 1;
    	}
#line 2475 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 691 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("type <- LONG\n");
		//$$ = 2;
		(yyval.d_var) = 1;
    	}
#line 2486 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 698 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- FLOAT\n");
		//$$ = 3;
		(yyval.d_var) = 1;
	}
#line 2497 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 705 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- DOUBLE\n");
		//$$ = 4;
		(yyval.d_var) = 1;
	}
#line 2508 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 712 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- STRING\n");
		//$$ = 5;
		(yyval.d_var) = 1;
	}
#line 2519 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 719 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- CHAR\n");
		//$$ = 6;
		(yyval.d_var) = 1;
	}
#line 2530 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 726 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("type <- BOOL\n");
		//$$ = 7;
		(yyval.d_var) = 1;
	}
#line 2541 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 733 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("type <- LIST generic\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2551 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 740 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("fun_type <- type\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2561 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 747 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank(0);
			printf("fun_type <- UNIT\n");
			//$$ = 7;
			(yyval.d_var) = 1;
		}
#line 2572 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 754 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank(0);
			printf("fun_type <- ANY\n");
			//$$ = 8;
			(yyval.d_var) = 1;
		}
#line 2583 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 762 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var))? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		tmp_blank = (tmp_blank > (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("fun_stt <- FUNC ID OPEN param CLOSE ret_type fun_body\n");
		printf("%s\n", (yyvsp[-5].s_var));
		(yyval.d_var) = tmp_blank + 1;
      	}
#line 2596 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 772 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("ret_type <- COLUMN type QUESTION\n");
		//$$ = $2;
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2607 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 779 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("ret_type <- COLUMN fun_type\n");
		//$$ = $2 + 20;
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 2618 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 786 "kotlin.y" /* yacc.c:1646  */
    {
		/*empty*/
	}
#line 2626 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 791 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		Print_Blank(tmp_blank);
		printf("fun_body <- M_OPEN eval RETURN cal_sent M_CLOSE\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 2637 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 798 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-2].d_var));
		printf("fun_body <- M_OPEN eval RETURN M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-2].d_var) + 1;
	}
#line 2647 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 804 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[-1].d_var));
		printf("fun_body <- M_OPEN eval M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2657 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 810 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("fun_body <- EQUAL cal_sent\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;	
	}
#line 2667 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 816 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("fun_body <- EQUAL if_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;	
	}
#line 2677 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 822 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("fun_body <- EQUAL when_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;	
	}
#line 2687 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 828 "kotlin.y" /* yacc.c:1646  */
    {
		//empty	
	}
#line 2695 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 833 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-4].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-1].d_var);
		Print_Blank(tmp_blank);
		printf("while_stt <- WHILE OPEN condition CLOSE M_OPEN loop_body M_CLOSE\n");
		(yyval.d_var) = tmp_blank + 1;
	 }
#line 2706 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 841 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-4].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-1].d_var);
		Print_Blank(tmp_blank);
		printf("for_stt <- FOR OPEN condition CLOSE M_OPEN loop_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-4].d_var) + 1;
      	 }
#line 2717 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 849 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("loop_body <- eval\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	 }
#line 2727 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 856 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		Print_Blank(tmp_blank);
		printf("when_body <- when_id ARROW when_id when_body\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 2738 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 863 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("when_body <- ELSE ARROW when_id\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2748 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 869 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		tmp_blank = (tmp_blank> (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("when_body <- when_condition ARROW cal_sent when_body\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 2760 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 877 "kotlin.y" /* yacc.c:1646  */
    {
		//empty
	}
#line 2768 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 882 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("when_id <- STR\n");
		printf("%s\n", (yyvsp[0].s_var));
		(yyval.d_var) = 1;
	}
#line 2779 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 889 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("when_id <- cal_sent\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2789 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 896 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("when_condition <- IS type\n");
			(yyval.d_var) = (yyvsp[0].d_var);
		}
#line 2799 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 902 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("when_condition <- NOT IS type\n");
			(yyval.d_var) = (yyvsp[0].d_var);
		}
#line 2809 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 908 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
			tmp_blank = (tmp_blank > (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("when_condition <- when_id IN range\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 2821 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 916 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-4].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-1].d_var);
			Print_Blank(tmp_blank);
			printf("when_condition <- when_id NOT IN cal_sent range\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 2832 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 924 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("when_stt <- WHEN OPEN ID CLOSE M_OPEN when_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2842 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 930 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("when_stt <- WHEN M_OPEN when_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2852 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 937 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("if_stt <- IF noelse\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2862 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 943 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("if_stt <- IF withelse\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2872 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 950 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("noelse <- OPEN condition CLOSE cf\n");
		/*if($2)
		{
			$$ = $4;
		}*/
		(yyval.d_var) = tmp_blank + 1;	
	}
#line 2887 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 962 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("withelse <- OPEN condition CLOSE cf\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 2898 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 969 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		tmp_blank = (tmp_blank > (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var); 
		Print_Blank(tmp_blank);
		printf("OPEN condition CLOSE cf else_part\n");
		(yyval.d_var) = tmp_blank + 1; 
	}
#line 2910 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 978 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		tmp_blank = (tmp_blank > (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("else_part <- ELSEIF OPEN condition CLOSE cf else_part\n");
		(yyval.d_var) = tmp_blank + 1;
	 }
#line 2922 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 986 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("else_part <- ELSE cf\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	 }
#line 2932 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 992 "kotlin.y" /* yacc.c:1646  */
    {
		//empty
	 }
#line 2940 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 997 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("cf <- M_OPEN cf_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	 }
#line 2950 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1003 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("cf <- cf_body\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	 }
#line 2960 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1010 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("cf_body <- eval RETURN cal_sent\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 2971 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1017 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("cf_body <- eval RETURN\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2981 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1023 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("cf_body <- M_OPEN eval M_CLOSE\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2991 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1030 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("com <- COMMENT\n");
		(yyval.d_var) = 1;
		printf("%s\n", (yyvsp[0].s_var));
	}
#line 3002 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1037 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("com <- COMMENT_LONG\n");
		(yyval.d_var) = 1;
		printf("%s\n", (yyvsp[0].s_var));
	}
#line 3013 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1045 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("condition <- is_condition\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;	
		}
#line 3023 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1051 "kotlin.y" /* yacc.c:1646  */
    {	
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);	
			Print_Blank(tmp_blank);
			printf("condition <- condition SAME condition\n");
			/*if($1 == $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3038 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1062 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("condition <- condition GREATER condition\n");
			/*if($1 < $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3053 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1073 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("condition <- condition LESS condition\n");
			/*if($1 > $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3068 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1084 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("condition <- condition E_GREATER condition\n");
			/*if($1 <= $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3083 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1095 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("condition <- condition E_LESS condition\n");
			/*if($1 >= $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_blank + 1;	
		}
#line 3098 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1106 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);	
			Print_Blank(tmp_blank);
			printf("condition <- condition AND condition\n");
			/*if($1 && $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3113 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1117 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("condition <- condition OR condition\n");
			/*if($1 || $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3128 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1128 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("condition <- condition NOT_SAME condition\n");
			/*if($1 != $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3143 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1139 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("condition <- cal_sent\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3153 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1145 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
			tmp_blank = (tmp_blank > (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("condition <- factor IN cal_sent range\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3165 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1153 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-4].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-1].d_var);
			tmp_blank = (tmp_blank > (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("condition <- factor NOT IN cal_sent range\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3177 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1162 "kotlin.y" /* yacc.c:1646  */
    { 
			printf("is_condition <- ID IS type\n");
			Print_Blank((yyvsp[0].d_var));
			//tmp_idx = Find_var_index($1, var_name);
			//tmp_data = Check_Type_Saved($1);
			//if(var_type[tmp_idx] == tmp_data)
			//	$$ = 1;
			//else
			//	$$ = 0;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
	     	}
#line 3193 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1174 "kotlin.y" /* yacc.c:1646  */
    {
			printf("is_condition <- ID NOT IS type\n");
			Print_Blank((yyvsp[0].d_var));
			//tmp_idx = Find_var_index($1, var_name);
			//tmp_data = Check_Type_Saved($1);
			//if(var_type[tmp_idx] != tmp_data)
			//	$$ = 1;
			//else
			//	$$ = 0;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3209 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1187 "kotlin.y" /* yacc.c:1646  */
    {
			printf("range <- DOUBLEDOT cal_sent step_count\n");
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			(yyval.d_var) = tmp_blank + 1;
      		}
#line 3220 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1194 "kotlin.y" /* yacc.c:1646  */
    {
			printf("range <- DOWNTO cal_sent step_count\n");
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3231 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1201 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 3239 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1206 "kotlin.y" /* yacc.c:1646  */
    { 
			printf("step_count <- STEP factor\n");
			Print_Blank((yyvsp[0].d_var));
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
	  	}
#line 3249 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1212 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 3257 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1217 "kotlin.y" /* yacc.c:1646  */
    {
			printf("withelse <- ELSEIF expr withelse\n");
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);	
			Print_Blank(tmp_blank);
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3268 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1224 "kotlin.y" /* yacc.c:1646  */
    {
			printf("withelse <- ELSE expr\n");
			Print_Blank((yyvsp[0].d_var));
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3278 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1231 "kotlin.y" /* yacc.c:1646  */
    {
			printf("id_decl <- ID\n");
			Print_Blank(0);
			(yyval.d_var) = 1;
		}
#line 3288 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1237 "kotlin.y" /* yacc.c:1646  */
    {
			printf("id_decl <- ID COLUMN type\n");
			Print_Blank((yyvsp[0].d_var));
			(yyval.d_var) = (yyvsp[0].d_var);
		}
#line 3298 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1244 "kotlin.y" /* yacc.c:1646  */
    {
			printf("id_decl_stt <- id_decl EQUAL decl_content COMMA id_decl_stt\n");
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			tmp_blank = (tmp_blank > (yyvsp[-4].d_var)) ? tmp_blank : (yyvsp[-4].d_var);
			Print_Blank(tmp_blank);
			//tmp_data = Check_Type_Not_Saved($3);
			//tmp_idx = Var_Save($1, $3, tmp_data, var_name, data, var_type);
			//if(tmp_idx == -1)
			//	printf("Error : ID is saved already!\n\n");
			//if(tmp_idx == var_idx + 1)
			//	var_idx = tmp_idx;
			//else
			//	printf("Error : Hole in array!\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3318 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1260 "kotlin.y" /* yacc.c:1646  */
    {
			printf("id_decl_stt <- id_decl\n");
			Print_Blank((yyvsp[0].d_var));
			//var_type[var_idx] = 0;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3332 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1270 "kotlin.y" /* yacc.c:1646  */
    {
			printf("id_decl_stt <- id_decl\n");
			Print_Blank((yyvsp[-2].d_var));
			//var_type[var_idx] = 0;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;
			(yyval.d_var) = (yyvsp[-2].d_var) + 1;
		}
#line 3346 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1280 "kotlin.y" /* yacc.c:1646  */
    {
			printf("id_decl_stt <- id_decl EQUAL decl_content\n");
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			//tmp_data = Check_Type_Not_Saved($3);
			//var_type[var_idx] = tmp_data;
			//var_name[var_idx] = $1;
			//data[var_idx] = $3;
			//var_idx++;
			(yyval.d_var) = tmp_blank + 1;	
		}
#line 3362 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1293 "kotlin.y" /* yacc.c:1646  */
    {
			printf("decl_content <- LISTOF OPEN list_content CLOSE\n");
			Print_Blank((yyvsp[-1].d_var));
			//double * tmp = (double*) &($3);
			//$$ = *tmp;
			(yyval.d_var) = (yyvsp[-1].d_var) + 1;	
		}
#line 3374 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1301 "kotlin.y" /* yacc.c:1646  */
    {
			printf("decl_content <- STR\n");
			Print_Blank(0);
			//tmp_idx = Find_var_index($1, var_name);
			//$$ = data[tmp_idx];
			(yyval.d_var) = 1;	
		}
#line 3386 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1309 "kotlin.y" /* yacc.c:1646  */
    {
			printf("decl_content <- condition\n");
			Print_Blank((yyvsp[0].d_var));
			(yyval.d_var) = (yyvsp[0].d_var);
		}
#line 3396 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1316 "kotlin.y" /* yacc.c:1646  */
    {
			printf("list_content <- STR COMMA list_content\n");
			Print_Blank((yyvsp[0].d_var));
			//*($3 + tmp_idx) = $1;
			//tmp_idx++;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
	    	}
#line 3408 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1324 "kotlin.y" /* yacc.c:1646  */
    {
			printf("list_content <- STR\n");
			Print_Blank(0);
			//char** tmp_str = (char**)calloc(100, sizeof(char*));
			//tmp_idx = 0;
			//tmp_str[tmp_idx] = $1;
			//$$ = tmp_str;
			//tmp_idx++;
			(yyval.d_var) = 1;	
		}
#line 3423 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1335 "kotlin.y" /* yacc.c:1646  */
    {
			printf("list_content <- cal_sent COMMA list_content\n");
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			//*($3 + tmp_idx) = $1;
			//tmp_idx++;
			(yyval.d_var) = tmp_blank + 1;
	    	}
#line 3436 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1344 "kotlin.y" /* yacc.c:1646  */
    {
			printf("list_content <- cal_sent\n");
			Print_Blank((yyvsp[0].d_var));
			//char** tmp_str = (char**)calloc(100, sizeof(char*));
			//tmp_idx = 0;
			//tmp_str[tmp_idx] = $1;
			//$$ = tmp_str;
			//tmp_idx++;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;	
		}
#line 3451 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1356 "kotlin.y" /* yacc.c:1646  */
    {
			printf("fun_call <- ID OPEN argument CLOSE\n");
			Print_Blank((yyvsp[-1].d_var));
			printf("%s\n", (yyvsp[-3].s_var));
			(yyval.d_var) = (yyvsp[-1].d_var) + 1;
		}
#line 3462 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1364 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("argument <- calc_sent mul_argument\n");
			(yyval.d_var) = tmp_blank;
		}
#line 3473 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1371 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("argument <- STR mul_argument\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3483 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1377 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			printf("argument <- LISTOF OPEN list_content CLOSE mul_argument\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3493 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1383 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("argument <- fun_call mul_argument");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3504 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1390 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 3512 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1395 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("mul_argument <- COMMA argument\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3522 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1401 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 3530 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1406 "kotlin.y" /* yacc.c:1646  */
    {}
#line 3536 "kotlin.tab.c" /* yacc.c:1646  */
    break;


#line 3540 "kotlin.tab.c" /* yacc.c:1646  */
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
#line 1407 "kotlin.y" /* yacc.c:1906  */



/* User code */
extern int line_num;

int yyerror(const char *s)
{
	return printf("Line : %d is error with %s\n", line_num, s);
}

int Check_Type_Saved(char * name)
{
	int idx = Find_var_index(name, var_name);
	return var_type[idx]; 
}

int Check_Type_Not_Saved(double value)
{
	return 1;
}

void Print_Blank(double n)
{
	for(int i = 0; i < n; i++)
	{
		printf(" ");
	}
}
