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
//Type value - 0 : Not_defined 1 : INT, 2 : FLOAT, 3 : DOUBLE, 4 : STRING, 5 : CHAR, const : +10
int var_type[100] = { 0 };
//Type value - 0 : Not_defined 1 : INT, 2 : FLOAT, 3 : DOUBLE, 4 : STRING, 5 : CHAR, 6 : UNIT, 7 : ANY, const : +10, question : +20
int fun_type[100] = { 0 };
int var_idx = 0, fun_idx = 0, err = 0, tmp_data, tmp_idx;
int blank_count = 0;

int Check_Type_Saved(char * name);
int Check_Type_Not_Saved(double value);
void Print_Blank();
void Do_Nothing(double something) {};


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
    NUMBER = 258,
    STR = 259,
    FILE_SEP = 260,
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
    LIST = 278,
    INT = 279,
    FLOAT = 280,
    DOUBLE = 281,
    STRING = 282,
    CHAR = 283,
    ANY = 284,
    UNIT = 285,
    MAIN = 286,
    ID = 287,
    COMMENT = 288,
    COMMENT_LONG = 289,
    M_OPEN = 290,
    M_CLOSE = 291,
    COMMA = 292,
    EQUAL = 293,
    E_PLUS = 294,
    E_MINUS = 295,
    E_MULT = 296,
    E_DIV = 297,
    OR = 298,
    AND = 299,
    B_OR = 300,
    B_XOR = 301,
    B_AND = 302,
    SAME = 303,
    NOT_SAME = 304,
    E_LESS = 305,
    E_GREATER = 306,
    GREATER = 307,
    LESS = 308,
    DOUBLEDOT = 309,
    L_SHIFT = 310,
    R_SHIFT = 311,
    PLUS = 312,
    MINUS = 313,
    MULT = 314,
    DIV = 315,
    COLUMN = 316,
    DOT = 317,
    NOT = 318,
    QUESTION = 319,
    ARROW = 320,
    OPEN = 321,
    CLOSE = 322,
    B_OPEN = 323,
    B_CLOSE = 324,
    QUOTE = 325,
    CALL = 326
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "kotlin.y" /* yacc.c:355  */
 double d_var; float f_var; int i_var; char* s_var; char c_var; char** sp_var

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
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  215

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   326

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
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   125,   125,   124,   140,   149,   157,   166,   174,   182,
     190,   198,   206,   214,   222,   230,   238,   246,   254,   262,
     271,   279,   287,   296,   304,   312,   321,   329,   338,   346,
     355,   363,   372,   380,   388,   396,   404,   412,   420,   429,
     438,   446,   454,   459,   467,   475,   483,   488,   497,   506,
     515,   523,   528,   537,   545,   554,   566,   574,   583,   591,
     599,   604,   613,   622,   632,   640,   651,   662,   673,   684,
     695,   706,   717,   728,   737,   750,   764,   772,   781,   789,
     798,   807,   815,   824,   839,   850,   862,   873,   884,   896,
     907,   918,   929,   940,   951,   963,   971,   980,   990,  1000,
    1013,  1022,  1030,  1038,  1046,  1054,  1060
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "STR", "FILE_SEP", "PACK",
  "FUNC", "VAL", "VAR", "IMPORT", "IF", "ELSEIF", "ELSE", "NUL", "RETURN",
  "FOR", "WHILE", "WHEN", "IS", "IN", "DOWNTO", "STEP", "LIST", "INT",
  "FLOAT", "DOUBLE", "STRING", "CHAR", "ANY", "UNIT", "MAIN", "ID",
  "COMMENT", "COMMENT_LONG", "M_OPEN", "M_CLOSE", "COMMA", "EQUAL",
  "E_PLUS", "E_MINUS", "E_MULT", "E_DIV", "OR", "AND", "B_OR", "B_XOR",
  "B_AND", "SAME", "NOT_SAME", "E_LESS", "E_GREATER", "GREATER", "LESS",
  "DOUBLEDOT", "L_SHIFT", "R_SHIFT", "PLUS", "MINUS", "MULT", "DIV",
  "COLUMN", "DOT", "NOT", "QUESTION", "ARROW", "OPEN", "CLOSE", "B_OPEN",
  "B_CLOSE", "QUOTE", "CALL", "$accept", "goal", "$@1", "eval", "expr",
  "cal_sent", "term", "signed_factor", "factor", "param", "type",
  "fun_stt", "ret_type", "fun_body", "while_stt", "for_stt", "loop_body",
  "when_body", "when_stt", "if_stt", "noelse", "withelse", "else_part",
  "cf_body", "com", "condition", "is_condition", "for_condition", "range",
  "step_count", "val_decl", "var_decl", "decl_content", "list_content",
  "fun_call", "argument", "epsilone", YY_NULLPTR
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
     325,   326
};
# endif

