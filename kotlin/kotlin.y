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
int blank_count = 0;

int Check_Type_Saved(char * name);
int Check_Type_Not_Saved(double value);
void Print_Blank();
void Do_Nothing(double something) {};

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
%type <d_var> range
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
%type <d_var> fun_call
%type <d_var> argument

%token <d_var> NUMBER
%token <s_var> STR
%token <d_var> FILE_SEP
%token <d_var> PACK
%token <d_var> FUNC
%token <d_var> VAL
%token <d_var> VAR
%token <d_var> IMPORT
%token <d_var> IF
%token <d_var> ELSEIF
%token <d_var> ELSE
%token <d_var> NUL
%token <d_var> RETURN
%token <d_var> FOR
%token <d_var> WHILE
%token <d_var> WHEN
%token <d_var> IS
%token <d_var> IN
%token <d_var> DOWNTO
%token <d_var> STEP
%token <d_var> LIST
%token <i_var> INT
%token <i_var> FLOAT
%token <i_var> DOUBLE
%token <i_var> STRING
%token <i_var> CHAR
%token <i_var> ANY
%token <i_var> UNIT
%token <d_var> MAIN
%token <s_var> ID
%token <s_var> COMMENT
%token <s_var> COMMENT_LONG

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

%%

/* Rules */
goal:	PACK FILE_SEP goal 
    	{
		Print_Blank();
		blank_count++;
		printf("goal -> PACK FILE_SEP goal\n");
		Do_Nothing($3);
		blank_count--;	 
	}
	IMPORT FILE_SEP goal	
	{
		Print_Blank();
		blank_count++;
		printf("goal -> IMPORT FILE_SEP goal\n");
		Do_Nothing($3);
		blank_count--;	 
	}
    |	eval
	{ 
		Print_Blank();
		blank_count++;
		printf("goal -> eval\n");
		Do_Nothing($1);
		blank_count--;	
	}
    ;
eval:	expr eval	
    	{
		Print_Blank();
		blank_count++;
		printf("eval -> expr eval\n");
		$$ = $1; 
		blank_count--;	
    	}
    |	expr	
	{
		Print_Blank();
		blank_count++;
		printf("eval -> expr\n");
		$$ = $1;
		blank_count--;	
	}
    ;
expr:	for_stt
 	{ 
		Print_Blank();
		blank_count++;
		printf("expr -> for_stt\n");
		$$ = $1;
		blank_count--;	
	}	
    |	while_stt	
	{
		Print_Blank();
		blank_count++;
		printf("expr -> while_stt\n");
		$$ = $1;
		blank_count--;	
	}
    |	if_stt	
	{ 
		Print_Blank();
		blank_count++;
		printf("expr -> if_stt\n");
		$$ = $1;
		blank_count--;	
	}
    |	when_stt
	{ 
		Print_Blank();
		blank_count++;
		printf("expr -> when_stt\n");
		$$ = $1;
		blank_count--;	
	}
    |	VAR var_decl
	{
		Print_Blank();
		blank_count++;
		printf("expr -> VAR var_decl\n");
		$$ = $1;
		blank_count--;	
	}
    |	VAL val_decl
	{ 
		Print_Blank();
		blank_count++;
		printf("expr -> VAL val_decl\n");
		$$ = $1;
		blank_count--;	
	}
    |	cal_sent	
	{ 
		Print_Blank();
		blank_count++;
		printf("expr -> cal_sent\n");
		$$ = $1;
		blank_count--;	
	}
    |	fun_stt		
	{ 
		Print_Blank();
		blank_count++;
		printf("expr -> fun_stt\n");
		$$ = $1;
		blank_count--;	
	}
    |	fun_call
	{
		Print_Blank();
		blank_count++;
		printf("expr -> fun_call\n");
		$$ = $1;
		blank_count--;	
	}
    |	com
	{
		Print_Blank();
		blank_count++;
		printf("expr -> comment\n");
		blank_count--;	
	}
    ;
cal_sent: cal_sent PLUS term	
       	  {	
		Print_Blank();
		blank_count++;
		printf("cal_sent -> cal_sent PLUS term\n");
		$$ = $1 + $3;
		blank_count--;	
	  }
    |	  cal_sent MINUS term
	  {
		Print_Blank();
		blank_count++;
		printf("cal_sent -> cal_sent MINUS term\n");
		$$ = $1 - $3;
		blank_count--;	
	  }
    |	  term			
	  { 
		Print_Blank();
		blank_count++;
		printf("cal_sent -> term\n");
		$$ = $1;
		blank_count--;	
	  }
    ;
term:	term MULT signed_factor 
    	{ 
		Print_Blank();
		blank_count++;
		printf("term -> term MULT signed_factor\n");
		$$ = $1 * $3;
		blank_count--;	
    	} 
    |	term DIV signed_factor	
	{ 
		Print_Blank();
		blank_count++;
		printf("term -> term DIV signed_factor\n");
		$$ = $1 / $3;
		blank_count--;	
	} 
    |	signed_factor	
	{ 
		Print_Blank();
		blank_count++;
		printf("term -> signed_factor\n");
		$$ = $1;
		blank_count--;	
	}
    ;
signed_factor:	PLUS factor 
	     	{ 
			Print_Blank();
			blank_count++;
			printf("signed_factor -> PLUS factor\n");
			$$ = $2;
			blank_count--;	
	     	}
	|    	MINUS factor 
		{ 
			Print_Blank();
			blank_count++;
			printf("signed_factor -> MINUS factor\n");
			$$ = -1 * $2;
			blank_count--;	
		}
    	|	factor 
		{ 
			Print_Blank();
			blank_count++;
			printf("signed_factor -> factor\n");
			$$ = $1;
			blank_count--;	
		}
    ;
factor: NUMBER	
      	{
		Print_Blank();
		blank_count++;
		printf("factor -> NUMBER\n");
		$$ = $1;
		blank_count--;	
        }
    |	ID 	
	{ 
		Print_Blank();
		blank_count++;
		printf("factor -> ID\n");
		//var_idx = Find_var_index($1, var_name);
		//$$ = data[var_idx];
		blank_count--;	
	}
    |	OPEN cal_sent CLOSE 
	{ 
		Print_Blank();
		blank_count++;
		printf("factor -> OPEN cal_sent CLOSE\n");
		$$ = $2;
		blank_count--;	
	}
    |	NUL	
	{ 
		Print_Blank();
		blank_count++;
		printf("factor -> NULL\n");
		$$ = 0;
		blank_count--;	
	}	
    ;
param:	ID COLUMN type COMMA param 
     	{ 
		Print_Blank();
		blank_count++;
		printf("param -> ID COLUMN type COMMA param\n");
		$$ = $3;	
		blank_count--;	
     	}
    |	ID COLUMN type		
	{
		Print_Blank();
		blank_count++;
		printf("param -> ID COLUMN type\n");
		$$ = $3;
		blank_count--;	
	}
    ;
type:	INT	
    	{
		Print_Blank();
		blank_count++;
		printf("type -> INT\n");
		$$ = 1;
		blank_count--;	
    	}
    |	FLOAT	
	{ 
		Print_Blank();
		blank_count++;
		printf("type -> FLOAT\n");
		$$ = 2;
		blank_count--;	
	}
    |	DOUBLE	
	{ 
		Print_Blank();
		blank_count++;
		printf("type -> DOUBLE\n");
		$$ = 3;
		blank_count--;	
	}
    |	STRING	
	{ 
		Print_Blank();
		blank_count++;
		printf("type -> STRING\n");
		$$ = 4;
		blank_count--;	
	}
    |	CHAR	
	{ 
		Print_Blank();
		blank_count++;
		printf("type -> CHAR\n");
		$$ = 5;
		blank_count--;	
	}
    |	UNIT	
	{ 
		Print_Blank();
		blank_count++;
		printf("type -> UNIT\n");
		$$ = 6;
		blank_count--;	
	}
    |	ANY	
	{ 
		Print_Blank();
		blank_count++;
		printf("type -> ANY\n");
		$$ = 7;
		blank_count--;	
	}
    ;
