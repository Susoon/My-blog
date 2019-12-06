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
    SETOF = 278,
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
#line 58 "kotlin.y" /* yacc.c:1909  */
 struct parse_node* node_var; double d_var; float f_var; int i_var; long l_var; char* s_var; char c_var; char** sp_var

#line 138 "kotlin.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KOTLIN_TAB_H_INCLUDED  */
