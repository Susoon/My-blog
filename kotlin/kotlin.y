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
//Type value - 0 : Not_defined 1 : INT, 2 : FLOAT, 3 : DOUBLE, 4 : STRING, 5 : CHAR, const : +10
int var_type[100] = { 0 };
//Type value - 0 : Not_defined 1 : INT, 2 : FLOAT, 3 : DOUBLE, 4 : STRING, 5 : CHAR, 6 : UNIT, 7 : ANY, const : +10, question : +20
int fun_type[100] = { 0 };
int var_idx = 0, fun_idx = 0, err = 0, tmp_data, tmp_idx;

int Check_Type_Saved(char * name);
int Check_Type_Not_Saved(double value);

%}

%union { double d_var; float f_var; int i_var; char* s_var; char c_var; char** sp_var}

%type <d_var> goal
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
%type <d_var> type
%type <d_var> epsilone
%type <s_var> com
%type <i_var> condition
%type <i_var> for_condition
%type <i_var> is_condition
%type <d_var> fun_stt
%type <d_var> while_stt
%type <d_var> for_stt
%type <d_var> if_stt
%type <d_var> when_stt
%type <d_var> cal_sent
%type <d_var> step_count
%type <d_var> ret_type
%type <d_var> decl_content
%type <sp_var> list_content
%type <d_var> else_part

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
%token <d_var> ELSEIF
%token <d_Var> ANY

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
goal:	PACK FILE_PACK	goal {}
	IMPORT FILE_IMPORT goal	{}
    |	eval {}
    ;
eval:	expr eval	
    	{
		 $$ = $1; 
    	}
    |	expr EOF	
	{
		 $$ = $1;
	}
    ;
expr:	for_stt
 	{ 
		$$ = $1;
	}	
    |	while_stt	
	{
		$$ = $1;
	}
    |	if_stt	
	{ 
		$$ = $1;
	}
    |	when_stt
	{ 
		$$ = $1;
	}
    |	VAR var_decl
	{
		$$ = $1;
	}
    |	VAL val_decl
	{ 
		$$ = $1;	
	}
    |	cal_sent	
	{ 
		$$ = $1;
	}
    |	fun_stt		
	{ 
		$$ = $1;
	}
    ;
cal_sent: cal_sent PLUS term	
       	  {	
		$$ = $1 + $3;
	  }
    |	  cal_sent MINUS term
	  {
		$$ = $1 - $3;
	  }
    |	  term			
	  { 
		$$ = $1;
	  }
    ;
term:	term MULT signed_factor 
    	{ 
		$$ = $1 * $3;
    	} 
    |	term DIV signed_factor	
	{ 
		$$ = $1 / $3;
	} 
    |	signed_factor	
	{ 
		$$ = $1;
	}
    ;
signed_factor:	PLUS factor 
	     	{ 
			$$ = $2;
	     	}
    |	MINUS factor 
	{ 
		$$ = -1 * $2;
	}
    |	factor 
	{ 
		$$ = $1;
	}
    ;
factor: NUMBER	
      	{
		$$ = $1;
        }
    |	ID 	
	{ 
		var_idx = Find_var_index($1, var_name);
		$$ = data[var_idx];
	}
    |	OPEN cal_sent CLOSE 
	{ 
		$$ = $2;
	}
    |	NUL	
	{ 
		$$ = 0;
	}	
    ;
param:	ID COLUMN type param COMMA 
     	{ 
	
     	}
    |	ID COLUMN type		
	{
		
	}
    ;
type:	INT	
    	{
		$$ = 1;
    	}
    |	FLOAT	
	{ 
		$$ = 2;
	}
    |	DOUBLE	
	{ 
		$$ = 3;
	}
    |	STRING	
	{ 
		$$ = 4;
	}
    |	CHAR	
	{ 
		$$ = 5;
	}
    |	UNIT	
	{ 
		$$ = 6;
	}
    |	ANY	
	{ 
		$$ = 7;
	}
    ;
fun_stt:  FUNC ID OPEN param CLOSE ret_type fun_body 
       	{
		
      	}
    ;
ret_type: COLUMN type 
	{
	 
	}
    |	  COLUMN type QUESTION 
	{
		
	}
    ;
fun_body: M_OPEN eval RETURN expr M_CLOSE	
	{
		$$ = $3;
	}
    |	  M_OPEN eval M_CLOSE	
	{ 
		$$ = $2;
	}
    |	  EQUAL cal_sent	
	{
		$$ = $2;	
	}
    |	  epsilone		
	{
		//empty	
	}
    ;
while_stt: WHILE OPEN condition CLOSE M_OPEN loop_body M_CLOSE 
	 {
			
	 }
    ;
for_stt: FOR OPEN for_condition CLOSE M_OPEN loop_body M_CLOSE 
	 {
		
      	 }
    ;
loop_body: eval		
	 {
		
	 }
    ;
when_body: expr ARROW STR when_body
	{
		
	}
    |	   epsilone	
	{
		//empty
	}
    ;
when_stt:  WHEN OPEN ID CLOSE M_OPEN when_body M_CLOSE	
	{
		
	}
    ;
if_stt:	IF noelse
      	{
		$$ = $1;
	}
    |	IF withelse
	{
		$$ = $1;
	}
    ;
noelse:	OPEN condition CLOSE cf_body 
      	{
		if($2)
		{
			$$ = $4;
		}
	}
    ;
