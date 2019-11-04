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
    THEN = 270,
    ELSE = 271,
    NUL = 272,
    RETURN = 273,
    FOR = 274,
    WHILE = 275,
    WHEN = 276,
    REPLACE = 277,
    IS = 278,
    IN = 279,
    DOWNTO = 280,
    STEP = 281,
    LIST = 282,
    UNIT = 283,
    ELSEIF = 284,
    ANY = 285,
    M_OPEN = 286,
    M_CLOSE = 287,
    COMMA = 288,
    EQUAL = 289,
    E_PLUS = 290,
    E_MINUS = 291,
    E_MULT = 292,
    E_DIV = 293,
    OR = 294,
    AND = 295,
    B_OR = 296,
    B_XOR = 297,
    B_AND = 298,
    SAME = 299,
    NOT_SAME = 300,
    E_LESS = 301,
    E_GREATER = 302,
    GREATER = 303,
    LESS = 304,
    DOUBLEDOT = 305,
    L_SHIFT = 306,
    R_SHIFT = 307,
    PLUS = 308,
    MINUS = 309,
    MULT = 310,
    DIV = 311,
    COLUMN = 312,
    DOT = 313,
    NOT = 314,
    QUESTION = 315,
    ARROW = 316,
    OPEN = 317,
    CLOSE = 318,
    B_OPEN = 319,
    B_CLOSE = 320,
    QUOTE = 321,
    CALL = 322,
    STRING = 323,
    INT = 324,
    FLOAT = 325,
    DOUBLE = 326,
    CHAR = 327,
    COMMENT = 328,
    COMMENT_OPEN = 329,
    COMMENT_CLOSE = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "kotlin.y" /* yacc.c:1909  */
 double d_var; float f_var; int i_var; char* s_var; char c_var; char** sp_var

#line 133 "kotlin.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */
