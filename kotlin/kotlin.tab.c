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

int Check_Type_Saved(char * name);
int Check_Type_Not_Saved(double value);


#line 91 "kotlin.tab.c" /* yacc.c:339  */

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
    ID = 259,
    EOF = 260,
    STR = 261,
    IF = 262,
    FUNC = 263,
    IMPORT = 264,
    PACK = 265,
    FILE_PACK = 266,
    FILE_IMPORT = 267,
    VAL = 268,
    VAR = 269,
    ELSE = 270,
    NUL = 271,
    RETURN = 272,
    FOR = 273,
    WHILE = 274,
    WHEN = 275,
    REPLACE = 276,
    IS = 277,
    IN = 278,
    DOWNTO = 279,
    STEP = 280,
    LIST = 281,
    UNIT = 282,
    ELSEIF = 283,
    ANY = 284,
    M_OPEN = 285,
    M_CLOSE = 286,
    COMMA = 287,
    EQUAL = 288,
    E_PLUS = 289,
    E_MINUS = 290,
    E_MULT = 291,
    E_DIV = 292,
    OR = 293,
    AND = 294,
    B_OR = 295,
    B_XOR = 296,
    B_AND = 297,
    SAME = 298,
    NOT_SAME = 299,
    E_LESS = 300,
    E_GREATER = 301,
    GREATER = 302,
    LESS = 303,
    DOUBLEDOT = 304,
    L_SHIFT = 305,
    R_SHIFT = 306,
    PLUS = 307,
    MINUS = 308,
    MULT = 309,
    DIV = 310,
    COLUMN = 311,
    DOT = 312,
    NOT = 313,
    QUESTION = 314,
    ARROW = 315,
    OPEN = 316,
    CLOSE = 317,
    B_OPEN = 318,
    B_CLOSE = 319,
    QUOTE = 320,
    CALL = 321,
    STRING = 322,
    INT = 323,
    FLOAT = 324,
    DOUBLE = 325,
    CHAR = 326,
    COMMENT = 327,
    COMMENT_OPEN = 328,
    COMMENT_CLOSE = 329
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "kotlin.y" /* yacc.c:355  */
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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   282

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  198

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   114,   114,   114,   116,   118,   122,   127,   131,   135,
     139,   143,   147,   151,   155,   160,   164,   168,   173,   177,
     181,   186,   190,   194,   199,   203,   208,   212,   217,   221,
     226,   230,   234,   238,   242,   246,   250,   255,   260,   264,
     269,   273,   277,   281,   286,   291,   296,   301,   305,   310,
     315,   319,   324,   332,   335,   339,   342,   345,   350,   364,
     368,   375,   382,   389,   396,   403,   410,   417,   424,   429,
     438,   448,   452,   457,   461,   466,   471,   475,   480,   491,
     498,   506,   513,   520,   528,   535,   542,   549,   556,   563,
     571,   575,   580,   586,   592,   602
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "ID", "EOF", "STR", "IF",
  "FUNC", "IMPORT", "PACK", "FILE_PACK", "FILE_IMPORT", "VAL", "VAR",
  "ELSE", "NUL", "RETURN", "FOR", "WHILE", "WHEN", "REPLACE", "IS", "IN",
  "DOWNTO", "STEP", "LIST", "UNIT", "ELSEIF", "ANY", "M_OPEN", "M_CLOSE",
  "COMMA", "EQUAL", "E_PLUS", "E_MINUS", "E_MULT", "E_DIV", "OR", "AND",
  "B_OR", "B_XOR", "B_AND", "SAME", "NOT_SAME", "E_LESS", "E_GREATER",
  "GREATER", "LESS", "DOUBLEDOT", "L_SHIFT", "R_SHIFT", "PLUS", "MINUS",
  "MULT", "DIV", "COLUMN", "DOT", "NOT", "QUESTION", "ARROW", "OPEN",
  "CLOSE", "B_OPEN", "B_CLOSE", "QUOTE", "CALL", "STRING", "INT", "FLOAT",
  "DOUBLE", "CHAR", "COMMENT", "COMMENT_OPEN", "COMMENT_CLOSE", "$accept",
  "goal", "$@1", "eval", "expr", "cal_sent", "term", "signed_factor",
  "factor", "param", "type", "fun_stt", "ret_type", "fun_body",
  "while_stt", "for_stt", "loop_body", "when_body", "when_stt", "if_stt",
  "noelse", "withelse", "else_part", "cf_body", "condition",
  "is_condition", "for_condition", "range", "step_count", "val_decl",
  "var_decl", "decl_content", "list_content", "epsilone", YY_NULLPTR
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
     325,   326,   327,   328,   329
};
# endif

#define YYPACT_NINF -112

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-112)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      93,  -112,  -112,    77,    13,    11,    39,    41,  -112,    15,
      49,    59,     4,     4,    28,   122,  -112,   152,    97,   -29,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,   170,   170,    30,
    -112,  -112,    74,    93,     5,  -112,     8,  -112,    30,    30,
     133,  -112,  -112,    46,  -112,  -112,  -112,    28,    28,    28,
      28,  -112,   106,   -16,    97,    80,  -112,   135,  -112,    33,
     124,    33,   124,   121,   211,    85,   163,    96,  -112,   -29,
     -29,  -112,  -112,    30,  -112,   124,   140,    30,    30,    30,
      30,    30,    30,    30,    30,   170,   113,   123,   178,  -112,
     136,    97,   164,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
     165,   167,   181,     4,   185,   194,   196,   189,  -112,   124,
     173,   220,   134,   134,  -112,  -112,  -112,  -112,  -112,    87,
     124,   144,   191,   223,    39,    33,    41,    33,   -10,   170,
     170,   170,   170,  -112,   170,   169,  -112,  -112,   135,   124,
      57,    93,   208,   179,  -112,   210,  -112,   221,     4,     4,
    -112,  -112,   229,   230,   192,   238,  -112,    87,  -112,    30,
     239,   213,   170,    28,  -112,  -112,  -112,   223,  -112,    39,
      41,   245,   245,  -112,  -112,   267,  -112,   200,  -112,  -112,
      -7,    97,  -112,  -112,  -112,   271,  -112,  -112,   170,   170,
     170,  -112,  -112,  -112,    87,   244,  -112,  -112
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    24,    25,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     4,     0,    13,    17,
      20,    23,    14,     8,     7,    10,     9,     0,     0,     0,
      50,    51,     0,     0,    79,    12,    85,    11,     0,     0,
       0,    21,    22,     0,     1,     6,     5,     0,     0,     0,
       0,    77,     0,    25,    68,     0,    59,     0,     2,     0,
       0,     0,     0,    23,    71,     0,     0,     0,    26,    15,
      16,    18,    19,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    90,    80,    35,    36,    33,    30,    31,    32,    34,
      82,    86,    88,     0,     0,     0,     0,     0,    69,     0,
      66,    65,    60,    67,    64,    63,    61,    62,    58,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,     0,    70,     0,     0,    54,    57,    29,     0,
      95,     0,    94,     0,    78,    83,    84,    89,     0,     0,
      72,    46,     0,     0,     0,     0,    48,    53,    56,     0,
       0,    38,     0,     0,    37,    43,     3,     0,    92,     0,
       0,     0,     0,    45,    44,     0,    49,     0,    28,    39,
       0,    42,    93,    81,    87,     0,    74,    73,    95,     0,
       0,    41,    75,    47,    95,     0,    55,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -112,   -24,  -112,     2,   -27,   -11,    82,   126,    -8,   138,
     -46,  -112,  -112,  -112,  -112,  -112,   147,    90,  -112,  -112,
    -112,   227,    86,  -111,   -26,  -112,  -112,  -112,   109,  -109,
     -86,   -50,   115,   -52
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    88,   118,    17,    18,    19,    20,    21,    87,
     100,    22,   140,   164,    23,    24,   152,   155,    25,    26,
      30,    31,   136,   119,    55,    56,    65,   150,   186,    35,
      37,    92,   143,   137
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    52,    16,    43,    41,    42,    75,     1,     2,    58,
     190,   101,    64,    66,   148,   144,   102,    32,    54,    46,
       8,   157,    33,   158,   191,    49,    50,    54,    54,   108,
      63,     1,     2,     1,    53,    16,     1,    89,    59,   149,
     146,    61,    76,    34,     8,    36,     8,   107,    91,     8,
      91,   110,   111,   112,   113,   114,   115,   116,   117,    90,
     183,    60,    54,   133,    62,    14,    54,    54,    54,    54,
      54,    54,    54,    54,   138,   145,    38,   147,   194,   156,
      12,    13,    12,    13,   184,    12,    13,   162,   165,    14,
     163,    14,    27,   161,    14,   128,     1,     2,    47,    48,
       3,     4,   134,     5,   154,    28,     6,     7,    68,     8,
      39,     9,    10,    11,    91,   135,    91,   166,    77,    78,
      40,    27,    44,    79,    80,    81,    82,    83,    84,    69,
      70,   151,   151,   177,    28,    57,   156,    67,    29,    86,
     171,   172,    85,    16,   103,    12,    13,   104,    54,    47,
      48,    93,   181,    94,    14,     1,     2,    45,   106,     3,
       4,   154,   109,   195,   180,     6,     7,    73,     8,   120,
       9,    10,    11,     1,     2,    71,    72,     3,     4,    81,
      82,    83,    84,     6,     7,   121,     8,   122,     9,    10,
      11,    95,    96,    97,    98,    99,   124,   123,   125,   126,
     139,    77,    78,   141,    12,    13,    79,    80,    81,    82,
      83,    84,    78,    14,   127,   129,    79,    80,    81,    82,
      83,    84,    12,    13,   130,   105,   131,    77,    78,   142,
     159,    14,    79,    80,    81,    82,    83,    84,    77,    78,
     167,   168,   169,    79,    80,    81,    82,    83,    84,    77,
      78,   132,   175,   170,    79,    80,    81,    82,    83,    84,
     173,   174,   189,    79,    80,    81,    82,    83,    84,   176,
     185,   178,   179,   188,   192,   197,   160,   153,   193,    74,
     196,   187,   182
};

static const yytype_uint8 yycheck[] =
{
      27,    28,     0,    14,    12,    13,    22,     3,     4,    33,
      17,    61,    38,    39,    24,   124,    62,     4,    29,    17,
      16,   132,    11,   134,    31,    54,    55,    38,    39,    75,
      38,     3,     4,     3,     4,    33,     3,     4,    33,    49,
     126,    33,    58,     4,    16,     4,    16,    73,    59,    16,
      61,    77,    78,    79,    80,    81,    82,    83,    84,    26,
     169,    56,    73,   109,    56,    61,    77,    78,    79,    80,
      81,    82,    83,    84,   120,   125,    61,   127,   189,   131,
      52,    53,    52,    53,   170,    52,    53,    30,   140,    61,
      33,    61,    15,   139,    61,   103,     3,     4,    52,    53,
       7,     8,    15,    10,   131,    28,    13,    14,    62,    16,
      61,    18,    19,    20,   125,    28,   127,   141,    38,    39,
      61,    15,     0,    43,    44,    45,    46,    47,    48,    47,
      48,   129,   130,   159,    28,    61,   188,     4,    61,     4,
     148,   149,    62,   141,    23,    52,    53,    62,   159,    52,
      53,    27,   163,    29,    61,     3,     4,     5,    62,     7,
       8,   188,    22,   190,   162,    13,    14,    61,    16,    56,
      18,    19,    20,     3,     4,    49,    50,     7,     8,    45,
      46,    47,    48,    13,    14,    62,    16,     9,    18,    19,
      20,    67,    68,    69,    70,    71,    32,    61,    33,    32,
      56,    38,    39,    12,    52,    53,    43,    44,    45,    46,
      47,    48,    39,    61,    33,    30,    43,    44,    45,    46,
      47,    48,    52,    53,    30,    62,    30,    38,    39,     6,
      61,    61,    43,    44,    45,    46,    47,    48,    38,    39,
      32,    62,    32,    43,    44,    45,    46,    47,    48,    38,
      39,    62,    60,    32,    43,    44,    45,    46,    47,    48,
      31,    31,    62,    43,    44,    45,    46,    47,    48,    31,
      25,    32,    59,     6,     3,    31,   138,   130,   188,    52,
     194,   172,   167
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     7,     8,    10,    13,    14,    16,    18,
      19,    20,    52,    53,    61,    76,    78,    79,    80,    81,
      82,    83,    86,    89,    90,    93,    94,    15,    28,    61,
      95,    96,     4,    11,     4,   104,     4,   105,    61,    61,
      61,    83,    83,    80,     0,     5,    78,    52,    53,    54,
      55,    79,    79,     4,    80,    99,   100,    61,    76,    33,
      56,    33,    56,    83,    99,   101,    99,     4,    62,    81,
      81,    82,    82,    61,    96,    22,    58,    38,    39,    43,
      44,    45,    46,    47,    48,    62,     4,    84,    77,     4,
      26,    80,   106,    27,    29,    67,    68,    69,    70,    71,
      85,   106,    85,    23,    62,    62,    62,    99,    85,    22,
      99,    99,    99,    99,    99,    99,    99,    99,    78,    98,
      56,    62,     9,    61,    32,    33,    32,    33,    83,    30,
      30,    30,    62,    85,    15,    28,    97,   108,    85,    56,
      87,    12,     6,   107,   104,   106,   105,   106,    24,    49,
     102,    78,    91,    91,    79,    92,   108,    98,    98,    61,
      84,    85,    30,    33,    88,   108,    76,    32,    62,    32,
      32,    83,    83,    31,    31,    60,    31,    99,    32,    59,
      78,    80,   107,   104,   105,    25,   103,   103,     6,    62,
      17,    31,     3,    92,    98,    79,    97,    31
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    77,    76,    76,    78,    78,    79,    79,    79,
      79,    79,    79,    79,    79,    80,    80,    80,    81,    81,
      81,    82,    82,    82,    83,    83,    83,    83,    84,    84,
      85,    85,    85,    85,    85,    85,    85,    86,    87,    87,
      88,    88,    88,    88,    89,    90,    91,    92,    92,    93,
      94,    94,    95,    96,    96,    97,    97,    97,    98,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   100,
     100,   101,   101,   102,   102,   103,    96,    96,   104,   104,
     104,   104,   104,   104,   105,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   108
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     7,     1,     2,     2,     1,     1,     1,
       1,     2,     2,     1,     1,     3,     3,     1,     3,     3,
       1,     2,     2,     1,     1,     1,     3,     1,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     7,     2,     3,
       5,     3,     2,     1,     7,     7,     1,     4,     1,     7,
       2,     2,     4,     4,     5,     6,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       4,     1,     4,     3,     3,     2,     3,     2,     5,     1,
       3,     7,     3,     5,     5,     1,     3,     7,     3,     5,
       1,     1,     4,     3,     1,     0
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
#line 114 "kotlin.y" /* yacc.c:1646  */
    {}
#line 1465 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 115 "kotlin.y" /* yacc.c:1646  */
    {}
#line 1471 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 116 "kotlin.y" /* yacc.c:1646  */
    {}
#line 1477 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 119 "kotlin.y" /* yacc.c:1646  */
    {
		 (yyval.d_var) = (yyvsp[-1].d_var); 
    	}
#line 1485 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 123 "kotlin.y" /* yacc.c:1646  */
    {
		 (yyval.d_var) = (yyvsp[-1].d_var);
	}
#line 1493 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 128 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1501 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 132 "kotlin.y" /* yacc.c:1646  */
    {
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1509 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 136 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1517 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 140 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1525 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 144 "kotlin.y" /* yacc.c:1646  */
    {
		(yyval.d_var) = (yyvsp[-1].d_var);
	}
#line 1533 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 148 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = (yyvsp[-1].d_var);	
	}
#line 1541 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 152 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1549 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 156 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1557 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 161 "kotlin.y" /* yacc.c:1646  */
    {	
		(yyval.d_var) = (yyvsp[-2].d_var) + (yyvsp[0].d_var);
	  }
#line 1565 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 165 "kotlin.y" /* yacc.c:1646  */
    {
		(yyval.d_var) = (yyvsp[-2].d_var) - (yyvsp[0].d_var);
	  }
#line 1573 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 169 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = (yyvsp[0].d_var);
	  }
