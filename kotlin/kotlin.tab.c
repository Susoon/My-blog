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
    FILE_SEP = 261,
    PACK = 262,
    FUNC = 263,
    VAL = 264,
    VAR = 265,
    IMPORT = 266,
    IF = 267,
    ELSEIF = 268,
    ELSE = 269,
    NUL = 270,
    RETURN = 271,
    FOR = 272,
    WHILE = 273,
    WHEN = 274,
    IS = 275,
    IN = 276,
    DOWNTO = 277,
    STEP = 278,
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
#line 29 "kotlin.y" /* yacc.c:355  */
 double d_var; float f_var; int i_var; long l_var; char* s_var; char c_var; char** sp_var

#line 218 "kotlin.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 235 "kotlin.tab.c" /* yacc.c:358  */

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
#define YYLAST   726

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
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
       0,   149,   149,   155,   161,   167,   174,   184,   190,   201,
     207,   213,   219,   225,   231,   237,   243,   250,   257,   267,
     273,   279,   285,   290,   297,   305,   313,   320,   327,   334,
     341,   348,   355,   362,   368,   375,   382,   390,   395,   401,
     407,   414,   421,   427,   434,   440,   446,   451,   458,   463,
     469,   475,   481,   487,   494,   502,   509,   516,   523,   530,
     537,   544,   550,   556,   563,   569,   575,   583,   591,   599,
     607,   615,   623,   631,   637,   643,   650,   657,   663,   670,
     676,   681,   687,   694,   701,   708,   715,   722,   729,   736,
     743,   750,   758,   768,   775,   782,   787,   794,   800,   806,
     812,   818,   824,   829,   837,   845,   852,   859,   865,   873,
     878,   885,   892,   898,   904,   912,   920,   926,   933,   939,
     946,   958,   965,   974,   982,   988,   993,   999,  1006,  1013,
    1019,  1026,  1033,  1041,  1047,  1058,  1069,  1080,  1091,  1102,
    1113,  1124,  1135,  1141,  1149,  1158,  1170,  1183,  1190,  1197,
    1202,  1208,  1213,  1220,  1227,  1233,  1240,  1256,  1266,  1276,
    1289,  1295,  1303,  1312,  1320,  1331,  1340,  1352,  1360,  1367,
    1373,  1380,  1385,  1391,  1397
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "L_NUMBER", "NUMBER", "STR", "FILE_SEP",
  "PACK", "FUNC", "VAL", "VAR", "IMPORT", "IF", "ELSEIF", "ELSE", "NUL",
  "RETURN", "FOR", "WHILE", "WHEN", "IS", "IN", "DOWNTO", "STEP", "LISTOF",
  "LIST", "INT", "FLOAT", "LONG", "DOUBLE", "STRING", "CHAR", "BOOL",
  "ANY", "UNIT", "MAIN", "ID", "COMMENT", "COMMENT_LONG", "ABST", "CLASS",
  "OVER", "INTER", "M_OPEN", "M_CLOSE", "COMMA", "ARROW", "EQUAL",
  "E_PLUS", "E_MINUS", "E_MULT", "E_DIV", "OR", "AND", "B_OR", "B_XOR",
  "B_AND", "SAME", "NOT_SAME", "DOUBLEDOT", "E_LESS", "E_GREATER",
  "GREATER", "LESS", "L_SHIFT", "R_SHIFT", "PLUS", "MINUS", "MULT", "DIV",
  "INC", "DEC", "COLUMN", "DOT", "NOT", "QUESTION", "OPEN", "CLOSE",
  "B_OPEN", "B_CLOSE", "CALL", "$accept", "goal", "start", "eval", "expr",
  "generic", "class_stt", "val_decl", "var_decl", "class_val_decl",
  "class_var_decl", "class_id_decl", "class_decl", "class_method_decl",
  "inheritance", "lambda", "assign", "main_fun", "cal_sent", "term",
  "signed_factor", "factor", "param", "type", "fun_type", "fun_stt",
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335
};
# endif