fun_stt:  FUNC ID OPEN param CLOSE ret_type fun_body 
       	{
		Print_Blank();
		blank_count++;
		printf("fun_stt -> FUNC ID OPEN param CLOSE ret_type fun_body\n");
		$$ = 1;
	 	blank_count--;	
      	}
    ;
ret_type: COLUMN type 
	{
		Print_Blank();
		blank_count++;
		printf("ret_type -> COLUMN type\n");
		$$ = $2;
		 blank_count--;	
	}
    |	  COLUMN type QUESTION 
	{
		Print_Blank();
		blank_count++;
		printf("ret_type -> COLUMN type QUESTION\n");
		$$ = $2 + 20;
		blank_count--;	
	}
    |	 epsilone
	{
		/*empty*/
	}
    ;
fun_body: M_OPEN eval RETURN expr M_CLOSE	
	{
		Print_Blank();
		blank_count++;
		printf("fun_body -> M_OPEN eval RETURN expr M_CLOSE\n");
		$$ = $3;
		blank_count--;	
	}
    |	  M_OPEN eval M_CLOSE	
	{ 
		Print_Blank();
		blank_count++;
		printf("fun_body -> M_OPEN eval M_CLOSE\n");
		$$ = $2;
		blank_count--;	
	}
    |	  EQUAL cal_sent	
	{
		Print_Blank();
		blank_count++;
		printf("EQUAL cal_sent\n");
		$$ = $2;	
		blank_count--;	
	}
    |	  epsilone		
	{
		//empty	
	}
    ;
while_stt: WHILE OPEN condition CLOSE M_OPEN loop_body M_CLOSE 
	 {
		Print_Blank();
		blank_count++;
		printf("while_stt -> WHILE OPEN condition CLOSE M_OPEN loop_body M_CLOSE\n");
		$$ = $3;
		blank_count--;	
	 }
    ;
for_stt: FOR OPEN for_condition CLOSE M_OPEN loop_body M_CLOSE 
	 {
		Print_Blank();
		blank_count++;
		printf("for_stt -> FOR OPEN for_condition CLOSE M_OPEN loop_body M_CLOSE\n");
		$$ = $3;
		blank_count--;	
      	 }
    ;
loop_body: eval		
	 {
		Print_Blank();
		blank_count++;
		printf("loop_body -> eval\n");
		$$ = $1;
		blank_count--;	
	 }
    ;
when_body: expr ARROW STR when_body
	{
		Print_Blank();
		blank_count++;
		printf("when_body -> expr ARROW STR when_body\n");
		$$ = $1;
		blank_count--;	
	}
    |	   epsilone	
	{
		//empty
	}
    ;
when_stt:  WHEN OPEN ID CLOSE M_OPEN when_body M_CLOSE	
	{
		Print_Blank();
		blank_count++;
		printf("when_stt -> WHEN OPEN ID CLOSE M_OPEN when_body M_CLOSE\n");
		$$ = $6;
		blank_count--;	
	}
    ;
if_stt:	IF noelse
      	{
		Print_Blank();
		blank_count++;
		printf("if_stt -> IF noelse\n");
		$$ = $1;
		blank_count--;	
	}
    |	IF withelse
	{
		Print_Blank();
		blank_count++;
		printf("if_stt -> IF withelse\n");
		$$ = $1;
		blank_count--;	
	}
    ;
noelse:	OPEN condition CLOSE cf_body 
      	{
		Print_Blank();
		blank_count++;
		printf("OPEN condition CLOSE cf_body\n");
		if($2)
		{
			$$ = $4;
		}
		blank_count--;	
	}
    ;
withelse: OPEN condition CLOSE cf_body
	{
		Print_Blank();
		blank_count++;
		printf("withelse -> OPEN condition CLOSE cf_body\n");
		$$ = $4;
		blank_count--;	
	}
    |	  OPEN condition CLOSE cf_body else_part
	{
		Print_Blank();
		blank_count++;
		printf("OPEN condition CLOSE cf_body else_part\n");
		$$ = $4;
		blank_count--;	
	}
    ;
else_part: ELSEIF OPEN condition CLOSE cf_body else_part
	 {
		Print_Blank();
		blank_count++;
		printf("else_part -> ELSEIF OPEN condition CLOSE cf_body else_part\n");
		$$ = $5;
		blank_count--;	
	 }
    |	   ELSE cf_body
	 {
		Print_Blank();
		blank_count++;
		printf("else_part -> ELSE cf_body\n");
		$$ = $2;
		blank_count--;	
	 }
    |	   epsilone
	 {
		//empty
	 }
    ;
cf_body: eval	
       	{
		Print_Blank();
		blank_count++;
		printf("cf_body -> eval\n");
		$$ = $1;
		blank_count--;	
	}
    ;
com: 	COMMENT	
     	{ 
		Print_Blank();
		blank_count++;
		printf("com -> COMMENT\n");
		$$ = $1;
		blank_count--;	
		//printf("%s\n", $1);
	}
    |	COMMENT_LONG	
	{ 
		Print_Blank();
		blank_count++;
		printf("com -> COMMENT_LONG\n");
		$$ = $1;
		blank_count--;	
		//printf("%s\n", $1);
	}
    ;
condition  :	is_condition	
	   	{ 
			Print_Blank();
			blank_count++;
			printf("condition -> is_condition\n");
			$$ = $1;	
			blank_count--;	
		}
	|	condition SAME condition	
		{	
			Print_Blank();
			blank_count++;
			printf("condition -> condition SAME condition\n");
			if($1 == $3)
				$$ = 1;
			else
				$$ = 0;
			blank_count--;	
		}
	|	condition GREATER condition
		{
			Print_Blank();
			blank_count++;
			printf("condition -> condition GREATER condition\n");
			if($1 < $3)
				$$ = 1;
			else
				$$ = 0;
			blank_count--;	
		}
	|	condition LESS condition
		{
			Print_Blank();
			blank_count++;
			printf("condition -> condition LESS condition\n");
			if($1 > $3)
				$$ = 1;
			else
				$$ = 0;
			blank_count--;	
		}
	|	condition E_GREATER condition
		{
			Print_Blank();
			blank_count++;
			printf("condition -> condition E_GREATER condition\n");
			if($1 <= $3)
				$$ = 1;
			else
				$$ = 0;
			blank_count--;	
		}
	|	condition E_LESS condition
		{
			Print_Blank();
			blank_count++;
			printf("condition -> condition E_LESS condition\n");
			if($1 >= $3)
				$$ = 1;
			else
				$$ = 0;
			blank_count--;	
		}
	|	condition AND condition
		{
			Print_Blank();
			blank_count++;
			printf("condition -> condition AND condition\n");
			if($1 && $3)
				$$ = 1;
			else
				$$ = 0;
			blank_count--;	
		}
	|	condition OR condition
		{
			Print_Blank();
			blank_count++;
			printf("condition -> condition OR condition\n");
			if($1 || $3)
				$$ = 1;
			else
				$$ = 0;
			blank_count--;	
		}
	|	condition NOT_SAME condition
		{
			Print_Blank();
			blank_count++;
			printf("condition -> condition NOT_SAME condition\n");
			if($1 != $3)
				$$ = 1;
			else
				$$ = 0;
			blank_count--;	
		}
	|	cal_sent	
		{ 
			Print_Blank();
			blank_count++;
			printf("condition -> cal_sent\n");
			$$ = $1;
			blank_count--;	
		}
	;
is_condition :	ID IS type	
	     	{ 
			Print_Blank();
			blank_count++;
			printf("is_condition -> ID IS type\n");
			//tmp_idx = Find_var_index($1, var_name);
			//tmp_data = Check_Type_Saved($1);
			//if(var_type[tmp_idx] == tmp_data)
			//	$$ = 1;
			//else
			//	$$ = 0;
			blank_count--;	
	     	}
	|	ID NOT IS type	
		{
			Print_Blank();
			blank_count++;
			printf("is_condition -> ID NOT IS type\n");
			//tmp_idx = Find_var_index($1, var_name);
			//tmp_data = Check_Type_Saved($1);
			//if(var_type[tmp_idx] != tmp_data)
			//	$$ = 1;
			//else
			//	$$ = 0;
			blank_count--;	
		}
	;