#line 1581 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 174 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = (yyvsp[-2].d_var) * (yyvsp[0].d_var);
    	}
#line 1589 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 178 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = (yyvsp[-2].d_var) / (yyvsp[0].d_var);
	}
#line 1597 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 182 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1605 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 187 "kotlin.y" /* yacc.c:1646  */
    { 
			(yyval.d_var) = (yyvsp[0].d_var);
	     	}
#line 1613 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 191 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = -1 * (yyvsp[0].d_var);
	}
#line 1621 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 195 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1629 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 200 "kotlin.y" /* yacc.c:1646  */
    {
		(yyval.d_var) = (yyvsp[0].d_var);
        }
#line 1637 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 204 "kotlin.y" /* yacc.c:1646  */
    { 
		var_idx = Find_var_index((yyvsp[0].s_var), var_name);
		(yyval.d_var) = data[var_idx];
	}
#line 1646 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 209 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = (yyvsp[-1].d_var);
	}
#line 1654 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 213 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = 0;
	}
#line 1662 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 218 "kotlin.y" /* yacc.c:1646  */
    { 
	
     	}
#line 1670 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 222 "kotlin.y" /* yacc.c:1646  */
    {
		
	}
#line 1678 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 227 "kotlin.y" /* yacc.c:1646  */
    {
		(yyval.d_var) = 1;
    	}