#define YYPACT_NINF -288

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-288)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     340,  -288,  -288,    13,    87,   -14,   -14,    34,    -5,  -288,
     -45,     5,   -32,   559,  -288,  -288,    59,    30,    68,   134,
     134,    74,    79,   545,   143,  -288,  -288,   422,  -288,  -288,
    -288,   422,   110,   205,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,   340,    72,    76,    62,   147,  -288,
    -288,   340,   463,   463,   552,  -288,  -288,   552,   552,   299,
     130,   167,  -288,  -288,  -288,  -288,  -288,  -288,   146,    69,
    -288,   545,  -288,   166,   132,   194,   195,  -288,  -288,  -288,
    -288,   172,  -288,  -288,  -288,   545,   545,   545,   545,  -288,
     156,    60,   694,   -14,   221,  -288,   208,    14,  -288,    27,
     110,    21,   581,  -288,   593,   611,  -288,   206,   694,   238,
     110,   223,    -7,   224,  -288,   200,  -288,   -27,  -288,   234,
      96,   234,   204,  -288,   110,   213,   190,   207,   257,  -288,
     205,   205,  -288,  -288,    99,   272,   239,   245,  -288,   275,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
     258,   110,   295,   552,  -288,   694,   333,   545,   335,   552,
     552,   552,   552,   552,   552,   552,   552,   381,   311,   317,
     450,  -288,   694,  -288,   545,   450,   341,   450,   318,   545,
      69,  -288,  -288,  -288,  -288,  -288,   190,   -14,   -14,   319,
     322,   286,   360,   360,   207,   327,   207,  -288,  -288,   296,
     422,   492,  -288,  -288,   302,   680,   309,   694,  -288,   509,
     -14,   623,  -288,   694,    46,   545,   270,   193,   222,   222,
    -288,  -288,  -288,  -288,   422,   367,   227,  -288,   422,   422,
    -288,  -288,    46,   299,   545,   299,   299,    58,  -288,   310,
    -288,  -288,   190,   190,   -10,  -288,  -288,  -288,  -288,  -288,
      16,   110,  -288,  -288,   680,  -288,  -288,  -288,   343,   680,
      99,  -288,   323,   347,   176,   320,  -288,   381,  -288,   545,
     545,  -288,  -288,    46,   350,   545,   325,   381,  -288,  -288,
    -288,   351,   358,  -288,  -288,    46,  -288,   359,   331,   -10,
    -288,  -288,    35,   369,   365,  -288,   528,  -288,   364,    60,
     337,  -288,  -288,  -288,   509,   509,  -288,   227,    -8,    -8,
    -288,  -288,   110,   552,  -288,  -288,  -288,  -288,  -288,   377,
    -288,   371,   -10,    69,   339,   207,  -288,   131,    60,  -288,
    -288,  -288,  -288,   134,  -288,  -288,  -288,   641,   379,   207,
    -288,   352,    69,   383,  -288,  -288,  -288,   381,   384,   388,
     361,  -288,   227,  -288,   -10,   -10,  -288,  -288,  -288
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     174,    65,    64,     0,     0,     0,     0,     0,     0,    75,
       0,     0,     0,    66,   131,   132,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     5,     7,    21,    14,
      13,   174,    15,    57,    60,    63,    16,    10,     9,    12,
      11,    17,    74,    22,   174,     0,     0,   154,   157,    27,
      28,   174,   174,   174,     0,   118,   119,     0,     0,   174,
       0,    49,    50,    51,    52,    53,    69,    70,     0,   174,
      20,     0,    48,     0,     0,     0,    66,    61,    62,    71,
      72,     0,     1,     6,     8,     0,     0,     0,     0,     4,
       0,   174,     0,     0,     0,     3,     0,     0,   153,    66,
     142,    60,     0,   133,     0,     0,   110,     0,     0,     0,
     111,     0,     0,     0,   109,     0,    19,    68,    67,   174,
     174,    74,     0,   171,    18,     0,     0,   174,     0,    73,
      55,    56,    58,    59,   174,     0,     0,     0,    80,     0,
      81,    83,    82,    84,    85,    86,    87,   155,   158,   162,
       0,   160,   159,     0,   152,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   174,     0,     0,
       0,   112,     0,   117,     0,     0,     0,     0,     0,     0,
     174,   169,   173,   168,   170,   167,     0,     0,     0,    33,
      34,     0,     0,     0,   174,     0,   174,    40,    37,    68,
     174,     0,    54,   102,     0,     0,   174,     0,    88,     0,
       0,     0,   145,     0,   174,     0,   140,   139,   134,   141,
     138,   137,   135,   136,   174,   130,   120,   127,   174,   174,
     107,   113,   174,   174,     0,   174,   174,     0,   172,     0,
      29,    30,     0,     0,   174,    38,    39,    35,    26,    36,
       0,    99,   101,   100,     0,    91,    90,    89,    77,     0,
     174,    95,     0,   164,   166,     0,   156,   174,   146,     0,
       0,   143,   149,   174,     0,   129,     0,   174,   122,   125,
     105,     0,     0,   114,   106,   174,   108,     0,   174,   174,
      31,    32,    44,     0,     0,    46,     0,    98,    79,   174,
      89,    93,    92,    23,     0,     0,   161,   121,   174,   174,
     144,   126,   128,     0,   124,   104,   103,   115,   116,     0,
      47,     0,   174,   174,     0,   174,    97,     0,   174,    76,
      94,   163,   165,     0,   148,   151,   147,     0,     0,   174,
      42,     0,   174,     0,    96,    78,   150,   174,     0,    45,
       0,    25,   174,    24,   174,   174,   123,    43,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -288,  -288,    26,     6,   209,  -288,  -288,  -288,  -288,  -288,
    -288,  -125,  -160,  -288,  -279,   148,  -288,  -288,    -6,   215,
     -33,   -17,  -287,   -63,  -224,  -107,  -288,   175,  -288,  -288,
     214,    85,    37,  -288,   241,   243,  -288,   348,    94,  -254,
     226,  -288,    25,  -288,  -194,   140,   118,     1,  -288,    20,
     -64,  -162,   225,   -13
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,   225,    27,   208,    28,    29,    30,   189,
     190,   194,   195,   196,   294,    70,    71,    31,    32,    33,
      34,    35,   137,   257,   258,    36,   260,   202,    37,    38,
     281,   111,   112,   113,    39,    40,    55,    56,   278,   226,
     227,    41,   102,   103,   271,   334,    48,    49,   152,   265,
      42,   122,   181,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      72,   191,    77,    78,   118,   121,    26,    50,    52,    53,
     321,    59,   329,   307,   174,   333,   179,    81,   238,    44,
     197,   101,    47,   314,   101,   101,   292,    52,    53,   147,
     298,    57,   296,    83,   247,   301,   249,    84,   283,   175,
      51,   345,   157,   340,    60,   171,   114,   155,   100,    69,
      26,   100,   100,   110,   132,   133,   123,    26,    85,    86,
     297,   239,   293,   120,   118,   124,    74,   176,   269,   135,
      89,    54,     1,     2,   119,   357,   358,    95,   138,   310,
     322,    58,   104,   105,     9,   245,   246,   197,   151,   197,
     153,   317,   212,   352,   148,   158,   136,    66,    67,    73,
     128,   156,   288,    69,    75,    76,   182,   182,   182,   231,
      79,   323,    85,    86,   198,    80,   121,   290,   291,   270,
     101,   203,    45,    46,    85,    86,   101,   101,   101,   101,
     101,   101,   101,   101,    92,    19,    20,     1,     2,    21,
      22,   180,   200,    82,   262,    23,   201,   100,    90,     9,
     268,   214,    91,   100,   100,   100,   100,   100,   100,   100,
     100,   341,    85,    86,   110,   343,   115,   123,   232,   110,
      76,   110,   116,   237,   120,   344,    85,    86,   211,   348,
     350,   198,   117,   198,   216,   217,   218,   219,   220,   221,
     222,   223,    93,   261,    94,   251,   300,    85,    86,   187,
     188,   272,   125,   264,    21,    22,   250,   230,   126,   273,
      23,   266,   233,   279,   235,    96,   187,   188,   197,   272,
     114,   305,   114,   114,     1,     2,   149,   110,   285,   110,
     110,   295,   197,   134,   280,   280,     9,   127,    85,    86,
     276,   277,    85,    86,    46,   150,   192,   203,   193,   129,
     161,   162,   170,   163,   164,   165,   166,    76,   172,   121,
     272,    97,    98,   308,   309,    66,    67,   173,   128,   312,
     177,    69,   272,    87,    88,    72,   295,   178,   121,   180,
     101,   185,   163,   164,   165,   166,   138,    19,    20,   186,
     327,    21,    22,   199,   279,   335,   335,    23,   264,   264,
     130,   131,     1,     2,   106,   240,   241,   100,   204,   295,
     123,   205,   198,   107,     9,   138,   346,   120,   284,   108,
     286,   287,   206,   160,   331,   332,   198,   161,   162,   123,
     163,   164,   165,   166,   209,    76,   120,   207,   337,   279,
     210,   295,   295,     1,     2,   183,   184,     3,     4,     5,
       6,     7,     8,   213,   228,     9,   215,    10,    11,    12,
     229,   236,   234,   244,   242,    19,    20,   243,    96,    21,
      22,   248,    69,   109,   254,    23,    13,    14,    15,    16,
      17,   259,    18,   275,     1,     2,   303,   289,   299,     4,
       5,     6,   304,     8,   311,   315,     9,   306,    10,    11,
      12,   313,   316,   318,   319,   324,    19,    20,   325,   328,
      21,    22,   330,   338,   339,   342,    23,    13,    14,    15,
      16,    17,   179,    18,   224,     1,     2,   351,   353,   349,
       4,     5,     6,   354,     8,   302,   320,     9,   355,    10,
      11,    12,   252,   282,   253,   154,   356,    19,    20,   336,
     274,    21,    22,     1,     2,   106,     0,    23,    13,    14,
      15,    16,    17,     0,    18,     9,     1,     2,     0,     0,
       0,    96,     5,     6,     0,     8,     0,     0,     9,     0,
      10,    11,    12,     0,     0,     0,    76,     0,    19,    20,
       0,     0,    21,    22,     0,     1,     2,     0,    23,    13,
      14,    15,    16,    17,     8,    18,     0,     9,     0,     0,
       0,    12,     1,     2,   263,     0,    19,    20,     0,     0,
      21,    22,     0,     0,     9,     0,    23,     0,    76,    19,
      20,     1,     2,    21,    22,     0,     0,     0,     0,    23,
       0,     0,     0,     9,     0,    76,     0,     0,     1,     2,
       0,     0,     0,     0,     0,     1,     2,     0,    19,    20,
       9,     0,    21,    22,    76,     0,     0,     9,    23,     0,
       0,     0,   326,     0,     0,    19,    20,     0,     0,    21,
      22,    76,     0,     0,     0,    23,     0,     0,    99,     0,
       0,     0,     0,     0,    19,    20,     0,     0,    21,    22,
       0,     0,     0,     0,    23,     0,    61,    62,    63,    64,
      65,    19,    20,     0,     0,    21,    22,     0,    19,    20,
       0,    23,    21,    22,     0,     0,     0,     0,    23,    66,
      67,     0,    68,   159,   160,    69,     0,     0,   161,   162,
       0,   163,   164,   165,   166,   159,   160,     0,     0,     0,
     161,   162,     0,   163,   164,   165,   166,     0,   167,     0,
       0,     0,     0,   159,   160,     0,     0,     0,   161,   162,
     168,   163,   164,   165,   166,   159,   160,     0,     0,     0,
     161,   162,     0,   163,   164,   165,   166,     0,   169,     0,
       0,     0,     0,   159,   160,     0,     0,     0,   161,   162,
     267,   163,   164,   165,   166,   139,   140,   141,   142,   143,
     144,   145,   146,   255,   256,     0,     0,     0,   347,   139,
     140,   141,   142,   143,   144,   145,   146
};

static const yytype_int16 yycheck[] =
{
      13,   126,    19,    20,    68,    69,     0,     6,    13,    14,
     289,    43,   299,   267,    21,    23,    43,    23,   180,     6,
     127,    54,    36,   277,    57,    58,    36,    13,    14,    92,
     254,    76,    16,    27,   194,   259,   196,    31,   232,    46,
       6,   328,    21,   322,    76,   108,    59,    20,    54,    76,
      44,    57,    58,    59,    87,    88,    69,    51,    66,    67,
      44,   186,    72,    69,   128,    71,    36,    74,    22,     9,
      44,    76,     3,     4,     5,   354,   355,    51,    91,   273,
      45,    76,    57,    58,    15,   192,   193,   194,    94,   196,
      76,   285,   155,   347,    93,    74,    36,    70,    71,    40,
      73,    74,    44,    76,    36,    36,   119,   120,   121,   172,
      36,    76,    66,    67,   127,    36,   180,   242,   243,    73,
     153,   134,    35,    36,    66,    67,   159,   160,   161,   162,
     163,   164,   165,   166,    72,    66,    67,     3,     4,    70,
      71,    45,    43,     0,   207,    76,    47,   153,    76,    15,
     213,   157,    76,   159,   160,   161,   162,   163,   164,   165,
     166,   323,    66,    67,   170,   325,    36,   180,   174,   175,
      36,   177,     5,   179,   180,    44,    66,    67,   153,   339,
     342,   194,    36,   196,   159,   160,   161,   162,   163,   164,
     165,   166,    45,   206,    47,   201,   259,    66,    67,     9,
      10,   214,    36,   209,    70,    71,   200,   170,    76,   215,
      76,   210,   175,   226,   177,     8,     9,    10,   325,   232,
     233,    45,   235,   236,     3,     4,     5,   233,   234,   235,
     236,   244,   339,    77,   228,   229,    15,    43,    66,    67,
      13,    14,    66,    67,    36,    24,    39,   260,    41,    77,
      57,    58,    46,    60,    61,    62,    63,    36,    20,   323,
     273,    52,    53,   269,   270,    70,    71,    44,    73,   275,
      46,    76,   285,    68,    69,   288,   289,    77,   342,    45,
     313,    77,    60,    61,    62,    63,   299,    66,    67,    76,
     296,    70,    71,    36,   307,   308,   309,    76,   304,   305,
      85,    86,     3,     4,     5,   187,   188,   313,    36,   322,
     323,    72,   325,    14,    15,   328,   333,   323,   233,    20,
     235,   236,    77,    53,   304,   305,   339,    57,    58,   342,
      60,    61,    62,    63,    76,    36,   342,    62,   313,   352,
      45,   354,   355,     3,     4,   120,   121,     7,     8,     9,
      10,    11,    12,    20,    43,    15,    21,    17,    18,    19,
      43,    43,    21,    77,    45,    66,    67,    45,     8,    70,
      71,    44,    76,    74,    72,    76,    36,    37,    38,    39,
      40,    72,    42,    16,     3,     4,    63,    77,    45,     8,
       9,    10,    45,    12,    44,    44,    15,    77,    17,    18,
      19,    76,    44,    44,    73,    36,    66,    67,    43,    45,
      70,    71,    75,    36,    43,    76,    76,    36,    37,    38,
      39,    40,    43,    42,    43,     3,     4,    44,    44,    77,
       8,     9,    10,    45,    12,   260,   288,    15,    77,    17,
      18,    19,   201,   229,   201,    97,   352,    66,    67,   309,
     224,    70,    71,     3,     4,     5,    -1,    76,    36,    37,
      38,    39,    40,    -1,    42,    15,     3,     4,    -1,    -1,
      -1,     8,     9,    10,    -1,    12,    -1,    -1,    15,    -1,
      17,    18,    19,    -1,    -1,    -1,    36,    -1,    66,    67,
      -1,    -1,    70,    71,    -1,     3,     4,    -1,    76,    36,
      37,    38,    39,    40,    12,    42,    -1,    15,    -1,    -1,
      -1,    19,     3,     4,     5,    -1,    66,    67,    -1,    -1,
      70,    71,    -1,    -1,    15,    -1,    76,    -1,    36,    66,
      67,     3,     4,    70,    71,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    15,    -1,    36,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    66,    67,
      15,    -1,    70,    71,    36,    -1,    -1,    15,    76,    -1,
      -1,    -1,    44,    -1,    -1,    66,    67,    -1,    -1,    70,
      71,    36,    -1,    -1,    -1,    76,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    70,    71,
      -1,    -1,    -1,    -1,    76,    -1,    47,    48,    49,    50,
      51,    66,    67,    -1,    -1,    70,    71,    -1,    66,    67,
      -1,    76,    70,    71,    -1,    -1,    -1,    -1,    76,    70,
      71,    -1,    73,    52,    53,    76,    -1,    -1,    57,    58,
      -1,    60,    61,    62,    63,    52,    53,    -1,    -1,    -1,
      57,    58,    -1,    60,    61,    62,    63,    -1,    77,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    57,    58,
      77,    60,    61,    62,    63,    52,    53,    -1,    -1,    -1,
      57,    58,    -1,    60,    61,    62,    63,    -1,    77,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    57,    58,
      77,    60,    61,    62,    63,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    77,    25,
      26,    27,    28,    29,    30,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     7,     8,     9,    10,    11,    12,    15,
      17,    18,    19,    36,    37,    38,    39,    40,    42,    66,
      67,    70,    71,    76,    82,    83,    84,    85,    87,    88,
      89,    98,    99,   100,   101,   102,   106,   109,   110,   115,
     116,   122,   131,   134,     6,    35,    36,    36,   127,   128,
     128,     6,    13,    14,    76,   117,   118,    76,    76,    43,
      76,    47,    48,    49,    50,    51,    70,    71,    73,    76,
      96,    97,   134,    40,    36,    36,    36,   102,   102,    36,
      36,    99,     0,    84,    84,    66,    67,    68,    69,    83,
      76,    76,    72,    45,    47,    83,     8,    85,    85,    36,
      99,   101,   123,   124,   123,   123,     5,    14,    20,    74,
      99,   112,   113,   114,   134,    36,     5,    36,   131,     5,
      99,   131,   132,   134,    99,    36,    76,    43,    73,    77,
     100,   100,   101,   101,    77,     9,    36,   103,   134,    25,
      26,    27,    28,    29,    30,    31,    32,   104,   128,     5,
      24,    99,   129,    76,   118,    20,    74,    21,    74,    52,
      53,    57,    58,    60,    61,    62,    63,    77,    77,    77,
      46,   104,    20,    44,    21,    46,    74,    46,    77,    43,
      45,   133,   134,   133,   133,    77,    76,     9,    10,    90,
      91,    92,    39,    41,    92,    93,    94,   106,   134,    36,
      43,    47,   108,   134,    36,    72,    77,    62,    86,    76,
      45,   123,   104,    20,    99,    21,   123,   123,   123,   123,
     123,   123,   123,   123,    43,    84,   120,   121,    43,    43,
     113,   104,    99,   113,    21,   113,    43,    99,   132,    92,
     127,   127,    45,    45,    77,   106,   106,    93,    44,    93,
      84,    99,   115,   116,    72,    33,    34,   104,   105,    72,
     107,   134,   104,     5,    99,   130,   128,    77,   104,    22,
      73,   125,   134,    99,   121,    16,    13,    14,   119,   134,
      84,   111,   111,   125,   112,    99,   112,   112,    44,    77,
      92,    92,    36,    72,    95,   134,    16,    44,   105,    45,
     104,   105,   108,    63,    45,    45,    77,   120,    99,    99,
     125,    44,    99,    76,   120,    44,    44,   125,    44,    73,
      96,    95,    45,    76,    36,    43,    44,    99,    45,   103,
      75,   130,   130,    23,   126,   134,   126,   123,    36,    43,
      95,   132,    76,    93,    44,   103,   102,    77,    93,    77,
     132,    44,   120,    44,    45,    77,   119,    95,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    83,    83,    83,    84,    84,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    87,    87,    87,    88,    89,    90,
      91,    92,    92,    92,    92,    93,    93,    93,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    96,    96,    97,
      97,    97,    97,    97,    98,    99,    99,    99,   100,   100,
     100,   101,   101,   101,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   103,   103,   103,   103,
     103,   104,   104,   104,   104,   104,   104,   104,   104,   105,
     105,   105,   106,   107,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   109,   110,   111,   112,   112,   112,   112,
     113,   113,   114,   114,   114,   114,   115,   115,   116,   116,
     117,   118,   118,   119,   119,   119,   120,   120,   121,   121,
     121,   122,   122,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   124,   124,   125,   125,   125,
     126,   126,   118,   118,   127,   127,   128,   128,   128,   128,
     129,   129,   129,   130,   130,   130,   130,   131,   132,   132,
     132,   132,   133,   133,   134
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     3,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     1,     3,    10,     9,     5,     2,     2,     2,
       2,     3,     3,     1,     1,     2,     2,     1,     2,     2,
       1,     6,     3,     6,     1,     4,     1,     6,     1,     1,
       1,     1,     1,     1,     5,     3,     3,     1,     3,     3,
       1,     2,     2,     1,     1,     1,     1,     3,     3,     2,
       2,     2,     2,     3,     1,     1,     5,     3,     6,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     7,     2,     3,     1,     5,     4,     3,     2,
       2,     2,     1,     7,     7,     1,     4,     3,     4,     1,
       1,     1,     2,     3,     4,     5,     7,     4,     2,     2,
       4,     4,     5,     6,     2,     1,     3,     1,     3,     2,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     4,     5,     3,     4,     3,     3,     1,
       2,     1,     3,     2,     1,     3,     5,     1,     3,     3,
       1,     4,     1,     3,     1,     3,     1,     4,     2,     2,
       2,     1,     2,     1,     0
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
#line 1647 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 156 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("start <- IMPORT FILE_SEP start\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1657 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 162 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("start <- PACK FILE_SEP start\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1667 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 168 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("start <- eval\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1677 "kotlin.tab.c" /* yacc.c:1646  */
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
#line 1691 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 185 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("eval <- expr\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1701 "kotlin.tab.c" /* yacc.c:1646  */
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
#line 1715 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 202 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- for_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1725 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 208 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- while_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1735 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 214 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- if_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1745 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 220 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- when_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1755 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 226 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- var_decl\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1765 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 232 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- val_decl\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1775 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 238 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- cal_sent\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1785 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 244 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var) + 1);
		printf("expr <- fun_stt\n");
		printf("\n\n");
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1796 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 251 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- comment\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
		printf("\n\n");
	}
#line 1807 "kotlin.tab.c" /* yacc.c:1646  */
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
#line 1821 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 268 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("expr <- ID EQUAL STR\n");
		(yyval.d_var) = 1;
	}
#line 1831 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 274 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- ID lambda\n");
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1841 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 280 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- class_decl\n");
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1851 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 286 "kotlin.y" /* yacc.c:1646  */
    {
		/*empty*/
	}
#line 1859 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 291 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[-1].d_var));
			printf("generic <- GREATER type LESS\n");
			(yyval.d_var) = (yyvsp[-1].d_var);
		}
#line 1869 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 298 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-5].d_var) > (yyvsp[-3].d_var)) ? (yyvsp[-5].d_var) : (yyvsp[-3].d_var);
			tmp_blank = (tmp_blank > (yyvsp[-1].d_var)) ? tmp_blank : (yyvsp[-1].d_var);
			Print_Blank(tmp_blank);
			printf("class_stt <- ABST CLASS ID OPEN class_id_decl CLOSE inheritance M_OPEN class_decl M_CLOSE\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 1881 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 306 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-5].d_var) > (yyvsp[-3].d_var)) ? (yyvsp[-5].d_var) : (yyvsp[-3].d_var);
			tmp_blank = (tmp_blank > (yyvsp[-1].d_var)) ? tmp_blank : (yyvsp[-1].d_var);
			Print_Blank(tmp_blank);
			printf("class_stt <- CLASS ID OPEN class_id_decl CLOSE inheritance M_OPEN class_decl M_CLOSE\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 1893 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 314 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[-1].d_var));
			printf("class_stt <- INTER ID M_OPEN class_decl M_CLOSE\n");
			(yyval.d_var) = (yyvsp[-1].d_var) + 1;
		}
#line 1903 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 321 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("val_decl <- VAL id_decl_stt\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 1913 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 328 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("var_decl <- VAR id_decl_stt\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 1923 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 335 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("class_val_decl <- VAL id_decl\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 1933 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 342 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("class_var_decl <- VAR id_decl\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 1943 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 349 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("class_id_decl <- class_val_decl COMMA class_id_decl\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 1954 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 356 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("class_id_decl <- class_var_decl COMMA class_id_decl\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 1965 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 363 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("class_id_decl <- class_val_decl\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 1975 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 369 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf( "class_id_decl <- class_var_Decl\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 1985 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 376 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("class_decl <- class_id_decl class_decl\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 1996 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 383 "kotlin.y" /* yacc.c:1646  */
    {
			(yyval.d_var) = tmp_blank + 1;
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("class_decl <- class_method_decl class_decl\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 2008 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 391 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 2016 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 396 "kotlin.y" /* yacc.c:1646  */
    {
				Print_Blank((yyvsp[0].d_var));
				printf("class_method_decl <- ABST fun_stt\n");
				(yyval.d_var) = (yyvsp[0].d_var) + 1;
			}
#line 2026 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 402 "kotlin.y" /* yacc.c:1646  */
    {
				Print_Blank((yyvsp[0].d_var));
				printf("class_method_decl <- OVER fun_stt\n");
				(yyval.d_var) = (yyvsp[0].d_var) + 1;
			}
#line 2036 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 408 "kotlin.y" /* yacc.c:1646  */
    {
				Print_Blank((yyvsp[0].d_var));
				printf("class_method_decl <- OVER fun_stt\n");
				(yyval.d_var) = (yyvsp[0].d_var) + 1;
			}
#line 2046 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 415 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("inheritance <- COLUMN ID OPEN argument CLOSE inheritance\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 2057 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 422 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("inheritance <- ID COMMA inheritance\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2067 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 428 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("inheritance <- ID OPEN argument CLOSE COMMA inheritance\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 2078 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 435 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank(0);
			printf("inheritance <- ID\n");
			(yyval.d_var) = 1;
		}
#line 2088 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 441 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[-1].d_var));
			printf("inheritance <- ID OPEN argument CLOSE\n");
			(yyval.d_var) = (yyvsp[-1].d_var) + 1;
		}
#line 2098 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 447 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 2106 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 452 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("lambda <- DOT ID M_OPEN cal_sent M_CLOSE lambda\n");
		(yyval.d_var) = tmp_blank;
	}