for_condition :	condition	
	      	{ 
			Print_Blank();
			blank_count++;
			printf("for_condition -> condition\n");
			$$ = $1;
			blank_count--;	
	      	}
	|	factor IN factor range	
		{
			Print_Blank();
			blank_count++;
			printf("for_condition -> factor IN factor range\n");
			$$ = $1;
			blank_count--;	
		}
	;
range	:	DOUBLEDOT factor step_count 
      		{
			Print_Blank();
			blank_count++;
			printf("range -> DOUBLEDOT factor step_count\n");
			$$ = $2;
			blank_count--;	
      		}
	|	DOWNTO factor step_count 
		{
			Print_Blank();
			blank_count++;
			printf("range -> DOWNTO factor step_count\n");
			$$ = $2;
			blank_count--;	
		}
	;
step_count:	STEP NUMBER	
	  	{ 
			Print_Blank();
			blank_count++;
			printf("step_count -> STEP NUMBER\n");
			$$ = $2;
			blank_count--;	
	  	}
	;
withelse:	ELSEIF expr withelse	
		{	
			Print_Blank();
			blank_count++;
			printf("withelse -> ELSEIF expr withelse\n");
			$$ = $2;
			blank_count--;	
		}
	|	ELSE expr		
		{
			Print_Blank();
			blank_count++;
			printf("withelse -> ELSE expr\n");
			$$ = $2;
			blank_count--;	
		}
	;
val_decl:	ID EQUAL decl_content COMMA val_decl 
		{
			Print_Blank();
			blank_count++;
			printf("val_decl -> ID EQUAL decl_content COMMA val_decl\n");
			//tmp_data = Check_Type_Not_Saved($3);
			//tmp_idx = Var_Save($1, $3, tmp_data, var_name, data, var_type);
			//if(tmp_idx == -1)
			//	printf("Error : ID is saved already!\n\n");
			//if(tmp_idx == var_idx + 1)
			//	var_idx = tmp_idx;
			//else
			//	printf("Error : Hole in array!\n\n");
			blank_count--;	
		}
 	|	ID	
		{
			Print_Blank();
			blank_count++;
			printf("val_decl -> ID\n");
			//var_type[var_idx] = 0;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;
			blank_count--;	
		}
	|	ID EQUAL decl_content	
		{
			Print_Blank();
			blank_count++;
			printf("val_decl -> ID EQUAL decl_content\n");
			//tmp_data = Check_Type_Not_Saved($3);
			//var_type[var_idx] = tmp_data;
			//var_name[var_idx] = $1;
			//data[var_idx] = $3;
			//var_idx++;
			blank_count--;	
		}
	|	ID COLUMN type EQUAL decl_content COMMA val_decl 
		{
			Print_Blank();
			blank_count++;
			printf("val_decl -> ID COLUMN type EQUAL decl_content COMMA val_decl\n");
			//var_type[var_idx] = $3;
			//var_name[var_idx] = $1;
			//data[var_idx] = $5;
			//var_idx++;
			blank_count--;	
		}
	|	ID COLUMN type	
		{
			Print_Blank();
			blank_count++;
			printf("val_decl -> ID COLUMN type\n");
			//var_type[var_idx] = $3;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;
			blank_count--;	
		}
	|	ID COLUMN type EQUAL decl_content 
		{
			Print_Blank();
			blank_count++;
			printf("val_decl -> ID COLUMN type EQUAL decl_content\n");
			//var_type[var_idx] = $3;
			//var_name[var_idx] = $1;
			//data[var_idx] = $5;
			//var_idx++;
			blank_count--;	
		}
	;
