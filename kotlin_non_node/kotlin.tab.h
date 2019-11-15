/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 29 "kotlin.y" /* yacc.c:1909  */
 double d_var; float f_var; int i_var; long l_var; char* s_var; char c_var; char** sp_var

#line 137 "kotlin.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */
