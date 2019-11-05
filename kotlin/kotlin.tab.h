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
#line 26 "kotlin.y" /* yacc.c:1909  */
 double d_var; float f_var; int i_var; char* s_var; char c_var; char** sp_var

#line 132 "kotlin.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */
