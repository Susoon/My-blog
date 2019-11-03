%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "find_data.h"
#include "make_node.h"

extern int yylex(void);
extern void yyterminate();
extern int yyerror(const char *s);

char * var_name[1000] = { 0 };
char * fun_name[1000] = { 0 };
double data[1000] = { 0 };
int type[1000] = { 0 };	//double : 1, float : 2, int : 3, str : 4, char : 5
int idx = 0;

%}
%union { double d_var; float f_var; int i_var; char* s_var; char c_var}

%type <d_var> eval
%type <d_var> expr
%type <d_var> term
%type <d_var> factor
%type <d_var> signed_factor
%type <d_var> var_decl
%type <d_var> val_decl
%type <d_var> fun_body
%type <d_var> loop_body
%type <d_var> cf_body
%type <d_var> withelse
%type <d_var> noelse
%type <d_var> when_body
%type <d_var> param
%type <s_var> type
%type <d_var> epslion
%type <s_var> com
%type <i_var> condition
%type <i_var> for_condition
%type <i_var> is_condition
%type <d_var> func_stt
%type <d_var> while_stt
%type <d_var> for_stt
%type <d_var> if_stt
%type <d_var> when_stt
%type <d_var> cal_sent
%type <d_var> step_count
%type <d_var> ret_type

%token <d_var> NUMBER
%token <s_var> ID
%token <c_var> EOF
%token <s_var> STR
%token <d_var> IF
%token <d_var> FUNC
%token <d_var> IMPORT
%token <d_var> PACK
%token <d_var> FILE_PACK
%token <d_var> FILE_IMPORT
%token <d_var> VAL
%token <d_var> VAR
%token <d_var> THEN
%token <d_var> ELSE
%token <d_var> NUL
%token <d_var> RETURN
%token <d_var> FOR
%token <d_var> WHILE
%token <d_var> WHEN
%token <d_var> REPLACE
%token <d_var> IS
%token <d_var> IN
%token <d_var> DOWNTO
%token <d_var> STEP
%token <d_var> LIST
%token <d_var> UNIT

%left  M_OPEN M_CLOSE
%left  COMMA
%left  EQUAL E_PLUS E_MINUS E_MULT E_DIV
%left  OR
%left  AND
%left  B_OR
%left  B_XOR
%left  B_AND
%left  SAME NOT_SAME
%left  E_LESS E_GREATER GREATER LESS
%left  DOUBLEDOT
%left  L_SHIFT R_SHIFT
%left  PLUS MINUS
%left  MULT DIV
%left  COLUMN
%left  DOT NOT QUESTION ARROW
%left  OPEN CLOSE B_OPEN B_CLOSE
%left  QUOTE
%left  CALL
%left  STRING INT FLOAT DOUBLE CHAR
%left  COMMENT COMMENT_OPEN COMMENT_CLOSE

%%

/* Rules */
goal:	PACK FILE_PACK	goal { $$ = $3;
    	}
	IMPORT FILE_IMPORT goal	{ $$ = $3;
	}
    |	eval EOF	{ $$ = $1;
	}
	;
eval:	expr eval	{ printf("%lf\n", $1); 
    	}
    |	expr		{ $$ = $1;
	}
    ;
expr:	for_stt		{
	}	
    |	while_stt	{
	}
    |	if_stt		{	
	}
    |	when_stt	{
	}
    |	VAR var_decl	{
	}
    |	VAL val_decl	{	
	}
    |	cal_sent	{
	}
    |	fun_stt		{
	}
    ;
cal_sent: calc_sent PLUS term	{ $$ = $1 + $3;
	  }
    |	  calc_sent MINUS term	{ $$ = $1 - $3;
	  }
    |	  term			{ $$ = $1;
	  }
    ;
term:	term MULT signed_factor { $$ = $1 * $3;
    	} 
    |	term DIV signed_factor	{ $$ = $1 / $3;
	} 
    |	signed_factor	{ $$ = $1;
	}
    ;