var_decl:	ID EQUAL decl_content COMMA var_decl 
		{
			Print_Blank();
			blank_count++;
			printf("var_decl -> ID EQUAL decl_content COMA var_decl\n");
			//var_type[var_idx] = 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = $3;
			//var_idx++;
			blank_count--;	
		}
 	|	ID	
		{
			Print_Blank();
			blank_count++;
			printf("var_decl -> ID\n");
			//var_type[var_idx] = 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;gc	
			blank_count--;	
		}
	|	ID EQUAL decl_content	
		{
			Print_Blank();
			blank_count++;
			printf("var_decl -> ID EQUAL decl_content\n");
			//var_type[var_idx] = 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = $3;
			//var_idx++;
			blank_count--;	
		}
	|	ID COLUMN type EQUAL decl_content COMMA var_decl 
		{
			Print_Blank();
			blank_count++;
			printf("var_decl -> ID COLUMN type EQUAL decl_content COMMA var_decl\n");
			//var_type[var_idx] = $3 + 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = $5;
			//var_idx++;
			blank_count--;	
		}
	|	ID COLUMN type	
		{
			Print_Blank();
			blank_count++;
			printf("var_decl -> ID COLUMN type\n");
			//var_type[var_idx] = $3 + 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = -1;
			//var_idx++;
			blank_count--;	
		}
	|	ID COLUMN type EQUAL decl_content 
		{
			Print_Blank();
			blank_count++;
			printf("var_decl -> ID COLUMN type EQUAL decl_content\n");
			//var_type[var_idx] = $3 + 10;
			//var_name[var_idx] = $1;
			//data[var_idx] = $5;
			//var_idx++;
			blank_count--;	
		}
	;
decl_content:	cal_sent	
	    	{
			Print_Blank();
			blank_count++;
			printf("decl_content -> cal_sent\n");
			$$ = $1;
			blank_count--;	
		}
	|	ID		
		{
			Print_Blank();
			blank_count++;
			printf("decl_content -> ID\n");
			//tmp_idx = Find_var_index($1, var_name);
			//$$ = data[tmp_idx];
			blank_count--;	
		}
	|	LIST OPEN list_content CLOSE	
		{
			Print_Blank();
			blank_count++;
			printf("decl_content -> LIST OPEN list_content CLOSE\n");
			//double * tmp = (double*) &($3);
			//$$ = *tmp;
			blank_count--;	
		}
	;
list_content:	STR COMMA list_content
	    	{
			Print_Blank();
			blank_count++;
			printf("list_content -> STR COMMA list_content\n");
			//*($3 + tmp_idx) = $1;
			//tmp_idx++;
			$$ = $3;
			blank_count--;	
	    	}
	|	STR
		{
			Print_Blank();
			blank_count++;
			printf("list_content -> STR\n");
			//char** tmp_str = (char**)calloc(100, sizeof(char*));
			//tmp_idx = 0;
			//tmp_str[tmp_idx] = $1;
			//$$ = tmp_str;
			//tmp_idx++;
			blank_count--;	
		}
	;
fun_call:	ID OPEN argument CLOSE
		{
			Print_Blank();
			blank_count++;
			printf("fun_call -> ID OPEN argument CLOSE\n");
			$$ = $3;
			blank_count--;	
		}
	;
argument:	ID argument
		{
			Print_Blank();
			blank_count++;
			printf("argument -> ID argument\n");
			$$ = $2;
			blank_count--;	
		}
	|	STR argument
		{
			Print_Blank();
			blank_count++;
			printf("argument -> STR argument\n");
			$$ = $2;
			blank_count--;	
		}
	|	NUMBER argument
		{
			Print_Blank();
			blank_count++;
			printf("argument -> NUMBER argument\n");
			$$ = $1;
			blank_count--;	
		}
	|	COMMA argument
		{
			Print_Blank();
			blank_count++;
			printf("COMMA argument\n");
			$$ = $2;
			blank_count--;	
		}
	|	epsilone
		{
			/*empty*/
		}
	;

epsilone: /*empty*/	{} ;
%%


/* User code */
int yyerror(const char *s)
{
	return printf("%s\n", s);
}

int Check_Type_Saved(char * name)
{
	int idx = Find_var_index(name, var_name);
	return var_type[idx]; 
}

int Check_Type_Not_Saved(double value)
{
	return 1;
}

void Print_Blank()
{
	for(int i = 0; i < blank_count; i++)
	{
		printf(" ");
	}
}
