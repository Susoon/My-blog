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
#line 29 "kotlin.y" /* yacc.c:1909  */
 double d_var; float f_var; int i_var; char* s_var; char c_var; char** sp_var

#line 129 "kotlin.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */
