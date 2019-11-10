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
//Type value - 0 : Not_defined 1 : INT, 2 : LONG, 3 : FLOAT, 4 : DOUBLE, 5 : STRING, 6 : CHAR, const : +10
int var_type[100] = { 0 }; 
//Type value - 0 : Not_defined 1 : INT, 2 : LONG, 3 : FLOAT, 4 : DOUBLE, 5 : STRING, 6 : CHAR, 7 : UNIT, 8 : ANY, const : +10, question : +20
int fun_type[100] = { 0 };
int var_idx = 0, fun_idx = 0, err = 0, tmp_data, tmp_idx;

int Check_Type_Saved(char * name);
int Check_Type_Not_Saved(double value);
void Print_Blank(double n);


#line 92 "kotlin.tab.c" /* yacc.c:339  */

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
    LONG = 281,
    DOUBLE = 282,
    STRING = 283,
    CHAR = 284,
    ANY = 285,
    UNIT = 286,
    MAIN = 287,
    ID = 288,
    COMMENT = 289,
    COMMENT_LONG = 290,
    M_OPEN = 291,
    M_CLOSE = 292,
    COMMA = 293,
    ARROW = 294,
    EQUAL = 295,
    E_PLUS = 296,
    E_MINUS = 297,
    E_MULT = 298,
    E_DIV = 299,
    OR = 300,
    AND = 301,
    B_OR = 302,
    B_XOR = 303,
    B_AND = 304,
    SAME = 305,
    NOT_SAME = 306,
    DOUBLEDOT = 307,
    E_LESS = 308,
    E_GREATER = 309,
    GREATER = 310,
    LESS = 311,
    L_SHIFT = 312,
    R_SHIFT = 313,
    PLUS = 314,
    MINUS = 315,
    MULT = 316,
    DIV = 317,
    INC = 318,
    DEC = 319,
    COLUMN = 320,
    DOT = 321,
    NOT = 322,
    QUESTION = 323,
    OPEN = 324,
    CLOSE = 325,
    B_OPEN = 326,
    B_CLOSE = 327,
    CALL = 328
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "kotlin.y" /* yacc.c:355  */
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
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   573

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  283

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   128,   128,   134,   140,   146,   153,   163,   169,   181,
     187,   193,   199,   205,   211,   217,   223,   230,   237,   247,
     253,   258,   264,   270,   276,   282,   289,   297,   304,   311,
     318,   325,   332,   339,   345,   351,   358,   364,   372,   380,
     388,   396,   404,   412,   420,   426,   432,   439,   446,   452,
     457,   463,   470,   477,   484,   491,   498,   505,   513,   523,
     530,   537,   542,   549,   555,   561,   567,   573,   579,   584,
     592,   600,   607,   614,   620,   628,   633,   640,   647,   653,
     659,   667,   675,   681,   688,   694,   701,   713,   720,   729,
     737,   743,   748,   754,   761,   768,   774,   781,   788,   796,
     802,   813,   824,   835,   846,   857,   868,   879,   890,   896,
     904,   913,   925,   938,   945,   952,   957,   963,   968,   975,
     982,   997,  1007,  1018,  1030,  1040,  1052,  1063,  1073,  1083,
    1095,  1105,  1117,  1123,  1131,  1140,  1148,  1160,  1168,  1175,
    1181,  1188,  1193,  1199,  1205
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
  "FLOAT", "LONG", "DOUBLE", "STRING", "CHAR", "ANY", "UNIT", "MAIN", "ID",
  "COMMENT", "COMMENT_LONG", "M_OPEN", "M_CLOSE", "COMMA", "ARROW",
  "EQUAL", "E_PLUS", "E_MINUS", "E_MULT", "E_DIV", "OR", "AND", "B_OR",
  "B_XOR", "B_AND", "SAME", "NOT_SAME", "DOUBLEDOT", "E_LESS", "E_GREATER",
  "GREATER", "LESS", "L_SHIFT", "R_SHIFT", "PLUS", "MINUS", "MULT", "DIV",
  "INC", "DEC", "COLUMN", "DOT", "NOT", "QUESTION", "OPEN", "CLOSE",
  "B_OPEN", "B_CLOSE", "CALL", "$accept", "goal", "start", "eval", "expr",
  "assign", "main_fun", "cal_sent", "term", "signed_factor", "factor",
  "param", "type", "fun_stt", "ret_type", "fun_body", "while_stt",
  "for_stt", "loop_body", "when_body", "when_id", "when_condition",
  "when_stt", "if_stt", "noelse", "withelse", "else_part", "cf", "cf_body",
  "com", "condition", "is_condition", "range", "step_count", "val_decl",
  "var_decl", "decl_content", "list_content", "fun_call", "argument",
  "mul_argument", "epsilone", YY_NULLPTR
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
     325,   326,   327,   328
};
# endif

#define YYPACT_NINF -184

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-184)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     230,  -184,     3,    -9,     9,    37,    24,     5,  -184,    17,
      20,   -20,   421,  -184,  -184,    52,    52,    85,   107,     8,
     151,  -184,  -184,   304,   304,   -12,    33,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,   230,    88,    97,
     -14,  -184,     4,  -184,   230,   337,   337,    89,  -184,  -184,
      89,    89,   362,   141,   172,  -184,  -184,  -184,  -184,  -184,
    -184,   146,   376,     8,   149,  -184,  -184,  -184,  -184,    31,
    -184,  -184,  -184,     8,     8,     8,     8,  -184,   114,   170,
     265,   536,   265,   536,  -184,   184,    19,  -184,   106,   -12,
      -5,   443,  -184,   455,   473,  -184,   180,   536,   201,   -12,
     195,   -11,   182,  -184,   181,  -184,   173,   219,   105,   219,
     189,  -184,   -12,  -184,    33,    33,  -184,  -184,    83,   196,
     190,  -184,  -184,   193,   -12,   228,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,   227,   233,   232,    89,  -184,   536,
     254,     8,   257,    89,    89,    89,    89,    89,    89,    89,
      89,   267,   244,   246,   390,  -184,   536,  -184,     8,   390,
     266,   390,   251,   170,   376,  -184,  -184,  -184,  -184,  -184,
     304,   374,  -184,  -184,   536,   226,   288,     9,   265,    37,
     265,   485,  -184,   536,    96,     8,   199,   306,   171,   171,
    -184,  -184,  -184,  -184,   304,   280,   122,  -184,   304,   304,
    -184,  -184,    96,   362,     8,   362,   362,   234,  -184,     6,
     -12,  -184,  -184,   258,   536,    83,  -184,   259,   235,  -184,
     268,  -184,   271,   267,  -184,     8,     8,  -184,  -184,    96,
     273,     8,   245,   267,  -184,  -184,  -184,   279,   282,  -184,
    -184,    96,  -184,   286,  -184,   414,  -184,   170,   249,  -184,
     288,  -184,     9,    37,   122,    -2,    -2,  -184,  -184,   -12,
      89,  -184,  -184,  -184,  -184,  -184,  -184,    16,  -184,  -184,
    -184,  -184,  -184,    52,  -184,  -184,  -184,   503,  -184,  -184,
     267,   122,  -184
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     144,    36,     0,     0,     0,     0,     0,     0,    46,     0,
       0,     0,    37,    97,    98,     0,     0,     0,     0,     0,
       0,     2,     5,     7,   144,    15,    29,    32,    35,    16,
      10,     9,    12,    11,    17,    45,    20,   144,     0,     0,
     121,    14,   127,    13,   144,   144,   144,     0,    84,    85,
       0,     0,   144,     0,    21,    22,    23,    24,    25,    40,
      41,     0,   144,     0,    37,    33,    34,    42,    43,     0,
       1,     6,     8,     0,     0,     0,     0,     4,     0,   144,
       0,     0,     0,     0,     3,     0,     0,   119,    37,   108,
      32,     0,    99,     0,     0,    76,     0,     0,     0,    77,
       0,     0,     0,    75,     0,    19,    39,   144,   144,    45,
       0,   141,    18,    44,    27,    28,    30,    31,   144,     0,
       0,    49,   134,     0,   132,   122,    50,    52,    51,    53,
      54,    55,    57,    56,   124,   128,   130,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,    78,     0,    83,     0,     0,
       0,     0,     0,   144,   144,   139,   143,   138,   140,   137,
     144,     0,    26,    68,     0,   144,     0,     0,     0,     0,
       0,     0,   111,     0,   144,     0,   106,   105,   100,   107,
     104,   103,   101,   102,   144,    96,    86,    93,   144,   144,
      73,    79,   144,   144,     0,   144,   144,     0,   142,     0,
      65,    67,    66,    48,     0,   144,    61,   136,     0,   120,
     125,   126,   131,   144,   112,     0,     0,   109,   115,   144,
       0,    95,     0,   144,    88,    91,    71,     0,     0,    80,
      72,   144,    74,     0,    38,     0,    64,   144,    59,    58,
       0,   133,     0,     0,    87,   144,   144,   110,    92,    94,
       0,    90,    70,    69,    81,    82,    63,     0,    47,    60,
     135,   123,   129,     0,   114,   117,   113,     0,    62,   116,
     144,   144,    89
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -184,  -184,   123,    36,   100,  -184,  -184,   -17,   109,   -37,
     -15,  -160,   -78,  -184,  -184,   117,  -184,  -184,   134,    -4,
      46,  -184,   164,   176,  -184,   255,    61,  -183,   155,  -184,
      48,  -184,  -177,    87,  -173,  -172,   -76,   108,   -50,   186,
     102,   -25
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,   195,    23,    63,    24,    25,    26,    27,
      28,   120,   134,    29,   215,   172,    30,    31,   237,   100,
     101,   102,    32,    33,    48,    49,   234,   196,   197,    34,
      91,    92,   227,   274,    41,    43,   125,   218,    35,   110,
     165,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      65,    66,    69,   207,   219,   136,   135,   221,    37,   158,
      90,     1,   109,    90,    90,   141,    52,    45,    46,   155,
     273,   245,     8,    38,    39,   239,    80,   103,   159,    44,
      89,    45,    46,    89,    89,    99,    22,   111,   116,   117,
     254,    64,    40,   246,    82,   108,   112,    73,    74,    53,
     261,    81,   257,   278,   121,     1,   160,    73,    74,    71,
      72,   182,   142,   124,   264,   124,     8,    15,    16,    83,
      42,    17,    18,    22,    47,    73,    74,    19,   201,   271,
      22,   272,   166,   166,   166,    64,    50,   268,   137,    51,
      73,    74,     1,   173,    75,    76,   213,   281,    93,    94,
      90,   113,   220,     8,   222,   224,    90,    90,    90,    90,
      90,    90,    90,    90,   109,    17,    18,   225,    67,   170,
      89,    19,    88,   171,   184,   139,    89,    89,    89,    89,
      89,    89,    89,    89,   232,   233,   248,    99,   121,   111,
      68,   202,    99,   164,    99,    86,    87,   108,    15,    16,
     216,    70,    17,    18,   210,    73,    74,    78,    19,   228,
      77,   124,   226,   124,    73,    74,    79,    84,   229,    59,
      60,   235,    61,   140,   104,    62,   105,   228,   103,   106,
     103,   103,   114,   115,   118,   181,    99,   241,    99,    99,
     173,   186,   187,   188,   189,   190,   191,   192,   193,   240,
     200,   242,   243,   119,   228,   203,   209,   205,   255,   256,
     167,   168,    59,    60,   259,    61,   228,    39,    62,   154,
     156,   161,   121,    90,   147,   148,   149,   150,   267,   235,
     275,   275,   157,     1,   236,   236,     2,     3,     4,     5,
       6,     7,   163,    89,     8,   144,     9,    10,    11,   145,
     146,   162,   147,   148,   149,   150,   235,   164,   279,   169,
     175,   174,   176,    12,    13,    14,   177,   178,     1,   122,
       1,   179,   180,   183,     3,     4,     5,   185,     7,     8,
     198,     8,   199,     9,    10,    11,   204,   206,   123,    15,
      16,   214,   217,    17,    18,   231,   247,   250,    64,    19,
      12,    13,    14,   194,   244,   251,   252,     1,   277,   253,
     258,     3,     4,     5,   260,     7,   262,   269,     8,   263,
       9,    10,    11,   265,    15,    16,    15,    16,    17,    18,
      17,    18,   249,   238,    19,   211,    19,    12,    13,    14,
       1,   138,   282,   276,    85,     4,     5,   212,     7,   230,
     208,     8,     0,     9,    10,    11,   145,   146,   270,   147,
     148,   149,   150,    15,    16,     1,    95,    17,    18,     0,
      12,    13,    14,    19,     0,    96,     8,     1,     0,     1,
     107,    97,     0,     0,     0,     7,     0,     0,     8,     0,
       8,     0,    11,     1,    95,    64,    15,    16,     0,     0,
      17,    18,     0,     0,     8,     0,    19,    64,     0,    64,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,    15,    16,    64,     0,    17,    18,     0,     8,    98,
       0,    19,     0,    15,    16,    15,    16,    17,    18,    17,
      18,     0,     0,    19,     0,    19,     0,    64,     0,    15,
      16,   266,     0,    17,    18,     0,     0,     0,     0,    19,
       0,    54,    55,    56,    57,    58,     0,     0,     0,     0,
       0,     0,     0,    15,    16,     0,     0,    17,    18,     0,
       0,     0,     0,    19,    59,    60,     0,    61,   143,   144,
      62,     0,     0,   145,   146,     0,   147,   148,   149,   150,
     143,   144,     0,     0,     0,   145,   146,     0,   147,   148,
     149,   150,     0,   151,     0,     0,     0,     0,   143,   144,
       0,     0,     0,   145,   146,   152,   147,   148,   149,   150,
     143,   144,     0,     0,     0,   145,   146,     0,   147,   148,
     149,   150,     0,   153,     0,     0,     0,     0,   143,   144,
       0,     0,     0,   145,   146,   223,   147,   148,   149,   150,
     126,   127,   128,   129,   130,   131,   132,   133,     0,     0,
       0,     0,     0,   280
};

static const yytype_int16 yycheck[] =
{
      15,    16,    19,   163,   177,    83,    82,   179,     5,    20,
      47,     3,    62,    50,    51,    20,    36,    12,    13,    97,
      22,    15,    14,    32,    33,   202,    40,    52,    39,     5,
      47,    12,    13,    50,    51,    52,     0,    62,    75,    76,
     223,    33,    33,    37,    40,    62,    63,    59,    60,    69,
     233,    65,   229,    37,    79,     3,    67,    59,    60,    23,
      24,   139,    67,    80,   241,    82,    14,    59,    60,    65,
      33,    63,    64,    37,    69,    59,    60,    69,   156,   252,
      44,   253,   107,   108,   109,    33,    69,   247,    69,    69,
      59,    60,     3,   118,    61,    62,   174,   280,    50,    51,
     137,    70,   178,    14,   180,   183,   143,   144,   145,   146,
     147,   148,   149,   150,   164,    63,    64,    21,    33,    36,
     137,    69,    33,    40,   141,    19,   143,   144,   145,   146,
     147,   148,   149,   150,    12,    13,   214,   154,   163,   164,
      33,   158,   159,    38,   161,    45,    46,   164,    59,    60,
     175,     0,    63,    64,   171,    59,    60,    69,    69,   184,
      37,   178,    66,   180,    59,    60,    69,    44,   185,    63,
      64,   196,    66,    67,    33,    69,     4,   202,   203,    33,
     205,   206,    73,    74,    70,   137,   203,   204,   205,   206,
     215,   143,   144,   145,   146,   147,   148,   149,   150,   203,
     154,   205,   206,    33,   229,   159,   170,   161,   225,   226,
     108,   109,    63,    64,   231,    66,   241,    33,    69,    39,
      19,    39,   247,   260,    53,    54,    55,    56,   245,   254,
     255,   256,    37,     3,   198,   199,     6,     7,     8,     9,
      10,    11,    69,   260,    14,    46,    16,    17,    18,    50,
      51,    70,    53,    54,    55,    56,   281,    38,   273,    70,
      70,    65,    69,    33,    34,    35,    38,    40,     3,     4,
       3,    38,    40,    19,     7,     8,     9,    20,    11,    14,
      36,    14,    36,    16,    17,    18,    20,    36,    23,    59,
      60,    65,     4,    63,    64,    15,    38,    38,    33,    69,
      33,    34,    35,    36,    70,    70,    38,     3,   260,    38,
      37,     7,     8,     9,    69,    11,    37,    68,    14,    37,
      16,    17,    18,    37,    59,    60,    59,    60,    63,    64,
      63,    64,   215,   199,    69,   171,    69,    33,    34,    35,
       3,    86,   281,   256,     7,     8,     9,   171,    11,   194,
     164,    14,    -1,    16,    17,    18,    50,    51,   250,    53,
      54,    55,    56,    59,    60,     3,     4,    63,    64,    -1,
      33,    34,    35,    69,    -1,    13,    14,     3,    -1,     3,
       4,    19,    -1,    -1,    -1,    11,    -1,    -1,    14,    -1,
      14,    -1,    18,     3,     4,    33,    59,    60,    -1,    -1,
      63,    64,    -1,    -1,    14,    -1,    69,    33,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    59,    60,    33,    -1,    63,    64,    -1,    14,    67,
      -1,    69,    -1,    59,    60,    59,    60,    63,    64,    63,
      64,    -1,    -1,    69,    -1,    69,    -1,    33,    -1,    59,
      60,    37,    -1,    63,    64,    -1,    -1,    -1,    -1,    69,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    69,    63,    64,    -1,    66,    45,    46,
      69,    -1,    -1,    50,    51,    -1,    53,    54,    55,    56,
      45,    46,    -1,    -1,    -1,    50,    51,    -1,    53,    54,
      55,    56,    -1,    70,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    51,    70,    53,    54,    55,    56,
      45,    46,    -1,    -1,    -1,    50,    51,    -1,    53,    54,
      55,    56,    -1,    70,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    51,    70,    53,    54,    55,    56,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    10,    11,    14,    16,
      17,    18,    33,    34,    35,    59,    60,    63,    64,    69,
      75,    76,    77,    78,    80,    81,    82,    83,    84,    87,
      90,    91,    96,    97,   103,   112,   115,     5,    32,    33,
      33,   108,    33,   109,     5,    12,    13,    69,    98,    99,
      69,    69,    36,    69,    40,    41,    42,    43,    44,    63,
      64,    66,    69,    79,    33,    84,    84,    33,    33,    81,
       0,    77,    77,    59,    60,    61,    62,    76,    69,    69,
      40,    65,    40,    65,    76,     7,    78,    78,    33,    81,
      83,   104,   105,   104,   104,     4,    13,    19,    67,    81,
      93,    94,    95,   115,    33,     4,    33,     4,    81,   112,
     113,   115,    81,    70,    82,    82,    83,    83,    70,    33,
      85,   115,     4,    23,    81,   110,    24,    25,    26,    27,
      28,    29,    30,    31,    86,   110,    86,    69,    99,    19,
      67,    20,    67,    45,    46,    50,    51,    53,    54,    55,
      56,    70,    70,    70,    39,    86,    19,    37,    20,    39,
      67,    39,    70,    69,    38,   114,   115,   114,   114,    70,
      36,    40,    89,   115,    65,    70,    69,    38,    40,    38,
      40,   104,    86,    19,    81,    20,   104,   104,   104,   104,
     104,   104,   104,   104,    36,    77,   101,   102,    36,    36,
      94,    86,    81,    94,    20,    94,    36,    85,   113,    77,
      81,    96,    97,    86,    65,    88,   115,     4,   111,   108,
     110,   109,   110,    70,    86,    21,    66,   106,   115,    81,
     102,    15,    12,    13,   100,   115,    77,    92,    92,   106,
      93,    81,    93,    93,    70,    15,    37,    38,    86,    89,
      38,    70,    38,    38,   101,    81,    81,   106,    37,    81,
      69,   101,    37,    37,   106,    37,    37,    81,    85,    68,
     111,   108,   109,    22,   107,   115,   107,   104,    37,    84,
      70,   101,   100
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    76,    76,    77,    77,    77,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    79,    79,    79,    79,    79,    80,    81,    81,    81,
      82,    82,    82,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      86,    86,    86,    86,    86,    86,    86,    86,    87,    88,
      88,    88,    89,    89,    89,    89,    89,    89,    89,    90,
      91,    92,    93,    93,    93,    93,    94,    94,    95,    95,
      95,    95,    96,    96,    97,    97,    98,    99,    99,   100,
     100,   100,   101,   101,   102,   102,   102,   103,   103,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   105,   105,   106,   106,   106,   107,   107,    99,    99,
     108,   108,   108,   108,   108,   108,   109,   109,   109,   109,
     109,   109,   110,   110,   110,   111,   111,   112,   113,   113,
     113,   113,   114,   114,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     3,     1,     2,     1,     2,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     5,     3,     3,     1,
       3,     3,     1,     2,     2,     1,     1,     1,     6,     3,
       2,     2,     2,     2,     3,     1,     1,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     2,
       3,     1,     5,     4,     3,     2,     2,     2,     1,     7,
       7,     1,     4,     3,     4,     1,     1,     1,     2,     3,
       4,     5,     7,     4,     2,     2,     4,     4,     5,     6,
       2,     1,     3,     1,     3,     2,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     4,
       5,     3,     4,     3,     3,     1,     2,     1,     3,     2,
       5,     1,     3,     7,     3,     5,     5,     1,     3,     7,
       3,     5,     1,     4,     1,     3,     1,     4,     2,     2,
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
#line 129 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("goal <- start\n");
	}