#line 2117 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 459 "kotlin.y" /* yacc.c:1646  */
    {
		/*empty*/
	}
#line 2125 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 464 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- EQUAL\n");
		(yyval.d_var) = 1;
	}
#line 2135 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 470 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- E_PLUS\n");
		(yyval.d_var) = 1;
	}
#line 2145 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 476 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- E_MINUS\n");
		(yyval.d_var) = 1;
	}
#line 2155 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 482 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- E_MULT\n");
		(yyval.d_var) = 1;
	}
#line 2165 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 488 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- E_DIV\n");
		(yyval.d_var) = 1;
	}
#line 2175 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 495 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("main_fun <- FUNC MAIN OPEN CLOSE fun_body\n");
		printf("\n\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2186 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 503 "kotlin.y" /* yacc.c:1646  */
    {	
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("cal_sent <- cal_sent PLUS term\n");
		(yyval.d_var) = tmp_blank + 1;
	  }
#line 2197 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 510 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("cal_sent <- cal_sent MINUS term\n");
		(yyval.d_var) = tmp_blank + 1;
	  }
#line 2208 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 517 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("cal_sent <- term\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	  }
#line 2218 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 524 "kotlin.y" /* yacc.c:1646  */
    { 
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("term <- term MULT signed_factor\n");
		(yyval.d_var) = tmp_blank + 1;
    	}
#line 2229 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 531 "kotlin.y" /* yacc.c:1646  */
    { 
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("term <- term DIV signed_factor\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 2240 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 538 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("term <- signed_factor\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2250 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 545 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("signed_factor <- PLUS factor\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
	     	}
#line 2260 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 551 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("signed_factor <- MINUS factor\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2270 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 557 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("signed_factor <- factor\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2280 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 564 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("factor <- NUMBER\n");
		(yyval.d_var) = 1;
        }
#line 2290 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 570 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("factor <- L_NUMBER\n");
		(yyval.d_var) = 1;
	}
#line 2300 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 576 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 2312 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 584 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("factor <- ID DOT fun_call\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2324 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 592 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- ID DOT ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 2336 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 600 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- ID INC\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 2348 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 608 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- ID DEC\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;	
	}
#line 2360 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 616 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- INC ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 2372 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 624 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- DEC ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 2384 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 632 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[-1].d_var));
		printf("factor <- OPEN cal_sent CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2394 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 638 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("factor <- fun_call\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2404 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 644 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- NULL\n");
		(yyval.d_var) = 1;
	}
#line 2414 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 651 "kotlin.y" /* yacc.c:1646  */
    { 
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var))? (yyvsp[-2].d_var) : (yyvsp[0].d_var); 
		Print_Blank(tmp_blank);
		printf("param <- ID COLUMN fun_type COMMA param\n");
		(yyval.d_var) = tmp_blank + 1;	
     	}
#line 2425 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 658 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("param <- ID COLUMN fun_type\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2435 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 664 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var))? (yyvsp[-2].d_var) : (yyvsp[0].d_var); 
		Print_Blank(tmp_blank);
		printf("param <- VAL ID COLUMN fun_type COMMA param\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 2446 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 671 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("param <- VAL ID COLUMN fun_type\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2456 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 677 "kotlin.y" /* yacc.c:1646  */
    {
		/*empty*/
	}
#line 2464 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 682 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("type <- INT\n");
		(yyval.d_var) = 1;
    	}
#line 2474 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 688 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("type <- LONG\n");
		//$$ = 2;
		(yyval.d_var) = 1;
    	}
#line 2485 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 695 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- FLOAT\n");
		//$$ = 3;
		(yyval.d_var) = 1;
	}
#line 2496 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 702 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- DOUBLE\n");
		//$$ = 4;
		(yyval.d_var) = 1;
	}
#line 2507 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 709 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- STRING\n");
		//$$ = 5;
		(yyval.d_var) = 1;
	}
#line 2518 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 716 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- CHAR\n");
		//$$ = 6;
		(yyval.d_var) = 1;
	}