#line 1686 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 231 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = 2;
	}
#line 1694 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 235 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = 3;
	}
#line 1702 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 239 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = 4;
	}
#line 1710 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 243 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = 5;
	}
#line 1718 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 247 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = 6;
	}
#line 1726 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 251 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = 7;
	}
#line 1734 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 256 "kotlin.y" /* yacc.c:1646  */
    {
		
      	}
#line 1742 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 261 "kotlin.y" /* yacc.c:1646  */
    {
	 
	}
#line 1750 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 265 "kotlin.y" /* yacc.c:1646  */
    {
		
	}
#line 1758 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 270 "kotlin.y" /* yacc.c:1646  */
    {
		(yyval.d_var) = (yyvsp[-2].d_var);
	}
#line 1766 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 274 "kotlin.y" /* yacc.c:1646  */
    { 
		(yyval.d_var) = (yyvsp[-1].d_var);
	}
#line 1774 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 278 "kotlin.y" /* yacc.c:1646  */
    {
		(yyval.d_var) = (yyvsp[0].d_var);	
	}
#line 1782 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 282 "kotlin.y" /* yacc.c:1646  */
    {
		//empty	
	}
#line 1790 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 287 "kotlin.y" /* yacc.c:1646  */
    {
			
	 }
#line 1798 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 292 "kotlin.y" /* yacc.c:1646  */
    {
		
      	 }
#line 1806 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 297 "kotlin.y" /* yacc.c:1646  */
    {
		
	 }
#line 1814 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 302 "kotlin.y" /* yacc.c:1646  */
    {
		
	}
#line 1822 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 306 "kotlin.y" /* yacc.c:1646  */
    {
		//empty
	}
#line 1830 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 311 "kotlin.y" /* yacc.c:1646  */
    {
		
	}
#line 1838 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 316 "kotlin.y" /* yacc.c:1646  */
    {
		(yyval.d_var) = (yyvsp[-1].d_var);
	}
#line 1846 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 320 "kotlin.y" /* yacc.c:1646  */
    {
		(yyval.d_var) = (yyvsp[-1].d_var);
	}
#line 1854 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 325 "kotlin.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].i_var))
		{
			(yyval.d_var) = (yyvsp[0].d_var);
		}
	}
#line 1865 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 333 "kotlin.y" /* yacc.c:1646  */
    {
	}