#line 1571 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 135 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("start <- IMPORT FILE_SEP start\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1581 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 141 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("start <- PACK FILE_SEP start\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1591 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 147 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("start <- eval\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1601 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 154 "kotlin.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].d_var) > (yyvsp[0].d_var))
			tmp_data = (yyvsp[-1].d_var);
		else
			tmp_data = (yyvsp[0].d_var);
		Print_Blank(tmp_data);
		printf("eval <- expr eval\n");
		(yyval.d_var) = tmp_data + 1; 
    	}
#line 1615 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 164 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("eval <- expr\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1625 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 170 "kotlin.y" /* yacc.c:1646  */
    {
		printf("\n\n");
		if((yyvsp[-1].d_var) > (yyvsp[0].d_var))
			tmp_data = (yyvsp[-1].d_var);
		else
			tmp_data = (yyvsp[0].d_var);
		Print_Blank(tmp_data);
		printf("expr <- mainfun\n");
		(yyval.d_var) = tmp_data + 1;
	}
#line 1640 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 182 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- for_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1650 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 188 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- while_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1660 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 194 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- if_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1670 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 200 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- when_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1680 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 206 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- VAR var_decl\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 1690 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 212 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- VAL val_decl\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 1700 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 218 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- cal_sent\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1710 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 224 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var) + 1);
		printf("expr <- fun_stt\n");
		printf("\n\n");
		(yyval.d_var) = (yyvsp[0].d_var);
	}