#line 2529 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 723 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("type <- BOOL\n");
		//$$ = 7;
		(yyval.d_var) = 1;
	}
#line 2540 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 730 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("type <- LIST generic\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2550 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 737 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("fun_type <- type\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2560 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 744 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank(0);
			printf("fun_type <- UNIT\n");
			//$$ = 7;
			(yyval.d_var) = 1;
		}
#line 2571 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 751 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank(0);
			printf("fun_type <- ANY\n");
			//$$ = 8;
			(yyval.d_var) = 1;
		}
#line 2582 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 759 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var))? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		tmp_blank = (tmp_blank > (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("fun_stt <- FUNC ID OPEN param CLOSE ret_type fun_body\n");
		printf("%s\n", (yyvsp[-5].s_var));
		(yyval.d_var) = tmp_blank + 1;
      	}
#line 2595 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 769 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("ret_type <- COLUMN fun_type\n");
		//$$ = $2;
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2606 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 776 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("ret_type <- COLUMN type QUESTION\n");
		//$$ = $2 + 20;
		(yyval.d_var) = (yyvsp[-1].d_var);
	}
#line 2617 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 783 "kotlin.y" /* yacc.c:1646  */
    {
		/*empty*/
	}
#line 2625 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 788 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		Print_Blank(tmp_blank);
		printf("fun_body <- M_OPEN eval RETURN cal_sent M_CLOSE\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 2636 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 795 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-2].d_var));
		printf("fun_body <- M_OPEN eval RETURN M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-2].d_var) + 1;
	}
#line 2646 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 801 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[-1].d_var));
		printf("fun_body <- M_OPEN eval M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2656 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 807 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("fun_body <- EQUAL cal_sent\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;	
	}
#line 2666 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 813 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("fun_body <- EQUAL if_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;	
	}
#line 2676 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 819 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("fun_body <- EQUAL when_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;	
	}
#line 2686 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 825 "kotlin.y" /* yacc.c:1646  */
    {
		//empty	
	}
#line 2694 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 830 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-4].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-1].d_var);
		Print_Blank(tmp_blank);
		printf("while_stt <- WHILE OPEN condition CLOSE M_OPEN loop_body M_CLOSE\n");
		(yyval.d_var) = tmp_blank + 1;
	 }
#line 2705 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 838 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-4].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-1].d_var);
		Print_Blank(tmp_blank);
		printf("for_stt <- FOR OPEN condition CLOSE M_OPEN loop_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-4].d_var) + 1;
      	 }