#line 1872 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 336 "kotlin.y" /* yacc.c:1646  */
    {
	}
#line 1879 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 340 "kotlin.y" /* yacc.c:1646  */
    {
	 }
#line 1886 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 343 "kotlin.y" /* yacc.c:1646  */
    {
	 }
#line 1893 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 346 "kotlin.y" /* yacc.c:1646  */
    {
		//empty
	 }
#line 1901 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 351 "kotlin.y" /* yacc.c:1646  */
    {
	
	}
#line 1909 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 365 "kotlin.y" /* yacc.c:1646  */
    { 
			(yyval.i_var) = (yyvsp[0].i_var);
		}
#line 1917 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 369 "kotlin.y" /* yacc.c:1646  */
    { 
			if((yyvsp[-2].i_var) == (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
		}
#line 1928 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 376 "kotlin.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].i_var) < (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
		}
#line 1939 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 383 "kotlin.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].i_var) > (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
		}
#line 1950 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 390 "kotlin.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].i_var) <= (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
		}
#line 1961 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 397 "kotlin.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].i_var) >= (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
		}
#line 1972 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 404 "kotlin.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].i_var) && (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
		}
#line 1983 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 411 "kotlin.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].i_var) || (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
		}
#line 1994 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 418 "kotlin.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].i_var) != (yyvsp[0].i_var))
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
		}
#line 2005 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 425 "kotlin.y" /* yacc.c:1646  */
    { 
			(yyval.i_var) = (yyvsp[0].d_var);
		}
#line 2013 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 430 "kotlin.y" /* yacc.c:1646  */
    { 
			tmp_idx = Find_var_index((yyvsp[-2].s_var), var_name);
			tmp_data = Check_Type_Saved((yyvsp[-2].s_var));
			if(var_type[tmp_idx] == tmp_data)
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
	     	}
#line 2026 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 439 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_idx = Find_var_index((yyvsp[-3].s_var), var_name);
			tmp_data = Check_Type_Saved((yyvsp[-3].s_var));
			if(var_type[tmp_idx] != tmp_data)
				(yyval.i_var) = 1;
			else
				(yyval.i_var) = 0;
		}
#line 2039 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 449 "kotlin.y" /* yacc.c:1646  */
    { 
			(yyval.i_var) = (yyvsp[0].i_var);
	      	}
#line 2047 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 453 "kotlin.y" /* yacc.c:1646  */
    {
			
		}
#line 2055 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 458 "kotlin.y" /* yacc.c:1646  */
    {
			
      		}
#line 2063 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 462 "kotlin.y" /* yacc.c:1646  */
    {
			
		}
#line 2071 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 467 "kotlin.y" /* yacc.c:1646  */
    { 
			(yyval.d_var) = (yyvsp[0].d_var);
	  	}
#line 2079 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 472 "kotlin.y" /* yacc.c:1646  */
    {
			
		}
#line 2087 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 476 "kotlin.y" /* yacc.c:1646  */
    {
			
		}
#line 2095 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 481 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = Check_Type_Not_Saved((yyvsp[-2].d_var));
			tmp_idx = Var_Save((yyvsp[-4].s_var), (yyvsp[-2].d_var), tmp_data, var_name, data, var_type);
			if(tmp_idx == -1)
				printf("Error : ID is saved already!\n");
			if(tmp_idx == var_idx + 1)
				var_idx = tmp_idx;
			else
				printf("Error : Hole in array!\n");
		}
#line 2110 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 492 "kotlin.y" /* yacc.c:1646  */
    {
			var_type[var_idx] = 0;
			var_name[var_idx] = (yyvsp[0].s_var);
			data[var_idx] = -1;
			var_idx++;
		}
#line 2121 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 499 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = Check_Type_Not_Saved((yyvsp[0].d_var));
			var_type[var_idx] = tmp_data;
			var_name[var_idx] = (yyvsp[-2].s_var);
			data[var_idx] = (yyvsp[0].d_var);
			var_idx++;
		}