#line 1721 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 231 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("expr <- comment\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
		printf("\n\n");
	}
#line 1732 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 238 "kotlin.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].d_var) > (yyvsp[0].d_var))
			tmp_data = (yyvsp[-1].d_var);
		else
			tmp_data = (yyvsp[0].d_var);	
		Print_Blank(tmp_data);
		printf("expr <- ID assign cal_sent\n");
		(yyval.d_var) = tmp_data + 1;
	}
#line 1746 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 248 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("expr <- ID EQUAL STR\n");
		(yyval.d_var) = 1;
	}
#line 1756 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 254 "kotlin.y" /* yacc.c:1646  */
    {
		/*empty*/
	}
#line 1764 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 259 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- EQUAL\n");
		(yyval.d_var) = 1;
	}
#line 1774 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 265 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- E_PLUS\n");
		(yyval.d_var) = 1;
	}
#line 1784 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 271 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- E_MINUS\n");
		(yyval.d_var) = 1;
	}
#line 1794 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 277 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- E_MULT\n");
		(yyval.d_var) = 1;
	}
#line 1804 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 283 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("assign <- E_DIV\n");
		(yyval.d_var) = 1;
	}
#line 1814 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 290 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("main_fun <- FUNC MAIN OPEN CLOSE fun_body\n");
		printf("\n\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1825 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 298 "kotlin.y" /* yacc.c:1646  */
    {	
		tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_data);
		printf("cal_sent <- cal_sent PLUS term\n");
		(yyval.d_var) = tmp_data + 1;
	  }
#line 1836 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 305 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_data);
		printf("cal_sent <- cal_sent MINUS term\n");
		(yyval.d_var) = tmp_data + 1;
	  }
#line 1847 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 312 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("cal_sent <- term\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	  }
#line 1857 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 319 "kotlin.y" /* yacc.c:1646  */
    { 
		tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_data);
		printf("term <- term MULT signed_factor\n");
		(yyval.d_var) = tmp_data + 1;
    	}
#line 1868 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 326 "kotlin.y" /* yacc.c:1646  */
    { 
		tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_data);
		printf("term <- term DIV signed_factor\n");
		(yyval.d_var) = tmp_data + 1;
	}
#line 1879 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 333 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("term <- signed_factor\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 1889 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 340 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("signed_factor <- PLUS factor\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
	     	}
#line 1899 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 346 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("signed_factor <- MINUS factor\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 1909 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 352 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("signed_factor <- factor\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 1919 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 359 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("factor <- NUMBER\n");
		(yyval.d_var) = 1;
        }
#line 1929 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 365 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 1941 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 373 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[-1].d_var));
		printf("factor <- ID DOT ID OPEN param CLOSE\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 1953 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 381 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- ID DOT ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 1965 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 389 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- ID INC\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 1977 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 397 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- ID DEC\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;	
	}
#line 1989 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 405 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- INC ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 2001 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 413 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- DEC ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		(yyval.d_var) = 1;
	}
#line 2013 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 421 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[-1].d_var));
		printf("factor <- OPEN cal_sent CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2023 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 427 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[0].d_var));
		printf("factor <- fun_call\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2033 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 433 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("factor <- NULL\n");
		(yyval.d_var) = 1;
	}
#line 2043 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 440 "kotlin.y" /* yacc.c:1646  */
    { 
		tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var))? (yyvsp[-2].d_var) : (yyvsp[0].d_var); 
		Print_Blank(tmp_data);
		printf("param <- ID COLUMN type COMMA param\n");
		(yyval.d_var) = tmp_data + 1;	
     	}
#line 2054 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 447 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("param <- ID COLUMN type\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2064 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 453 "kotlin.y" /* yacc.c:1646  */
    {
		/*empty*/
	}
#line 2072 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 458 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("type <- INT\n");
		(yyval.d_var) = 1;
    	}
#line 2082 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 464 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("type <- LONG\n");
		//$$ = 2;
		(yyval.d_var) = 1;
    	}
#line 2093 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 471 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- FLOAT\n");
		//$$ = 3;
		(yyval.d_var) = 1;
	}
#line 2104 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 478 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- DOUBLE\n");
		//$$ = 4;
		(yyval.d_var) = 1;
	}
#line 2115 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 485 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- STRING\n");
		//$$ = 5;
		(yyval.d_var) = 1;
	}
#line 2126 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 492 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- CHAR\n");
		//$$ = 6;
		(yyval.d_var) = 1;
	}
#line 2137 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 499 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- UNIT\n");
		//$$ = 7;
		(yyval.d_var) = 1;
	}
#line 2148 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 506 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("type <- ANY\n");
		//$$ = 8;
		(yyval.d_var) = 1;
	}
#line 2159 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 514 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_data = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var))? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		tmp_data = (tmp_data > (yyvsp[0].d_var)) ? tmp_data : (yyvsp[0].d_var);
		Print_Blank(tmp_data);
		printf("fun_stt <- FUNC ID OPEN param CLOSE ret_type fun_body\n");
		printf("%s\n", (yyvsp[-5].s_var));
		(yyval.d_var) = tmp_data + 1;
      	}
#line 2172 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 524 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("ret_type <- COLUMN type\n");
		//$$ = $2;
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2183 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 531 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("ret_type <- COLUMN type QUESTION\n");
		//$$ = $2 + 20;
		(yyval.d_var) = (yyvsp[-1].d_var);
	}
#line 2194 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 538 "kotlin.y" /* yacc.c:1646  */
    {
		/*empty*/
	}
#line 2202 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 543 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_data = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		Print_Blank(tmp_data);
		printf("fun_body <- M_OPEN eval RETURN cal_sent M_CLOSE\n");
		(yyval.d_var) = tmp_data + 1;
	}
#line 2213 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 550 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-2].d_var));
		printf("fun_body <- M_OPEN eval RETURN M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-2].d_var) + 1;
	}
#line 2223 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 556 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank((yyvsp[-1].d_var));
		printf("fun_body <- M_OPEN eval M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2233 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 562 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("EQUAL cal_sent\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;	
	}
#line 2243 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 568 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("EQUAL if_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;	
	}
#line 2253 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 574 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("EQUAL when_stt\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;	
	}
#line 2263 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 580 "kotlin.y" /* yacc.c:1646  */
    {
		//empty	
	}
#line 2271 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 585 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_data = ((yyvsp[-4].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-1].d_var);
		Print_Blank(tmp_data);
		printf("while_stt <- WHILE OPEN condition CLOSE M_OPEN loop_body M_CLOSE\n");
		(yyval.d_var) = tmp_data + 1;
	 }
#line 2282 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 593 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_data = ((yyvsp[-4].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-1].d_var);
		Print_Blank(tmp_data);
		printf("for_stt <- FOR OPEN condition CLOSE M_OPEN loop_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-4].d_var) + 1;
      	 }
#line 2293 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 601 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("loop_body <- eval\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	 }
#line 2303 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 608 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_data = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		Print_Blank(tmp_data);
		printf("when_body <- when_id ARROW when_id when_body\n");
		(yyval.d_var) = tmp_data + 1;
	}
#line 2314 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 615 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("when_body <- ELSE ARROW when_id\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2324 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 621 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_data = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		tmp_data = (tmp_data> (yyvsp[0].d_var)) ? tmp_data : (yyvsp[0].d_var);
		Print_Blank(tmp_data);
		printf("when_body <- when_condition ARROW cal_sent when_body\n");
		(yyval.d_var) = tmp_data + 1;
	}
#line 2336 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 629 "kotlin.y" /* yacc.c:1646  */
    {
		//empty
	}
#line 2344 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 634 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank(0);
		printf("when_id <- STR\n");
		printf("%s\n", (yyvsp[0].s_var));
		(yyval.d_var) = 1;
	}
#line 2355 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 641 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("when_id <- cal_sent\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2365 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 648 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("when_condition <- IS type\n");
			(yyval.d_var) = (yyvsp[0].d_var);
		}
#line 2375 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 654 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("when_condition <- NOT IS type\n");
			(yyval.d_var) = (yyvsp[0].d_var);
		}
#line 2385 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 660 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
			tmp_data = (tmp_data > (yyvsp[0].d_var)) ? tmp_data : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("when_condition <- when_id IN range\n");
			(yyval.d_var) = tmp_data + 1;
		}
#line 2397 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 668 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-4].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-1].d_var);
			Print_Blank(tmp_data);
			printf("when_condition <- when_id NOT IN cal_sent range\n");
			(yyval.d_var) = tmp_data + 1;
		}
#line 2408 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 676 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("when_stt <- WHEN OPEN ID CLOSE M_OPEN when_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2418 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 682 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("when_stt <- WHEN M_OPEN when_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2428 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 689 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("if_stt <- IF noelse\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2438 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 695 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("if_stt <- IF withelse\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2448 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 702 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_data);
		printf("noelse <- OPEN condition CLOSE cf\n");
		/*if($2)
		{
			$$ = $4;
		}*/
		(yyval.d_var) = tmp_data + 1;	
	}
#line 2463 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 714 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_data);
		printf("withelse <- OPEN condition CLOSE cf\n");
		(yyval.d_var) = tmp_data + 1;
	}
#line 2474 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 721 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_data = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		tmp_data = (tmp_data > (yyvsp[0].d_var)) ? tmp_data : (yyvsp[0].d_var); 
		Print_Blank(tmp_data);
		printf("OPEN condition CLOSE cf else_part\n");
		(yyval.d_var) = tmp_data + 1; 
	}
#line 2486 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 730 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_data = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
		tmp_data = (tmp_data > (yyvsp[0].d_var)) ? tmp_data : (yyvsp[0].d_var);
		Print_Blank(tmp_data);
		printf("else_part <- ELSEIF OPEN condition CLOSE cf else_part\n");
		(yyval.d_var) = tmp_data + 1;
	 }
#line 2498 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 738 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("else_part <- ELSE cf\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	 }
#line 2508 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 744 "kotlin.y" /* yacc.c:1646  */
    {
		//empty
	 }
#line 2516 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 749 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("cf <- M_OPEN cf_body M_CLOSE\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	 }
#line 2526 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 755 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("cf <- cf_body\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	 }
#line 2536 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 762 "kotlin.y" /* yacc.c:1646  */
    {
		tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
		Print_Blank(tmp_data);
		printf("cf_body <- eval RETURN cal_sent\n");
		(yyval.d_var) = tmp_data + 1;
	}
#line 2547 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 769 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[-1].d_var));
		printf("cf_body <- eval RETURN\n");
		(yyval.d_var) = (yyvsp[-1].d_var) + 1;
	}
#line 2557 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 775 "kotlin.y" /* yacc.c:1646  */
    {
		Print_Blank((yyvsp[0].d_var));
		printf("cf_body <- M_OPEN eval M_CLOSE\n");
		(yyval.d_var) = (yyvsp[0].d_var) + 1;
	}
#line 2567 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 782 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("com <- COMMENT\n");
		(yyval.d_var) = 1;
		printf("%s\n", (yyvsp[0].s_var));
	}
#line 2578 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 789 "kotlin.y" /* yacc.c:1646  */
    { 
		Print_Blank(0);
		printf("com <- COMMENT_LONG\n");
		(yyval.d_var) = 1;
		printf("%s\n", (yyvsp[0].s_var));
	}
#line 2589 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 797 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("condition <- is_condition\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;	
		}
#line 2599 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 803 "kotlin.y" /* yacc.c:1646  */
    {	
			tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);	
			Print_Blank(tmp_data);
			printf("condition <- condition SAME condition\n");
			/*if($1 == $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_data + 1;
		}
#line 2614 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 814 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("condition <- condition GREATER condition\n");
			/*if($1 < $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_data + 1;
		}
#line 2629 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 825 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("condition <- condition LESS condition\n");
			/*if($1 > $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_data + 1;
		}
#line 2644 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 836 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("condition <- condition E_GREATER condition\n");
			/*if($1 <= $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_data + 1;
		}
#line 2659 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 847 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("condition <- condition E_LESS condition\n");
			/*if($1 >= $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_data + 1;	
		}
#line 2674 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 858 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);	
			Print_Blank(tmp_data);
			printf("condition <- condition AND condition\n");
			/*if($1 && $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_data + 1;
		}
#line 2689 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 869 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("condition <- condition OR condition\n");
			/*if($1 || $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_data + 1;
		}
#line 2704 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 880 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("condition <- condition NOT_SAME condition\n");
			/*if($1 != $3)
				$$ = 1;
			else
				$$ = 0;*/
			(yyval.d_var) = tmp_data + 1;
		}
#line 2719 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 891 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("condition <- cal_sent\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2729 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 897 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-3].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-3].d_var) : (yyvsp[-1].d_var);
			tmp_data = (tmp_data > (yyvsp[0].d_var)) ? tmp_data : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("condition <- factor IN cal_sent range\n");
			(yyval.d_var) = tmp_data + 1;
		}
#line 2741 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 905 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-4].d_var) > (yyvsp[-1].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-1].d_var);
			tmp_data = (tmp_data > (yyvsp[0].d_var)) ? tmp_data : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("condition <- factor NOT IN cal_sent range\n");
			(yyval.d_var) = tmp_data + 1;
		}
#line 2753 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 914 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("is_condition <- ID IS type\n");
			//tmp_idx = Find_var_index($1, var_name);
			//tmp_data = Check_Type_Saved($1);
			//if(var_type[tmp_idx] == tmp_data)
			//	$$ = 1;
			//else
			//	$$ = 0;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
	     	}
#line 2769 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 926 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("is_condition <- ID NOT IS type\n");
			//tmp_idx = Find_var_index($1, var_name);
			//tmp_data = Check_Type_Saved($1);
			//if(var_type[tmp_idx] != tmp_data)
			//	$$ = 1;
			//else
			//	$$ = 0;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2785 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 939 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("range <- DOUBLEDOT cal_sent step_count\n");
			(yyval.d_var) = tmp_data + 1;
      		}
#line 2796 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 946 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("range <- DOWNTO cal_sent step_count\n");
			(yyval.d_var) = tmp_data + 1;
		}
#line 2807 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 953 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 2815 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 958 "kotlin.y" /* yacc.c:1646  */
    { 
			Print_Blank((yyvsp[0].d_var));
			printf("step_count <- STEP factor\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
	  	}
#line 2825 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 964 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 2833 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 969 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);	
			Print_Blank(tmp_data);
			printf("withelse <- ELSEIF expr withelse\n");
			(yyval.d_var) = tmp_data + 1;
		}
#line 2844 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 976 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("withelse <- ELSE expr\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2854 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 983 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("val_decl <- ID EQUAL decl_content COMMA val_decl\n");
			//tmp_data = Check_Type_Not_Saved($3);
			//tmp_idx = Var_Save($1, $3, tmp_data, var_name, data, var_type);
			//if(tmp_idx == -1)
			//	printf("Error : ID is saved already!\n\n");
			//if(tmp_idx == var_idx + 1)
			//	var_idx = tmp_idx;
			//else
			//	printf("Error : Hole in array!\n\n");
			(yyval.d_var) = tmp_data + 1;
		}
#line 2873 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 998 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank(0);
			printf("val_decl <- ID\n");
			//var_type[var_idx] = 0;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;
			(yyval.d_var) = 1;
		}
#line 2887 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1008 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("val_decl <- ID EQUAL decl_content\n");
			//tmp_data = Check_Type_Not_Saved($3);
			//var_type[var_idx] = tmp_data;
			//var_name[var_idx] = $1;
			//data[var_idx] = $3;
			//var_idx++;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;	
		}
#line 2902 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1019 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-4].d_var) > (yyvsp[-2].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-2].d_var);
			tmp_data = (tmp_data > (yyvsp[0].d_var)) ? tmp_data : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("val_decl <- ID COLUMN type EQUAL decl_content COMMA val_decl\n");
			//var_type[var_idx] = $3;
			//var_name[var_idx] = $1;
			//data[var_idx] = $5;
			//var_idx++;
			(yyval.d_var) = tmp_data + 1;
		}
#line 2918 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1031 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("val_decl <- ID COLUMN type\n");
			//var_type[var_idx] = $3;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 2932 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1041 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("val_decl <- ID COLUMN type EQUAL decl_content\n");
			//var_type[var_idx] = $3;
			//var_name[var_idx] = $1;
			//data[var_idx] = $5;
			//var_idx++;
			(yyval.d_var) = tmp_data + 1;	
		}
#line 2947 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1053 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("var_decl <- ID EQUAL decl_content COMA var_decl\n");
			//var_type[var_idx] = 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = $3;
			//var_idx++;
			(yyval.d_var) = tmp_data + 1;	
		}
#line 2962 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1064 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank(0);
			printf("var_decl <- ID\n");
			//var_type[var_idx] = 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;gc	
			(yyval.d_var) = 1;	
		}
#line 2976 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1074 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("var_decl <- ID EQUAL decl_content\n");
			//var_type[var_idx] = 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = $3;
			//var_idx++;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;	
		}
#line 2990 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1084 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-4].d_var) > (yyvsp[-2].d_var)) ? (yyvsp[-4].d_var) : (yyvsp[-2].d_var);
			tmp_data = (tmp_data > (yyvsp[0].d_var)) ? tmp_data : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("var_decl <- ID COLUMN type EQUAL decl_content COMMA var_decl\n");
			//var_type[var_idx] = $3 + 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = $5;
			//var_idx++;
			(yyval.d_var) = tmp_data + 1;	
		}
#line 3006 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1096 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("var_decl <- ID COLUMN type\n");
			//var_type[var_idx] = $3 + 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;	
		}
#line 3020 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1106 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-2].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-2].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("var_decl <- ID COLUMN type EQUAL decl_content\n");
			//var_type[var_idx] = $3 + 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = $5;
			//var_idx++;
			(yyval.d_var) = tmp_data + 1;	
		}
#line 3035 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1118 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("decl_content <- cal_sent\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3045 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1124 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[-1].d_var));
			printf("decl_content <- LIST OPEN list_content CLOSE\n");
			//double * tmp = (double*) &($3);
			//$$ = *tmp;
			(yyval.d_var) = (yyvsp[-1].d_var) + 1;	
		}
#line 3057 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1132 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank(0);
			printf("decl_content <- STR\n");
			//tmp_idx = Find_var_index($1, var_name);
			//$$ = data[tmp_idx];
			(yyval.d_var) = 1;	
		}
#line 3069 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1141 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("list_content <- STR COMMA list_content\n");
			//*($3 + tmp_idx) = $1;
			//tmp_idx++;
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
	    	}
#line 3081 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1149 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank(0);
			printf("list_content <- STR\n");
			//char** tmp_str = (char**)calloc(100, sizeof(char*));
			//tmp_idx = 0;
			//tmp_str[tmp_idx] = $1;
			//$$ = tmp_str;
			//tmp_idx++;
			(yyval.d_var) = 1;	
		}
#line 3096 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1161 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[-1].d_var));
			printf("fun_call <- ID OPEN argument CLOSE\n");
			printf("%s\n", (yyvsp[-3].s_var));
			(yyval.d_var) = (yyvsp[-1].d_var) + 1;
		}
#line 3107 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1169 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("argument <- calc_sent mul_argument\n");
			(yyval.d_var) = tmp_data;
		}
#line 3118 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1176 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("argument <- STR mul_argument\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3128 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1182 "kotlin.y" /* yacc.c:1646  */
    {
			tmp_data = ((yyvsp[-1].d_var) > (yyvsp[0].d_var)) ? (yyvsp[-1].d_var) : (yyvsp[0].d_var);
			Print_Blank(tmp_data);
			printf("argument <- fun_call mul_argument\n");
			(yyval.d_var) = tmp_data + 1;
		}
#line 3139 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1189 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 3147 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1194 "kotlin.y" /* yacc.c:1646  */
    {
			Print_Blank((yyvsp[0].d_var));
			printf("mul_argument <- COMMA argument\n");
			(yyval.d_var) = (yyvsp[0].d_var) + 1;
		}
#line 3157 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1200 "kotlin.y" /* yacc.c:1646  */
    {
			/*empty*/
		}
#line 3165 "kotlin.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1205 "kotlin.y" /* yacc.c:1646  */
    {}
#line 3171 "kotlin.tab.c" /* yacc.c:1646  */
    break;


#line 3175 "kotlin.tab.c" /* yacc.c:1646  */
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
#line 1206 "kotlin.y" /* yacc.c:1906  */



/* User code */
int yyerror(const char *s)
{
	return printf("Error : %s\n", s);
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