#define YYPACT_NINF -150

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-150)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     123,  -150,    12,    -6,     1,    16,    37,  -150,   -30,    -2,
       2,    19,  -150,  -150,    15,    15,    52,    62,  -150,   176,
     -17,   -38,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,   123,    32,   -24,  -150,   -22,  -150,   176,   176,   146,
    -150,  -150,   146,   146,    69,    79,  -150,  -150,  -150,    -4,
    -150,  -150,    52,    52,    52,    52,  -150,    74,    85,   171,
      85,   171,    39,  -150,    -7,   -17,   170,  -150,    92,   228,
      66,   195,    77,    79,    79,    79,    79,    80,  -150,  -150,
     -38,   -38,  -150,  -150,   128,    91,    95,    93,  -150,   -17,
     121,  -150,  -150,  -150,  -150,  -150,  -150,  -150,   126,   137,
     138,   146,  -150,   171,   156,   146,   146,   146,   146,   146,
     146,   146,   146,   176,    15,   147,   151,   153,  -150,  -150,
    -150,  -150,  -150,   186,   171,   141,   201,     1,    85,    16,
      85,   206,  -150,   171,   117,    71,   174,   174,  -150,  -150,
    -150,  -150,  -150,    48,     4,   176,   176,   176,   123,   169,
     171,    -3,  -150,   178,   140,  -150,   179,  -150,   180,   176,
    -150,   145,   176,  -150,  -150,    15,    15,  -150,  -150,   196,
     199,   175,   200,  -150,  -150,    74,   177,   176,    52,  -150,
    -150,   201,  -150,     1,    16,    48,   146,  -150,   229,   229,
    -150,  -150,   248,  -150,  -150,  -150,     8,   -17,  -150,  -150,
    -150,   217,   250,  -150,  -150,   176,   176,  -150,   176,  -150,
    -150,   227,    48,  -150,  -150
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    26,     0,     0,     0,     0,     0,    29,     0,     0,
       0,    27,    62,    63,     0,     0,     0,     0,     4,     6,
      13,    19,    22,    25,    14,     8,     7,    10,     9,    16,
      15,     0,     0,    84,    12,    90,    11,     0,     0,     0,
      53,    54,     0,     0,     0,   106,    27,    23,    24,     0,
       1,     5,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,    82,    27,    73,     0,    64,    25,    76,
       0,     0,     0,   106,   106,   106,   106,     0,   105,    28,
      17,    18,    20,    21,     0,     0,     0,     0,    27,    95,
      85,    32,    33,    34,    35,    36,    38,    37,    87,    91,
      93,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   103,   102,
     101,   104,   100,     0,     0,   106,     0,     0,     0,     0,
       0,     0,    74,     0,    71,    70,    65,    72,    69,    68,
      66,    67,    61,    55,     0,     0,     0,   106,     0,    31,
       0,   106,    42,    99,     0,    83,    88,    89,    94,     0,
      75,     0,     0,    57,    60,     0,     0,    77,    49,     0,
       0,     0,     0,    51,     3,     0,    40,     0,     0,    39,
      46,     0,    97,     0,     0,    56,     0,    59,     0,     0,
      48,    47,     0,    52,    30,    41,     0,    45,    98,    86,
      92,     0,     0,    79,    78,   106,     0,    44,     0,    80,
      50,     0,   106,    43,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,   -23,  -150,     0,   -33,   -15,    75,    81,   -12,    89,
     -46,  -150,  -150,  -150,  -150,  -150,   129,    78,  -150,  -150,
    -150,   212,    70,  -149,  -150,   -36,  -150,  -150,  -150,    96,
    -116,   -95,   -51,   105,  -150,   155,  -105
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,    84,   142,    19,    20,    21,    22,    23,    86,
      98,    24,   151,   179,    25,    26,   169,   172,    27,    28,
      40,    41,   163,   143,    29,    66,    67,    70,   167,   203,
      34,    36,    90,   154,    30,    77,    78
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      18,    49,    47,    48,    62,    63,    69,    71,    56,    99,
     185,   155,   103,   187,    58,   100,    60,    31,     1,    51,
     152,    54,    55,   206,    65,   165,    32,    65,    65,     7,
      68,    18,   177,    33,   157,   178,    42,    59,   164,    61,
      52,    53,   173,    89,   207,    89,   180,    46,    35,    37,
      38,    37,    38,    52,    53,     1,   104,   132,   166,   212,
     161,   162,    50,    79,    43,   131,     7,   199,    44,   134,
     135,   136,   137,   138,   139,   140,   141,   156,   149,   158,
     164,    16,    73,    74,    46,    45,    65,   160,     1,   200,
      65,    65,    65,    65,    65,    65,    65,    65,    57,     7,
     173,    72,   144,    39,   176,   101,    85,   164,    87,    14,
      15,    75,   114,    89,   171,    89,    76,    88,    16,   107,
     108,   109,   110,   111,   112,   174,     1,    80,    81,     2,
       3,     4,     5,   115,     6,    82,    83,     7,   123,     8,
       9,    10,    14,    15,   117,   168,   168,   122,    18,     1,
     201,    16,   124,   188,   189,    11,    12,    13,   127,   126,
       7,   106,   125,   197,   128,   107,   108,   109,   110,   111,
     112,    65,   171,   211,   129,   133,   130,   196,    64,     1,
      14,    15,   145,     3,     4,     5,   146,     6,   147,    16,
       7,   148,     8,     9,    10,    91,    92,    93,    94,    95,
      96,    97,   150,    14,    15,   153,   175,   182,    11,    12,
      13,   186,    16,   105,   106,   181,   183,   184,   107,   108,
     109,   110,   111,   112,   109,   110,   111,   112,   118,   119,
     120,   121,   190,    14,    15,   191,   193,   113,   105,   106,
     192,   195,    16,   107,   108,   109,   110,   111,   112,   105,
     106,   202,   205,   209,   107,   108,   109,   110,   111,   112,
     105,   106,   116,   213,   194,   107,   108,   109,   110,   111,
     112,   105,   106,   159,   102,   170,   107,   108,   109,   110,
     111,   112,   214,   210,   208,   204,   198
};

static const yytype_uint8 yycheck[] =
{
       0,    16,    14,    15,    37,    38,    42,    43,    31,    60,
     159,   127,    19,   162,    38,    61,    38,     5,     3,    19,
     125,    59,    60,    15,    39,    21,    32,    42,    43,    14,
      42,    31,    35,    32,   129,    38,    66,    61,   143,    61,
      57,    58,   147,    58,    36,    60,   151,    32,    32,    12,
      13,    12,    13,    57,    58,     3,    63,   103,    54,   208,
      12,    13,     0,    67,    66,   101,    14,   183,    66,   105,
     106,   107,   108,   109,   110,   111,   112,   128,   124,   130,
     185,    66,     3,     4,    32,    66,   101,   133,     3,   184,
     105,   106,   107,   108,   109,   110,   111,   112,    66,    14,
     205,    32,   114,    66,   150,    66,    32,   212,    23,    57,
      58,    32,    20,   128,   147,   130,    37,    32,    66,    48,
      49,    50,    51,    52,    53,   148,     3,    52,    53,     6,
       7,     8,     9,    67,    11,    54,    55,    14,    10,    16,
      17,    18,    57,    58,    67,   145,   146,    67,   148,     3,
     186,    66,    61,   165,   166,    32,    33,    34,    37,    66,
      14,    44,    67,   178,    38,    48,    49,    50,    51,    52,
      53,   186,   205,   206,    37,    19,    38,   177,    32,     3,
      57,    58,    35,     7,     8,     9,    35,    11,    35,    66,
      14,     5,    16,    17,    18,    24,    25,    26,    27,    28,
      29,    30,    61,    57,    58,     4,    37,    67,    32,    33,
      34,    66,    66,    43,    44,    37,    37,    37,    48,    49,
      50,    51,    52,    53,    50,    51,    52,    53,    73,    74,
      75,    76,    36,    57,    58,    36,    36,    67,    43,    44,
      65,    64,    66,    48,    49,    50,    51,    52,    53,    43,
      44,    22,     4,     3,    48,    49,    50,    51,    52,    53,
      43,    44,    67,    36,   175,    48,    49,    50,    51,    52,
      53,    43,    44,    67,    62,   146,    48,    49,    50,    51,
      52,    53,   212,   205,    67,   189,   181
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    11,    14,    16,    17,
      18,    32,    33,    34,    57,    58,    66,    73,    75,    76,
      77,    78,    79,    80,    83,    86,    87,    90,    91,    96,
     106,     5,    32,    32,   102,    32,   103,    12,    13,    66,
      92,    93,    66,    66,    66,    66,    32,    80,    80,    77,
       0,    75,    57,    58,    59,    60,    73,    66,    38,    61,
      38,    61,    76,    76,    32,    77,    97,    98,    80,    97,
      99,    97,    32,     3,     4,    32,    37,   107,   108,    67,
      78,    78,    79,    79,    74,    32,    81,    23,    32,    77,
     104,    24,    25,    26,    27,    28,    29,    30,    82,   104,
      82,    66,    93,    19,    63,    43,    44,    48,    49,    50,
      51,    52,    53,    67,    20,    67,    67,    67,   107,   107,
     107,   107,    67,    10,    61,    67,    66,    37,    38,    37,
      38,    97,    82,    19,    97,    97,    97,    97,    97,    97,
      97,    97,    75,    95,    80,    35,    35,    35,     5,    82,
      61,    84,   108,     4,   105,   102,   104,   103,   104,    67,
      82,    12,    13,    94,   108,    21,    54,   100,    75,    88,
      88,    76,    89,   108,    73,    37,    82,    35,    38,    85,
     108,    37,    67,    37,    37,    95,    66,    95,    80,    80,
      36,    36,    65,    36,    81,    64,    75,    77,   105,   102,
     103,    97,    22,   101,   101,     4,    15,    36,    67,     3,
      89,    76,    95,    36,    94
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    74,    73,    73,    75,    75,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    77,    77,    77,
      78,    78,    78,    79,    79,    79,    80,    80,    80,    80,
      81,    81,    82,    82,    82,    82,    82,    82,    82,    83,
      84,    84,    84,    85,    85,    85,    85,    86,    87,    88,
      89,    89,    90,    91,    91,    92,    93,    93,    94,    94,
      94,    95,    96,    96,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    98,    98,    99,    99,   100,   100,
     101,    93,    93,   102,   102,   102,   102,   102,   102,   103,
     103,   103,   103,   103,   103,   104,   104,   104,   105,   105,
     106,   107,   107,   107,   107,   107,   108
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     7,     1,     2,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     1,     2,     2,     1,     1,     1,     3,     1,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     7,
       2,     3,     1,     5,     3,     2,     1,     7,     7,     1,
       4,     1,     7,     2,     2,     4,     4,     5,     6,     2,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     4,     1,     4,     3,     3,
       2,     3,     2,     5,     1,     3,     7,     3,     5,     5,
       1,     3,     7,     3,     5,     1,     1,     4,     3,     1,
       4,     2,     2,     2,     2,     1,     0
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
#line 125 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("goal -> PACK FILE_SEP goal\n");
		Do_Nothing((yyvsp[0].d_var));
		blank_count--;	 
	}
#line 1480 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 133 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("goal -> IMPORT FILE_SEP goal\n");
		Do_Nothing((yyvsp[-4].d_var));
		blank_count--;	 
	}
#line 1492 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 141 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("goal -> eval\n");
		Do_Nothing((yyvsp[0].d_var));
		blank_count--;	
	}
#line 1504 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 150 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("eval -> expr eval\n");
		(yyval.d_var) = (yyvsp[-1].d_var); 
		blank_count--;	
    	}
#line 1516 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 158 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("eval -> expr\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	}
#line 1528 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 167 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("expr -> for_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	}
#line 1540 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 175 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("expr -> while_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	}
#line 1552 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 183 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("expr -> if_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	}
#line 1564 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 191 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("expr -> when_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	}
#line 1576 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 199 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("expr -> VAR var_decl\n");
		(yyval.d_var) = (yyvsp[-1].d_var);
		blank_count--;	
	}
#line 1588 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 207 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("expr -> VAL val_decl\n");
		(yyval.d_var) = (yyvsp[-1].d_var);
		blank_count--;	
	}
#line 1600 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 215 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("expr -> cal_sent\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	}
#line 1612 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 223 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("expr -> fun_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	}
#line 1624 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 231 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("expr -> fun_call\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	}
#line 1636 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 239 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("expr -> comment\n");
		blank_count--;	
	}
#line 1647 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 247 "kotlin.y" /* yacc.c:1646  */
    {	
		Print_Blank();
		blank_count++;
		printf("cal_sent -> cal_sent PLUS term\n");
		(yyval.d_var) = (yyvsp[-2].d_var) + (yyvsp[0].d_var);
		blank_count--;	
	  }
#line 1659 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 255 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("cal_sent -> cal_sent MINUS term\n");
		(yyval.d_var) = (yyvsp[-2].d_var) - (yyvsp[0].d_var);
		blank_count--;	
	  }
#line 1671 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 263 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("cal_sent -> term\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	  }
#line 1683 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 272 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("term -> term MULT signed_factor\n");
		(yyval.d_var) = (yyvsp[-2].d_var) * (yyvsp[0].d_var);
		blank_count--;	
    	}
#line 1695 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 280 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("term -> term DIV signed_factor\n");
		(yyval.d_var) = (yyvsp[-2].d_var) / (yyvsp[0].d_var);
		blank_count--;	
	}
#line 1707 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 288 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("term -> signed_factor\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	}
#line 1719 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 297 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank();
			blank_count++;
			printf("signed_factor -> PLUS factor\n");
			(yyval.d_var) = (yyvsp[0].d_var);
			blank_count--;	
	     	}
#line 1731 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 305 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank();
			blank_count++;
			printf("signed_factor -> MINUS factor\n");
			(yyval.d_var) = -1 * (yyvsp[0].d_var);
			blank_count--;	
		}
#line 1743 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 313 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank();
			blank_count++;
			printf("signed_factor -> factor\n");
			(yyval.d_var) = (yyvsp[0].d_var);
			blank_count--;	
		}
#line 1755 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 322 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("factor -> NUMBER\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
        }
#line 1767 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 330 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("factor -> ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		blank_count--;	
	}
#line 1780 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 339 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("factor -> OPEN cal_sent CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var);
		blank_count--;	
	}
#line 1792 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 347 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("factor -> NULL\n");
		(yyval.d_var) = 0;
		blank_count--;	
	}
#line 1804 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 356 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("param -> ID COLUMN type COMMA param\n");
		(yyval.d_var) = (yyvsp[-2].d_var);	
		blank_count--;	
     	}
#line 1816 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 364 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("param -> ID COLUMN type\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	}
#line 1828 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 373 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("type -> INT\n");
		(yyval.d_var) = 1;
		blank_count--;	
    	}
#line 1840 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 381 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("type -> FLOAT\n");
		(yyval.d_var) = 2;
		blank_count--;	
	}
#line 1852 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 389 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("type -> DOUBLE\n");
		(yyval.d_var) = 3;
		blank_count--;	
	}
#line 1864 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 397 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("type -> STRING\n");
		(yyval.d_var) = 4;
		blank_count--;	
	}
#line 1876 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 405 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("type -> CHAR\n");
		(yyval.d_var) = 5;
		blank_count--;	
	}
#line 1888 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 413 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("type -> UNIT\n");
		(yyval.d_var) = 6;
		blank_count--;	
	}
#line 1900 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 421 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("type -> ANY\n");
		(yyval.d_var) = 7;
		blank_count--;	
	}
#line 1912 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 430 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("fun_stt -> FUNC ID OPEN param CLOSE ret_type fun_body\n");
		(yyval.d_var) = 1;
	 	blank_count--;	
      	}
#line 1924 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 439 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("ret_type -> COLUMN type\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		 blank_count--;	
	}
#line 1936 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 447 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("ret_type -> COLUMN type QUESTION\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 20;
		blank_count--;	
	}
#line 1948 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 455 "kotlin.y" /* yacc.c:1646  */
    {
		/*empty*/
	}
#line 1956 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 460 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("fun_body -> M_OPEN eval RETURN expr M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-2].d_var);
		blank_count--;	
	}
#line 1968 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 468 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("fun_body -> M_OPEN eval M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var);
		blank_count--;	
	}
#line 1980 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 476 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("EQUAL cal_sent\n");
		(yyval.d_var) = (yyvsp[0].d_var);	
		blank_count--;	
	}
#line 1992 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 484 "kotlin.y" /* yacc.c:1646  */
    {
		//empty	
	}
#line 2000 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 489 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("while_stt -> WHILE OPEN condition CLOSE M_OPEN loop_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-4].i_var);
		blank_count--;	
	 }
#line 2012 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 498 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("for_stt -> FOR OPEN for_condition CLOSE M_OPEN loop_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-4].i_var);
		blank_count--;	
      	 }
#line 2024 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 507 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("loop_body -> eval\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	 }
#line 2036 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 516 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("when_body -> expr ARROW STR when_body\n");
		(yyval.d_var) = (yyvsp[-3].d_var);
		blank_count--;	
	}
#line 2048 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 524 "kotlin.y" /* yacc.c:1646  */
    {
		//empty
	}
#line 2056 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 529 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("when_stt -> WHEN OPEN ID CLOSE M_OPEN when_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var);
		blank_count--;	
	}
#line 2068 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 538 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("if_stt -> IF noelse\n");
		(yyval.d_var) = (yyvsp[-1].d_var);
		blank_count--;	
	}
#line 2080 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 546 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("if_stt -> IF withelse\n");
		(yyval.d_var) = (yyvsp[-1].d_var);
		blank_count--;	
	}
#line 2092 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 555 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("OPEN condition CLOSE cf_body\n");
		if((yyvsp[-2].i_var))
		{
			(yyval.d_var) = (yyvsp[0].d_var);
		}
		blank_count--;	
	}
#line 2107 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 567 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("withelse -> OPEN condition CLOSE cf_body\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	}
#line 2119 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 575 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("OPEN condition CLOSE cf_body else_part\n");
		(yyval.d_var) = (yyvsp[-1].d_var);
		blank_count--;	
	}
#line 2131 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 584 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("else_part -> ELSEIF OPEN condition CLOSE cf_body else_part\n");
		(yyval.d_var) = (yyvsp[-1].d_var);
		blank_count--;	
	 }
#line 2143 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 592 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("else_part -> ELSE cf_body\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	 }
#line 2155 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 600 "kotlin.y" /* yacc.c:1646  */
    {
		//empty
	 }
#line 2163 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 605 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank();
		blank_count++;
		printf("cf_body -> eval\n");
		(yyval.d_var) = (yyvsp[0].d_var);
		blank_count--;	
	}
#line 2175 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 614 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("com -> COMMENT\n");
		(yyval.s_var) = (yyvsp[0].s_var);
		blank_count--;	
		//printf("%s\n", $1);
	}
#line 2188 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 623 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank();
		blank_count++;
		printf("com -> COMMENT_LONG\n");
		(yyval.s_var) = (yyvsp[0].s_var);
		blank_count--;	
		//printf("%s\n", $1);
	}
#line 2201 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 633 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank();
			blank_count++;
			printf("condition -> is_condition\n");
			(yyval.i_var) = (yyvsp[0].i_var);	
			blank_count--;	
		}
#line 2213 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 641 "kotlin.y" /* yacc.c:1646  */
    {	
			Print_Blank();
			blank_count++;
			printf("condition -> condition SAME condition\n");
			if((yyvsp[-2].i_var) == (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
			blank_count--;	
		}
#line 2228 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 652 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("condition -> condition GREATER condition\n");
			if((yyvsp[-2].i_var) < (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
			blank_count--;	
		}
#line 2243 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 663 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("condition -> condition LESS condition\n");
			if((yyvsp[-2].i_var) > (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
			blank_count--;	
		}
#line 2258 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 674 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("condition -> condition E_GREATER condition\n");
			if((yyvsp[-2].i_var) <= (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
			blank_count--;	
		}
#line 2273 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 685 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("condition -> condition E_LESS condition\n");
			if((yyvsp[-2].i_var) >= (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
			blank_count--;	
		}
#line 2288 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 696 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("condition -> condition AND condition\n");
			if((yyvsp[-2].i_var) && (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
			blank_count--;	
		}
#line 2303 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 707 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("condition -> condition OR condition\n");
			if((yyvsp[-2].i_var) || (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
			blank_count--;	
		}
#line 2318 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 718 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("condition -> condition NOT_SAME condition\n");
			if((yyvsp[-2].i_var) != (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
			blank_count--;	
		}
#line 2333 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 729 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank();
			blank_count++;
			printf("condition -> cal_sent\n");
			(yyval.i_var) = (yyvsp[0].d_var);
			blank_count--;	
		}
#line 2345 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 738 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank();
			blank_count++;
			printf("is_condition -> ID IS type\n");
			//tmp_idx = Find_var_index($1, var_name);
			//tmp_data = Check_Type_Saved($1);
			//if(var_type[tmp_idx] == tmp_data)
			//	$$ = 1;
			//else
			//	$$ = 0;
			blank_count--;	
	     	}
#line 2362 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 751 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("is_condition -> ID NOT IS type\n");
			//tmp_idx = Find_var_index($1, var_name);
			//tmp_data = Check_Type_Saved($1);
			//if(var_type[tmp_idx] != tmp_data)
			//	$$ = 1;
			//else
			//	$$ = 0;
			blank_count--;	
		}
#line 2379 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 765 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank();
			blank_count++;
			printf("for_condition -> condition\n");
			(yyval.i_var) = (yyvsp[0].i_var);
			blank_count--;	
	      	}
#line 2391 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 773 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("for_condition -> factor IN factor range\n");
			(yyval.i_var) = (yyvsp[-3].d_var);
			blank_count--;	
		}
#line 2403 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 782 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("range -> DOUBLEDOT factor step_count\n");
			(yyval.d_var) = (yyvsp[-1].d_var);
			blank_count--;	
      		}
#line 2415 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 790 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("range -> DOWNTO factor step_count\n");
			(yyval.d_var) = (yyvsp[-1].d_var);
			blank_count--;	
		}
#line 2427 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 799 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank();
			blank_count++;
			printf("step_count -> STEP NUMBER\n");
			(yyval.d_var) = (yyvsp[0].d_var);
			blank_count--;	
	  	}
#line 2439 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 808 "kotlin.y" /* yacc.c:1646  */
    {	
			Print_Blank();
			blank_count++;
			printf("withelse -> ELSEIF expr withelse\n");
			(yyval.d_var) = (yyvsp[-1].d_var);
			blank_count--;	
		}
#line 2451 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 816 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("withelse -> ELSE expr\n");
			(yyval.d_var) = (yyvsp[0].d_var);
			blank_count--;	
		}
#line 2463 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 825 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("val_decl -> ID EQUAL decl_content COMMA val_decl\n");
			//tmp_data = Check_Type_Not_Saved($3);
			//tmp_idx = Var_Save($1, $3, tmp_data, var_name, data, var_type);
			//if(tmp_idx == -1)
			//	printf("Error : ID is saved already!\n\n");
			//if(tmp_idx == var_idx + 1)
			//	var_idx = tmp_idx;
			//else
			//	printf("Error : Hole in array!\n\n");
			blank_count--;	
		}
#line 2482 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 840 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("val_decl -> ID\n");
			//var_type[var_idx] = 0;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;
			blank_count--;	
		}
#line 2497 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 851 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("val_decl -> ID EQUAL decl_content\n");
			//tmp_data = Check_Type_Not_Saved($3);
			//var_type[var_idx] = tmp_data;
			//var_name[var_idx] = $1;
			//data[var_idx] = $3;
			//var_idx++;
			blank_count--;	
		}