#line 2133 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 507 "kotlin.y" /* yacc.c:1646  */
    {
			var_type[var_idx] = (yyvsp[-4].d_var);
			var_name[var_idx] = (yyvsp[-6].s_var);
			data[var_idx] = (yyvsp[-2].d_var);
			var_idx++;
		}
#line 2144 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 514 "kotlin.y" /* yacc.c:1646  */
    {
			var_type[var_idx] = (yyvsp[0].d_var);
			var_name[var_idx] = (yyvsp[-2].s_var);
			data[var_idx] = -1;
			var_idx++;
		}
#line 2155 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 521 "kotlin.y" /* yacc.c:1646  */
    {
			var_type[var_idx] = (yyvsp[-2].d_var);
			var_name[var_idx] = (yyvsp[-4].s_var);
			data[var_idx] = (yyvsp[0].d_var);
			var_idx++;
		}
#line 2166 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 529 "kotlin.y" /* yacc.c:1646  */
    {
			var_type[var_idx] = 10;
			var_name[var_idx] = (yyvsp[-4].s_var);
			data[var_idx] = (yyvsp[-2].d_var);
			var_idx++;
		}
#line 2177 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 536 "kotlin.y" /* yacc.c:1646  */
    {
			var_type[var_idx] = 10;
			var_name[var_idx] = (yyvsp[0].s_var);
			data[var_idx] = -1;
			var_idx++;
		}
#line 2188 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 543 "kotlin.y" /* yacc.c:1646  */
    {
			var_type[var_idx] = 10;
			var_name[var_idx] = (yyvsp[-2].s_var);
			data[var_idx] = (yyvsp[0].d_var);
			var_idx++;
		}
#line 2199 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 550 "kotlin.y" /* yacc.c:1646  */
    {
			var_type[var_idx] = (yyvsp[-4].d_var) + 10;
			var_name[var_idx] = (yyvsp[-6].s_var);
			data[var_idx] = (yyvsp[-2].d_var);
			var_idx++;
		}
#line 2210 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 557 "kotlin.y" /* yacc.c:1646  */
    {
			var_type[var_idx] = (yyvsp[0].d_var) + 10;
			var_name[var_idx] = (yyvsp[-2].s_var);
			data[var_idx] = -1;
			var_idx++;
		}
#line 2221 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 564 "kotlin.y" /* yacc.c:1646  */
    {
			var_type[var_idx] = (yyvsp[-2].d_var) + 10;
			var_name[var_idx] = (yyvsp[-4].s_var);
			data[var_idx] = (yyvsp[0].d_var);
			var_idx++;
		}
#line 2232 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 572 "kotlin.y" /* yacc.c:1646  */
    {
			(yyval.d_var) = (yyvsp[0].d_var);
		}
#line 2240 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 576 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_idx = Find_var_index((yyvsp[0].s_var), var_name);
			(yyval.d_var) = data[tmp_idx];
		}
#line 2249 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 581 "kotlin.y" /* yacc.c:1646  */
    {
			double * tmp = (double*) &((yyvsp[-1].sp_var));
			(yyval.d_var) = *tmp;
		}
#line 2258 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 587 "kotlin.y" /* yacc.c:1646  */
    {
			*((yyvsp[0].sp_var) + tmp_idx) = (yyvsp[-2].s_var);
			tmp_idx++;
			(yyval.sp_var) = (yyvsp[0].sp_var);
	    	}
#line 2268 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 593 "kotlin.y" /* yacc.c:1646  */
    {
			char** tmp_str = (char**)calloc(100, sizeof(char*));
			tmp_idx = 0;
			tmp_str[tmp_idx] = (yyvsp[0].s_var);
			(yyval.sp_var) = tmp_str;
			tmp_idx++;
		}
#line 2280 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 602 "kotlin.y" /* yacc.c:1646  */
    {}
#line 2286 "kotlin.tab.c" /* yacc.c:1646  */
    break;


#line 2290 "kotlin.tab.c" /* yacc.c:1646  */
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
#line 603 "kotlin.y" /* yacc.c:1906  */



/* User code */
int yyerror(const char *s)
{
	return printf("%s\n", s);
}




