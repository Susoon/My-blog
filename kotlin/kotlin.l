%{
#include <stdlib.h>
#include <string.h>

#include "stod.h"
#include "kotlin.tab.h"

extern int yyerror(const char*);
%}

NUMBER 	([0-9])+([.])?([0-9])*
STR 	["]([a-zA-Z0-9_ \t\r$.,;!?])+["]
FILE_SEP ([a-zA-Z][.])+[a-zA-Z]
SPACE	[ \r\t\n]+
PACK	package
FUNC	fun
VAL	val
VAR	var
IMPORT	import
IF	if
ELSEIF	elseif
ELSE	else
NUL	null
RETURN	return
FOR	for
WHILE	while
WHEN	when
IS	is
IN	in
DOWNTO	downto
STEP	step
LIST	list
INT	(I|i)nt
FLOAT	(F|f)loat
DOUBLE	(D|d)ouble
STRING	(S|s)tring
CHAR	(C|c)har
ANY	(A|a)ny
UNIT	(U|u)nit
MAIN	main
ID [a-zA-Z_][a-zA-Z_0-9]*
COMMENT		[/][/]([a-zA-Z0-9_ \t\r$.,;!?])+
COMMENT_LONG	[/][*]([a-zA-Z0-9_ \t\r$.,;!?])+[*][/]

%%

{NUMBER} { yylval.d_var = stod(yytext);
	return NUMBER;
}

{STR} { yylval.s_var = yytext;
	return STR;
}

{FILE_SEP}	{ yylval.s_var = yytext;
		return FILE_SEP;
}

{SPACE} { /* ignore */ 
}

{PACK}	{ return PACK;
}

{FUNC} { return FUNC;
}

{VAL} { return VAL;
}

{VAR}	{ return VAR;
}

{IMPORT} { return IMPORT;
}

{IF}	{ return IF;
}

{ELSEIF} { return ELSEIF;
}

{ELSE}	{ return ELSE;
}

{NUL}	{ return NUL;
}

{RETURN} { return RETURN;
}

{FOR}	{ return FOR;
}

{WHILE}	{ return WHILE;
}

{WHEN}	{ return WHEN;
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

{MAIN}	{ return MAIN;
}

{ID} { yylval.s_var = yytext;	
	return ID;
}

{COMMENT} { yylval.s_var = yytext; 
		return COMMENT;
}

{COMMENT_LONG}	{ yylval.s_var = yytext;
		return COMMENT_LONG;
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


.	{  printf("%lf\n", (double)yytext[0]);
           yyerror("unexpected input"); 
}


%%
/* User code */