signed_factor:	PLUS factor { $$ = $2;
	     	}
    |	MINUS factor { $$ = -1 * $2;
	}
    |	factor { $$ = $1;
	}
    ;
factor: NUMBER	{ $$ = $1;
        }
    |	ID 	{ idx = Find_index($1, var_name);
		  $$ = data[idx];
	}
    |	OPEN cal_sent CLOSE { $$ = $2;
	}
    |	NUL	{
	}	
    ;
param:	ID COLUMN type param COMMA {
     	}
    |	ID COLUMN type		{
	}
    ;
type:	INT	{
    	}
    |	FLOAT	{
	}
    |	DOUBLE	{
	}
    |	STRING	{
	}
    |	CHAR	{
	}
    |	UNIT	{
	}
    |	ANY	{
	}
    ;
fun_stt:  FUNC ID OPEN param CLOSE ret_type fun_body {
      	}
    ;
ret_type: COLUMN type {
	}
    |	  COLUMN type QUESTION {
	}
    ;
fun_body: M_OPEN eval RETURN expr M_CLOSE	{ $$ = $3;
	}
    |	  M_OPEN  eval M_CLOSE	{ $$ = $1;
	}
    |	  EQUAL calc_sent	{
	}
    |	  epsilone		{
	}
    ;
while_stt: WHILE OPEN condition CLOSE M_OPEN loop_body M_CLOSE {
	 }
    ;
for_stt: FOR OPEN for_condition CLOSE M_OPEN loop_body M_CLOSE {
      	 }
    ;
loop_body: eval		{
	 }
    ;
when_body: expr ARROW STR EOL{
	}
    ;
when_stt:  WHEN OPEN ID CLOSE M_OPEN when_body M_CLOSE	{
	}
    ;
cf_body: eval	{}
    ;
com 	: COMMENT STR	{
	}
    |	COMMENT_OPEN STR COMMENT_CLOSE	{
	}
    ;
condition  :	is_condition	{ $$ = $1;
		}
	|	condition SAME condition	
		{ 
			if($1 == $3)
				$$ = 1;
			else
				$$ = 0;
		}
	|	condition GREATER condition
		{
			if($1 < $3)
				$$ = 1;
			else
				$$ = 0;
		}
	|	condition LESS condition
		{
			if($1 > $3)
				$$ = 1;
			else
				$$ = 0;
		}
	|	condition E_GREATER condition
		{
			if($1 <= $3)
				$$ = 1;
			else
				$$ = 0;
		}
	|	condition E_LESS condition
		{
			if($1 >= $3)
				$$ = 1;
			else
				$$ = 0;
		}
	|	condition AND condition
		{
			if($1 && $3)
				$$ = 1;
			else
				$$ = 0;
		}
	|	condition OR condition
		{
			if($1 || $3)
				$$ = 1;
			else
				$$ = 0;
		}
	|	condition NOT_SAME condition
		{
			if($1 != $3)
				$$ = 1;
			else
				$$ = 0;
		}
	|	cal_sent	{ $$ = $1;
		}
	;
is_condition :	ID IS type	{
	     	}
	|	ID NOT IS type	{
		}
	;
for_condition :	condition	{ $$ = $1;
	      	}
	|	factor in factor range	{
		}
	;
range	:	DOUTBLEDOT factor step_count {
      		}
	|	DOWNTO factor step_count {
		}
	;
step_count:	STEP NUMBER	{
	  	}
	;
withelse:	ELSEIF expr withelse	{
		}
	|	ESLE expr		{
		}
	;
val_decl:	ID EQUAL cal_sent COMMA val_decl {
		}
 	|	ID	{
		}
	|	ID EQUAL cal_sent	{
		}
	;

val_decl:	ID EQUAL cal_sent COMMA var_decl {
		}
 	|	ID	{
		}
	|	ID EQUAL cal_sent	{
		}
	;
epslion: /*empty*/	{} ;
%%


/* User code */
int yyerror(const char *s)
{
	return printf("%s\n", s);
}




