%{
#include <stdlib.h>
#include <string.h>

#include "stod.h"
#include "expr.tab.h"

extern int yyerror(const char*);
%}

NUMBER [0-9]+[.]?[0-9]*
ID [a-zA-Z]+[a-zA-z0-9_]*
STR [a-zA-Z0-9_ \t\r\n$.,;!?]+
FILE_PACK ([a-zA-z0-9].)+[a-zA-Z0-9]
FILE_IMPORT [a-zA-z0-9](.[a-zA-z0-9])*
SPACE [ \t\r\n]+
IMPORT import
PACK package
FUNC fun
VAL val
VAR var
IF if
ELSEIF elseif
THEN then
ELSE else
NUL null
RETURN return
FOR for
WHILE while
WHEN when
REPLACE replace
IS	is
IN	in
DOWNTO downTo
STEP	step
LIST	listof
INT	int | Int
FLOAT	float | Float
DOUBLE	double | Double
STRING	string | String
CHAR	char | Char
ANY	any | Any
UNIT	Unit | unit

%%


{NUMBER} { yylval.d_var = stod(yytext);
	return NUMBER;
}

{ID} { yylval.s_var = yytext;	
	return ID;
}

{STR} { yylval.s_var = yytext;
	return STR;
}

{FUNC} { return FUN;
}

{VAL} { return VAL;
}

{FILE_PACK}	{ return FILE_PACK;
}

{FILE_IMPORT}	{ return FILE_IMPORT;
}

{IMPORT} { return IMPORT;
}

{PACK}	{ return PACK;
}

{VAR}	{ return VAR;
}

{IF}	{ return IF;
}

{THEN}	{ return THEN;
}

{ELSE}	{ return ELSE;
}

{ELSEIF} { return ELSEIF;
}

{NUL}	{ return NUL;
}

{FOR} 	{ return FOR;
}

{WHILE}	{ return WHILE;
}

{RETURN} { return RETURN;
}

{WHEN}	{ return WHEN;
}

{REPLACE} { return REPLACE;
}

{IS}	{ return IS;
}

{IN}	{ return IN;
}

{DOWNTO} { return DOWNTO;
}

{STEP}	{ return STEP;
}

{LIST}	{ return LIST;
}

{INT}	{ return INT;
}

{FLOAT} { return FLOAT;
}

{DOUBLE} { return DOUBLE;
}

{STRING} { return STRING;
}

{CHAR}	{ return CHAR;
}

{ANY}	{ return ANY;
}

{UNIT}	{ return UNIT;
}

")"	{ return CLOSE;
}

"("	{ return OPEN;
}

"+"	{ return PLUS; 
}

"-"	{ return MINUS;
}

"*"	{ return MULT; 
}

"/"	{ return DIV;
}

"="	{ return EQUAL;
}

".."	{ return DOUBLEDOT;
}

"{"	{ return M_OPEN;
}

"}"	{ return M_CLOSE;
}

"\""	{ return QUOTE;
}

"\\\\"	{ return COMMENT;
}

"\\*"	{ return COMMENT_OPEN;
}

"*\\"	{ return COMMENT_CLOSE;
}

":"	{ return COLUMN;
}

">"	{ return LESS;
}

"<"	{ return GREATER;
}

","	{ return COMMA;
}

"$"	{ return CALL;
}

"."	{ return DOT;
}

"?"	{ return QUESTION;
}

"!"	{ return NOT;
}

"&"	{ return B_AND;
}

"|"	{ return B_OR;
}

"^"	{ return B_XOR;
}

"+="	{ return E_PLUS;
}

"-="	{ return E_MINUS;
}

"*="	{ return E_MULT;
}

"/="	{ return E_DIV;
}

">="	{ return E_LESS;
}

"<=" 	{ return E_GREATER;
}

"&&"	{ return AND;
}

"||"	{ return OR;
}

"<<"	{ return L_SHIFT;
}

">>"	{ return R_SHIFT;
}

"=="	{ return SAME;
}

"!=" 	{ return NOT_SAME;
}

"->"	{ return ARROW;
}

"["	{ return B_OPEN;
}

"]"	{ return B_CLOSE;
}

{SPACE} { /* ignore */ 
}

.	{  printf("%lf\n", (double)yytext[0]);
           yyerror("unexpected input"); 
}


%%
/* User code */




