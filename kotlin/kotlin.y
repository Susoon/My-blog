%{
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
//Type value - 1 : INT, 2 : FLOAT, 3 : DOUBLE, 4 : STRING, 5 : CHAR
int var_type[100] = { 0 };
//Type value - 1 : INT, 2 : FLOAT, 3 : DOUBLE, 4 : STRING, 5 : CHAR, 6 : UNIT, 7 : ANY
int fun_type[100] = { 0 };
int idx = 0, err = 0, tmp_data, tmp_idx;

int Check_Type_Saved(char * name);
int Check_Type_Not_Saved(double value);

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
%type <d_var> decl_content
%type <d_var> list_content

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
eval:	expr eval	{ $$ = $1; 
    	}
    |	expr		{ $$ = $1;
	}
    ;
expr:	for_stt		{ $$ = $1;
	}	
    |	while_stt	{ $$ = $1;
	}
    |	if_stt		{ $$ = $1;
	}
    |	when_stt	{ $$ = $1;
	}
    |	VAR var_decl	{ $$ = $1;
	}
    |	VAL val_decl	{ $$ = $1;	
	}
    |	cal_sent	{ $$ = $1;
	}
    |	fun_stt		{ $$ = $1;
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
    |	ID 	{ idx = Find_var_index($1, var_name);
		  $$ = data[idx];
	}
    |	OPEN cal_sent CLOSE { $$ = $2;
	}
    |	NUL	{ $$ = NULL;
	}	
    ;
param:	ID COLUMN type param COMMA { 
     	}
    |	ID COLUMN type		{
	}
    ;
type:	INT	{ $$ = 1;
    	}
    |	FLOAT	{ $$ = 2;
	}
    |	DOUBLE	{ $$ = 3;
	}
    |	STRING	{ $$ = 4;
	}
    |	CHAR	{ $$ = 5;
	}
    |	UNIT	{ $$ = 6;
	}
    |	ANY	{ $$ = 7;
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
    |	  M_OPEN eval M_CLOSE	{ $$ = $1;
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
when_body: expr ARROW STR when_body{
	}
    |	   epsilon	{
	}
    ;
when_stt:  WHEN OPEN ID CLOSE M_OPEN when_body M_CLOSE	{
	}
    ;
cf_body: eval	{}
    ;
com 	: COMMENT STR	{ printf("////%s\n", $2);
	}
    |	COMMENT_OPEN STR COMMENT_CLOSE	{ printf("//*%s\n*//", $2);
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
is_condition :	ID IS type	
	     	{ 
			tmp_idx = Find_var_index($1);
			tmp_data = Check_Type_Saved($1);
			if(var_type[tmp_idx] == tmp_data)
				$$ = 1;
			else
				$$ = 0;
	     	}
	|	ID NOT IS type	
		{
			tmp_idx = Find_var_index($1);
			tmp_data = Check_Type_Saved($1);
			if(var_type[tmp_idx] != tmp_data)
				$$ = 1;
			else
				$$ = 0;
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
step_count:	STEP NUMBER	{ $$ = $3;
	  	}
	;
withelse:	ELSEIF expr withelse	{
		}
	|	ESLE expr		{
		}
	;
val_decl:	ID EQUAL decl_content COMMA val_decl 
		{
			
		}
 	|	ID	{
		}
	|	ID EQUAL decl_content	{
		}
	|	ID COLUMN type EQUAL decl_content COMMA val_decl {
		}
	|	ID COLUMN type EQUAL	{
		}
	|	ID COLUMN type EQUAL decl_content {
		}
	;
var_decl:	ID EQUAL decl_content COMMA var_decl {
		}
 	|	ID	{
		}
	|	ID EQUAL decl_content	{
		}
	|	ID COLUMN type EQUAL decl_content COMMA var_decl {
		}
	|	ID COLUMN type EQUAL	{
		}
	|	ID COLUMN type EQUAL decl_content {
		}
	;
decl_content:	calc_sent	{
		}
	|	ID		{
		}
	|	LIST OPEN list_content CLOSE	{
		}
	;
list_content:	STR 		{
	    	}
	|	COMMA list_content	{
		}
	;

epslion: /*empty*/	{} ;
%%


/* User code */
int yyerror(const char *s)
{
	return printf("%s\n", s);
}