withelse: OPEN condition CLOSE cf_body
	{
	}
    |	  OPEN condition CLOSE cf_body else_part
	{
	}
    ;
else_part: ELSEIF OPEN condition CLOSE cf_body else_part
	 {
	 }
    |	   ELSE cf_body
	 {
	 }
    |	   epsilone
	 {
		//empty
	 }
    ;
cf_body: eval	
       	{
	
	}
    ;
com 	: COMMENT STR	
     	{ 
		printf("////%s\n", $2);
	}
    |	COMMENT_OPEN STR COMMENT_CLOSE	
	{ 
		printf("//*%s\n*//", $2);
	}
    ;
condition  :	is_condition	
	   	{ 
			$$ = $1;
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
	|	cal_sent	
		{ 
			$$ = $1;
		}
	;
is_condition :	ID IS type	
	     	{ 
			tmp_idx = Find_var_index($1, var_name);
			tmp_data = Check_Type_Saved($1);
			if(var_type[tmp_idx] == tmp_data)
				$$ = 1;
			else
				$$ = 0;
	     	}
	|	ID NOT IS type	
		{
			tmp_idx = Find_var_index($1, var_name);
			tmp_data = Check_Type_Saved($1);
			if(var_type[tmp_idx] != tmp_data)
				$$ = 1;
			else
				$$ = 0;
		}
	;
for_condition :	condition	
	      	{ 
			$$ = $1;
	      	}
	|	factor IN factor range	
		{
			
		}
	;
range	:	DOUBLEDOT factor step_count 
      		{
			
      		}
	|	DOWNTO factor step_count 
		{
			
		}
	;
step_count:	STEP NUMBER	
	  	{ 
			$$ = $2;
	  	}
	;
withelse:	ELSEIF expr withelse	
		{
			
		}
	|	ELSE expr		
		{
			
		}
	;
val_decl:	ID EQUAL decl_content COMMA val_decl 
		{
			tmp_data = Check_Type_Not_Saved($3);
			tmp_idx = Var_Save($1, $3, tmp_data, var_name, data, var_type);
			if(tmp_idx == -1)
				printf("Error : ID is saved already!\n");
			if(tmp_idx == var_idx + 1)
				var_idx = tmp_idx;
			else
				printf("Error : Hole in array!\n");
		}
 	|	ID	
		{
			var_type[var_idx] = 0;
			var_name[var_idx] = $1;
			data[var_idx] = -1;
			var_idx++;
		}
	|	ID EQUAL decl_content	
		{
			tmp_data = Check_Type_Not_Saved($3);
			var_type[var_idx] = tmp_data;
			var_name[var_idx] = $1;
			data[var_idx] = $3;
			var_idx++;
		}
	|	ID COLUMN type EQUAL decl_content COMMA val_decl 
		{
			var_type[var_idx] = $3;
			var_name[var_idx] = $1;
			data[var_idx] = $5;
			var_idx++;
		}
	|	ID COLUMN type	
		{
			var_type[var_idx] = $3;
			var_name[var_idx] = $1;
			data[var_idx] = -1;
			var_idx++;
		}
	|	ID COLUMN type EQUAL decl_content 
		{
			var_type[var_idx] = $3;
			var_name[var_idx] = $1;
			data[var_idx] = $5;
			var_idx++;
		}
	;
var_decl:	ID EQUAL decl_content COMMA var_decl 
		{
			var_type[var_idx] = 10;
			var_name[var_idx] = $1;
			data[var_idx] = $3;
			var_idx++;
		}
 	|	ID	
		{
			var_type[var_idx] = 10;
			var_name[var_idx] = $1;
			data[var_idx] = -1;
			var_idx++;
		}
	|	ID EQUAL decl_content	
		{
			var_type[var_idx] = 10;
			var_name[var_idx] = $1;
			data[var_idx] = $3;
			var_idx++;
		}
	|	ID COLUMN type EQUAL decl_content COMMA var_decl 
		{
			var_type[var_idx] = $3 + 10;
			var_name[var_idx] = $1;
			data[var_idx] = $5;
			var_idx++;
		}
	|	ID COLUMN type	
		{
			var_type[var_idx] = $3 + 10;
			var_name[var_idx] = $1;
			data[var_idx] = -1;
			var_idx++;
		}
	|	ID COLUMN type EQUAL decl_content 
		{
			var_type[var_idx] = $3 + 10;
			var_name[var_idx] = $1;
			data[var_idx] = $5;
			var_idx++;
		}
	;
decl_content:	cal_sent	
	    	{
			$$ = $1;
		}
	|	ID		
		{
			tmp_idx = Find_var_index($1, var_name);
			$$ = data[tmp_idx];
		}
	|	LIST OPEN list_content CLOSE	
		{
			double * tmp = (double*) &($3);
			$$ = *tmp;
		}
	;
list_content:	STR COMMA list_content
	    	{
			*($3 + tmp_idx) = $1;
			tmp_idx++;
			$$ = $3;
	    	}
	|	STR
		{
			char** tmp_str = (char**)calloc(100, sizeof(char*));
			tmp_idx = 0;
			tmp_str[tmp_idx] = $1;
			$$ = tmp_str;
			tmp_idx++;
		}
	;

epsilone: /*empty*/	{} ;
%%


/* User code */
int yyerror(const char *s)
{
	return printf("%s\n", s);
}