#line 2513 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 863 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("val_decl -> ID COLUMN type EQUAL decl_content COMMA val_decl\n");
			//var_type[var_idx] = $3;
			//var_name[var_idx] = $1;
			//data[var_idx] = $5;
			//var_idx++;
			blank_count--;	
		}
#line 2528 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 874 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("val_decl -> ID COLUMN type\n");
			//var_type[var_idx] = $3;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;
			blank_count--;	
		}
#line 2543 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 885 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("val_decl -> ID COLUMN type EQUAL decl_content\n");
			//var_type[var_idx] = $3;
			//var_name[var_idx] = $1;
			//data[var_idx] = $5;
			//var_idx++;
			blank_count--;	
		}
#line 2558 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 897 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("var_decl -> ID EQUAL decl_content COMA var_decl\n");
			//var_type[var_idx] = 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = $3;
			//var_idx++;
			blank_count--;	
		}
#line 2573 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 908 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("var_decl -> ID\n");
			//var_type[var_idx] = 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;gc	
			blank_count--;	
		}
#line 2588 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 919 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("var_decl -> ID EQUAL decl_content\n");
			//var_type[var_idx] = 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = $3;
			//var_idx++;
			blank_count--;	
		}
#line 2603 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 930 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("var_decl -> ID COLUMN type EQUAL decl_content COMMA var_decl\n");
			//var_type[var_idx] = $3 + 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = $5;
			//var_idx++;
			blank_count--;	
		}
#line 2618 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 941 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("var_decl -> ID COLUMN type\n");
			//var_type[var_idx] = $3 + 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;
			blank_count--;	
		}
#line 2633 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 952 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("var_decl -> ID COLUMN type EQUAL decl_content\n");
			//var_type[var_idx] = $3 + 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = $5;
			//var_idx++;
			blank_count--;	
		}
#line 2648 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 964 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("decl_content -> cal_sent\n");
			(yyval.d_var) = (yyvsp[0].d_var);
			blank_count--;	
		}
#line 2660 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 972 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("decl_content -> ID\n");
			//tmp_idx = Find_var_index($1, var_name);
			//$$ = data[tmp_idx];
			blank_count--;	
		}
#line 2673 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 981 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("decl_content -> LIST OPEN list_content CLOSE\n");
			//double * tmp = (double*) &($3);
			//$$ = *tmp;
			blank_count--;	
		}
#line 2686 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 991 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("list_content -> STR COMMA list_content\n");
			//*($3 + tmp_idx) = $1;
			//tmp_idx++;
			(yyval.sp_var) = (yyvsp[0].sp_var);
			blank_count--;	
	    	}
#line 2700 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1001 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("list_content -> STR\n");
			//char** tmp_str = (char**)calloc(100, sizeof(char*));
			//tmp_idx = 0;
			//tmp_str[tmp_idx] = $1;
			//$$ = tmp_str;
			//tmp_idx++;
			blank_count--;	
		}
#line 2716 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1014 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("fun_call -> ID OPEN argument CLOSE\n");
			(yyval.d_var) = (yyvsp[-1].d_var);
			blank_count--;	
		}
#line 2728 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1023 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("argument -> ID argument\n");
			(yyval.d_var) = (yyvsp[0].d_var);
			blank_count--;	
		}
#line 2740 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1031 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("argument -> STR argument\n");
			(yyval.d_var) = (yyvsp[0].d_var);
			blank_count--;	
		}
#line 2752 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1039 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("argument -> NUMBER argument\n");
			(yyval.d_var) = (yyvsp[-1].d_var);
			blank_count--;	
		}
#line 2764 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1047 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank();
			blank_count++;
			printf("COMMA argument\n");
			(yyval.d_var) = (yyvsp[0].d_var);
			blank_count--;	
		}
#line 2776 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1055 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 2784 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1060 "kotlin.y" /* yacc.c:1646  */
    {}
#line 2790 "kotlin.tab.c" /* yacc.c:1646  */
    break;


#line 2794 "kotlin.tab.c" /* yacc.c:1646  */
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
#line 1061 "kotlin.y" /* yacc.c:1906  */



/* User code */
int yyerror(const char *s)
{
	return printf("%s\n", s);
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

void Print_Blank()
{
	for(int i = 0; i < blank_count; i++)
	{
		printf(" ");
	}
}