#line 2716 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 846 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("loop_body <- eval\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	 }
#line 2726 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 853 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		Print_Blank(tmp_blank);
		printf("when_body <- when_id ARROW when_id when_body\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 2737 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 860 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("when_body <- ELSE ARROW when_id\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2747 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 866 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		tmp_blank = (tmp_blank> (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("when_body <- when_condition ARROW cal_sent when_body\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 2759 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 874 "kotlin.y" /* yacc.c:1646  */
    {
		//empty
	}
#line 2767 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 879 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("when_id <- STR\n");
		printf("%s\n", (yyvsp[0].s_var));
		(yyval.d_var) = 1;
	}
#line 2778 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 886 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("when_id <- cal_sent\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2788 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 893 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("when_condition <- IS type\n");
			(yyval.d_var) = (yyvsp[0].d_var);
		}
#line 2798 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 899 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("when_condition <- NOT IS type\n");
			(yyval.d_var) = (yyvsp[0].d_var);
		}
#line 2808 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 905 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
			tmp_blank = (tmp_blank > (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("when_condition <- when_id IN range\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 2820 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 913 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-4].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-1].d_var);
			Print_Blank(tmp_blank);
			printf("when_condition <- when_id NOT IN cal_sent range\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 2831 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 921 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("when_stt <- WHEN OPEN ID CLOSE M_OPEN when_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2841 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 927 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("when_stt <- WHEN M_OPEN when_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2851 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 934 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("if_stt <- IF noelse\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2861 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 940 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("if_stt <- IF withelse\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2871 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 947 "kotlin.y" /* yacc.c:1646  */
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
#line 2886 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 959 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("withelse <- OPEN condition CLOSE cf\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 2897 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 966 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		tmp_blank = (tmp_blank > (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var); 
		Print_Blank(tmp_blank);
		printf("OPEN condition CLOSE cf else_part\n");
		(yyval.d_var) = tmp_blank + 1; 
	}
#line 2909 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 975 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		tmp_blank = (tmp_blank > (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("else_part <- ELSEIF OPEN condition CLOSE cf else_part\n");
		(yyval.d_var) = tmp_blank + 1;
	 }
#line 2921 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 983 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("else_part <- ELSE cf\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	 }
#line 2931 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 989 "kotlin.y" /* yacc.c:1646  */
    {
		//empty
	 }
#line 2939 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 994 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("cf <- M_OPEN cf_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	 }
#line 2949 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1000 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("cf <- cf_body\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	 }
#line 2959 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1007 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_blank);
		printf("cf_body <- eval RETURN cal_sent\n");
		(yyval.d_var) = tmp_blank + 1;
	}
#line 2970 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1014 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("cf_body <- eval RETURN\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2980 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1020 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("cf_body <- M_OPEN eval M_CLOSE\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2990 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1027 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("com <- COMMENT\n");
		(yyval.d_var) = 1;
		printf("%s\n", (yyvsp[0].s_var));
	}
#line 3001 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1034 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("com <- COMMENT_LONG\n");
		(yyval.d_var) = 1;
		printf("%s\n", (yyvsp[0].s_var));
	}
#line 3012 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1042 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("condition <- is_condition\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;	
		}
#line 3022 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1048 "kotlin.y" /* yacc.c:1646  */
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
#line 3037 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1059 "kotlin.y" /* yacc.c:1646  */
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
#line 3052 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1070 "kotlin.y" /* yacc.c:1646  */
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
#line 3067 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1081 "kotlin.y" /* yacc.c:1646  */
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
#line 3082 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1092 "kotlin.y" /* yacc.c:1646  */
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
#line 3097 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1103 "kotlin.y" /* yacc.c:1646  */
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
#line 3112 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1114 "kotlin.y" /* yacc.c:1646  */
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
#line 3127 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1125 "kotlin.y" /* yacc.c:1646  */
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
#line 3142 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1136 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("condition <- cal_sent\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3152 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1142 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
			tmp_blank = (tmp_blank > (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("condition <- factor IN cal_sent range\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3164 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1150 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-4].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-1].d_var);
			tmp_blank = (tmp_blank > (yyvsp[0].d_var)) ? tmp_blank : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("condition <- factor NOT IN cal_sent range\n");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3176 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1159 "kotlin.y" /* yacc.c:1646  */
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
#line 3192 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1171 "kotlin.y" /* yacc.c:1646  */
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
#line 3208 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1184 "kotlin.y" /* yacc.c:1646  */
    {
			printf("range <- DOUBLEDOT cal_sent step_count\n");
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			(yyval.d_var) = tmp_blank + 1;
      		}
#line 3219 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1191 "kotlin.y" /* yacc.c:1646  */
    {
			printf("range <- DOWNTO cal_sent step_count\n");
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3230 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1198 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 3238 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1203 "kotlin.y" /* yacc.c:1646  */
    { 
			printf("step_count <- STEP factor\n");
			Print_Blank((yyvsp[0].d_var));
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
	  	}
#line 3248 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1209 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 3256 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1214 "kotlin.y" /* yacc.c:1646  */
    {
			printf("withelse <- ELSEIF expr withelse\n");
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);	
			Print_Blank(tmp_blank);
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3267 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1221 "kotlin.y" /* yacc.c:1646  */
    {
			printf("withelse <- ELSE expr\n");
			Print_Blank((yyvsp[0].d_var));
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3277 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1228 "kotlin.y" /* yacc.c:1646  */
    {
			printf("id_decl <- ID\n");
			Print_Blank(0);
			(yyval.d_var) = 1;
		}
#line 3287 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1234 "kotlin.y" /* yacc.c:1646  */
    {
			printf("id_decl <- ID COLUMN type\n");
			Print_Blank((yyvsp[0].d_var));
			(yyval.d_var) = (yyvsp[0].d_var);
		}
#line 3297 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1241 "kotlin.y" /* yacc.c:1646  */
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
			//	  = "Error : Hole in array!\n;
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3317 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1257 "kotlin.y" /* yacc.c:1646  */
    {
			printf("id_decl_stt <- id_decl\n");
			Print_Blank((yyvsp[0].d_var));
			//var_type[var_idx] = 0;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3331 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1267 "kotlin.y" /* yacc.c:1646  */
    {
			printf("id_decl_stt <- id_decl\n");
			Print_Blank((yyvsp[-2].d_var));
			//var_type[var_idx] = 0;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;
			(yyval.d_var) = (yyvsp[-2].d_var) + 1;
		}
#line 3345 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1277 "kotlin.y" /* yacc.c:1646  */
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
#line 3361 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1290 "kotlin.y" /* yacc.c:1646  */
    {
			printf("decl_content <- cal_sent\n");
			Print_Blank((yyvsp[0].d_var));
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3371 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1296 "kotlin.y" /* yacc.c:1646  */
    {
			printf("decl_content <- LISTOF OPEN list_content CLOSE\n");
			Print_Blank((yyvsp[-1].d_var));
			//double * tmp = (double*) &($3);
			//$$ = *tmp;
			(yyval.d_var) = (yyvsp[-1].d_var) + 1;	
		}
#line 3383 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1304 "kotlin.y" /* yacc.c:1646  */
    {
			printf("decl_content <- STR\n");
			Print_Blank(0);
			//tmp_idx = Find_var_index($1, var_name);
			//$$ = data[tmp_idx];
			(yyval.d_var) = 1;	
		}
#line 3395 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1313 "kotlin.y" /* yacc.c:1646  */
    {
			printf("list_content <- STR COMMA list_content\n");
			Print_Blank((yyvsp[0].d_var));
			//*($3 + tmp_idx) = $1;
			//tmp_idx++;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
	    	}
#line 3407 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1321 "kotlin.y" /* yacc.c:1646  */
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
#line 3422 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1332 "kotlin.y" /* yacc.c:1646  */
    {
			printf("list_content <- cal_sent COMMA list_content\n");
			tmp_blank = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			//*($3 + tmp_idx) = $1;
			//tmp_idx++;
			(yyval.d_var) = tmp_blank + 1;
	    	}
#line 3435 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1341 "kotlin.y" /* yacc.c:1646  */
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
#line 3450 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1353 "kotlin.y" /* yacc.c:1646  */
    {
			printf("fun_call <- ID OPEN argument CLOSE\n");
			Print_Blank((yyvsp[-1].d_var));
			printf("%s\n", (yyvsp[-3].s_var));
			(yyval.d_var) = (yyvsp[-1].d_var) + 1;
		}
#line 3461 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1361 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("argument <- calc_sent mul_argument\n");
			(yyval.d_var) = tmp_blank;
		}
#line 3472 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1368 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("argument <- STR mul_argument\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3482 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1374 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_blank = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_blank);
			printf("argument <- fun_call mul_argument");
			(yyval.d_var) = tmp_blank + 1;
		}
#line 3493 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1381 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 3501 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1386 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("mul_argument <- COMMA argument\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3511 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1392 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 3519 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1397 "kotlin.y" /* yacc.c:1646  */
    {}
#line 3525 "kotlin.tab.c" /* yacc.c:1646  */
    break;


#line 3529 "kotlin.tab.c" /* yacc.c:1646  */
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
#line 1398 "kotlin.y" /* yacc.c:1906  */



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
