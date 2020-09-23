%{
	#include<stdio.h>
	int yylex(void);
	int yyerror(const char *s);
	void print(char *s);
	int success = 1;
	#define YYDEBUG 1
%}

%token INTEGER FLOAT IDENTIFIER ASSIGNMENT RELATIONAL ARITHMETIC LOGICAL UNRECOGNISED DECLARE AND ARRAY BEGIN CASE DIV DO ELSE END FOR FROM GOTO IF IS MOD NEW NOT OF OR PROCEDURE RECORD REF THEN TO TYPE WHILE COLON SEMICOLON COMMA DOT DOUBLESLASH LEFTPAR RIGHTPAR LEFTSQUARE RIGHTSQUARE LE GE LT GT EQ ET PLUS MINUS MULTI DIVIDE
%start program

//void print(char *s);

%%
program : block
	{
	print("program -> block");
	}
	;
/*range : block
	{
	print("range -> block");
	}
	| statement_list
	{
	print("range -> statement_list");
	} 
	| iteration
	{
	print("range -> iteration");
	} 
	| record_type
	{
	print("range -> record_type");
	} 
	| procedure
	{
	print("range -> procedure");
	}
	;*/
block : DECLARE declaration block_alpha BEGIN statement statement_alpha END
	{
	print("block -> DECLARE declaration block_alpha BEGIN statement statement_alpha END");
	}
	;
block_alpha : SEMICOLON declaration block_alpha
	{
	print("block_alpha -> SEMICOLON declaration block_alpha");
	} 
	| /*empty*/
	;
statement_alpha : SEMICOLON statement statement_alpha
	{
	print("statement_alpha -> SEMICOLON statement statement_alpha");
	} 
	| /*empty*/
	;
statement_list : statement statement_alpha
	{
	print("statement_list -> statement statement_alpha");
	}
	;
statement : label_definition statement_1
	{
	print("statement -> label_definition1 statement_1");
	}
	|
	statement_1
	{
	print("statement -> statement_1");
	}
	| error SEMICOLON
	{
	print("statement -> error");
	}
	;
/*label_definition1 : label_definition label_definition1
	{
	print("label_definition1 : label_definition label_definition1");
	}
	|
	/*empty
	{
	print("label_definition2 : ");
	}
	;*/
statement_1 : expression 
	{
	print("statement_1 -> expression ");
	}
	| iteration
	{
	print("statement_1 -> iteration ");
	} 
	| jump
	{
	print("statement_1 -> jump");
	}
	;
label_definition : IDENTIFIER COLON
	{
	print("label_definition -> IDENTIFIER COLON");
	}
	;
iteration : WHILE expression loop
	{
	print("iteration -> WHILE expression loop");
	} 
	| FOR IDENTIFIER FROM expression TO expression loop
	{
	print("iteration -> FOR IDENTIFIER FROM expression TO expression loop");
	}
	;
loop : DO statement_list END
	{
	print("loop -> DO statement_list END");
	}
	;
jump : GOTO IDENTIFIER
	{
	print("jump -> GOTO IDENTIFIER");
	}
	;



declaration : variable_declaration
	{
	print("declaration -> variable_declaration");
	} 
	| identity_declaration
	{
	print("declaration -> identity_declaration");
	} 
	| procedure_declaration
	{
	print("declaration -> procedure_declaration");
	} 
	| type_declaration
	{
	print("declaration -> type_declaration");
	}
	;
variable_declaration : IDENTIFIER COLON type_specification
	{
	print("variable_declaration -> IDENTIFIER COLON type_specification");
	} 
	| IDENTIFIER COLON ARRAY LEFTSQUARE bound_pair bound_pair_alpha RIGHTSQUARE ARRAY type_specification
	{
	print("variable_declaration -> IDENTIFIER COLON ARRAY LEFTSQUARE bound_pair bound_pair_alpha RIGHTSQUARE ARRAY type_specification");
	}
	;
type_specification : IDENTIFIER
	{
	print("type_specification -> IDENTIFIER");
	} 
	| REF type_specification
	{
	print("type_specification -> REF type_specification");
	} 
	| REF array_type
	{
	print("type_specification -> REF array_type");
	} 
	| procedure_type
	{
	print("type_specification -> procedure_type");
	}
	;
bound_pair : expression COLON expression
	{
	print("bound_pair -> expression COLON expression");
	}
	;
array_type : ARRAY LEFTSQUARE special RIGHTSQUARE OF type_specification
	{
	print("array_type -> ARRAY LEFTSQUARE special RIGHTSQUARE OF type_specification");
	}
	;
special : COMMA special /* ,* */
	{
	print("special -> COMMA special");
	}
	| /*empty*/
	;
procedure_type : PROCEDURE procedure_nonempty
	{
	print("procedure_type -> PROCEDURE");
	}
	;
procedure_nonempty : LEFTPAR type_specification type_specification_alpha RIGHTPAR
	{
	print("procedure_nonempty -> LEFTPAR type_specification type_specification_alpha RIGHTPAR");
	} 
	| result_type
	{
	print("procedure_nonempty -> PROCEDURE result_type");
	} 
	| LEFTPAR type_specification type_specification_alpha RIGHTPAR result_type
	{
	print("procedure_nonempty -> LEFTPAR type_specification type_specification_alpha RIGHTPAR result_type");
	}
	|/*empty*/
	;
/*procedure_type_1 : SPECIAL type_specification type_specification_alpha SPECIAL
	{
	print("procedure_type_1 : SPECIAL type_specification type_specification_alpha SPECIAL");
	} 
	| /*empty
	;
procedure_type_2 : result_type
	{
	print("procedure_type_2 : result_type");
	} 
	| /*empty
	;*/
identity_declaration : IDENTIFIER IS expression COLON type_specification
	{
	print("identity_declaration -> IDENTIFIER IS expression COLON type_specification");
	}
	;
procedure_declaration : PROCEDURE IDENTIFIER procedure
	{
	print("procedure_declaration -> PROCEDURE IDENTIFIER procedure");
	}
	;
procedure : LEFTPAR parameter parameter_alpha RIGHTPAR SEMICOLON expression
	{
	print("procedure -> LEFTPAR parameter parameter_alpha RIGHTPAR SEMICOLON expression");
	}
	| result_type SEMICOLON expression
	{
	print("procedure -> result_type SEMICOLON expression");
	}
	| LEFTPAR parameter parameter_alpha RIGHTPAR result_type SEMICOLON expression
	{
	print("procedure -> LEFTPAR parameter parameter_alpha RIGHTPAR result_type SEMICOLON expression");
	}
	| SEMICOLON expression
	{
	print("procedure -> SEMICOLON expression");
	}
	;
/*procedure_1 : SPECIAL parameter parameter_alpha SPECIAL
	{
	print("procedure_1 : SPECIAL parameter parameter_alpha SPECIAL");
	}
	| /*empty
	;*/
parameter : IDENTIFIER COLON type_specification
	{
	print("parameter -> IDENTIFIER COLON type_specification");
	}
	;
result_type : COLON type_specification
	{
	print("result_type -> COLON type_specification");
	}
	;
type_declaration : TYPE IDENTIFIER EQ record_type
	{
	print("type_declaration -> TYPE IDENTIFIER EQ record_type");
	}
	;
record_type : RECORD field field_alpha END
	{
	print("record_type -> RECORD field field_alpha END");
	}
	;
field : IDENTIFIER COLON type_specification
	{
	print("field -> IDENTIFIER COLON type_specification");
	}
	;
/* type : type_specification
	{
	print("type -> type_specification");
	} 
	| array_type
	{
	print("type -> array_type");
	} 
	| procedure_type
	{
	print("type -> procedure_type");
	}
	;*/

/*alphas*/
bound_pair_alpha : COMMA bound_pair bound_pair_alpha
	{
	print("bound_pair_alpha -> COMMA bound_pair bound_pair_alpha");
	} 
	| /*empty*/
	;
type_specification_alpha : COMMA type_specification type_specification_alpha
	{
	print("type_specification_alpha -> SCOMMA type_specification type_specification_alpha");
	} 
	| /*empty*/
	;
parameter_alpha : SEMICOLON parameter parameter_alpha
	{
	print("parameter_alpha -> SEMICOLON parameter parameter_alpha");
	} 
	| /*empty*/
	;
field_alpha : SEMICOLON field field_alpha
	{
	print("field_alpha -> SEMICOLON field field_alpha");
	} 
	| /*empty*/
	;


name : IDENTIFIER
	{
	print("name -> IDENTIFIER");
	} 
	| name DOT IDENTIFIER
	{
	print("name -> name DOT IDENTIFIER");
	} 
	| name LEFTSQUARE expression expression_alpha RIGHTSQUARE 
	{
	print("name -> name LEFTSQUARE expression expression_alpha RIGHTSQUARE");
	}
	/*| name '|^'/*uparrow*/ 
	| NEW IDENTIFIER 
	{
	print("name -> NEW IDENTIFIER");
	}
	| procedure_call
	{
	print("name -> procedure_call");
	}
	;
expression : assignment
	{
	print("expression -> assignment");
	} 
	| disjunction
	{
	print("expression -> disjunction");
	}
	;
assign : ASSIGNMENT
	{
	print("assign -> ASSIGNMENT");	
	}
	;
assignment : name assign expression
	{
	print("assignment -> name assign expression");
	}
	;
disjunction : conjunction
	{
	print("disjunction -> conjunction");
	} 
	| disjunction OR conjunction
	{
	print("disjunction -> disjunction OR conjunction");
	}
	;
conjunction : comparison 
	{
	print("conjunction -> comparison ");
	}
	| conjunction AND comparison
	{
	print("conjunction -> conjunction AND comparison ");
	}
	;
comparison : relation
	{
	print("comparison -> relation");
	}
	| relation eqop relation
	{
	print("comparison -> relation eqop relation");
	}
	;
/*comparison_1 : eqop relation
	{
	print("comparison_1 : eqop relation");
	} 
	| /*empty
	;*/
eqop : EQ 
	{
	print("eqop -> EQ ");
	}
	| ET
	{
	print("eqop -> ET ");
	}
	;
relation : sum relop sum
	{
	print("relation -> sum relop sum");
	}
	| sum
	{
	print("relation -> sum");
	}
	;
/*relation_1 : relop sum 
	{
	print("relation_1 : relop sum ");
	}
	| /*empty
	;*/
relop : LT 
	{
	print("relop -> LT ");
	}
	| GT 
	{
	print("relop -> GT ");
	}
	;
sum : term 
	{
	print("sum -> term ");
	}
	| sum addop term
	{
	print("sum -> sum addop term ");
	}
	;
addop : PLUS
	{
	print("addop -> PLUS");
	} 
	| MINUS
	{
	print("addop -> MINUS");
	}
	;
term : factor 
	{
	print("term -> factor");
	}
	| term mulop factor
	{
	print("term -> term mulop factor");
	}
	;
mulop : MULTI 
	{
	print("mulop -> MULTI");
	}
	| DIVIDE 
	{
	print("mulop -> DIVIDE");
	}
	| DIV
	{
	print("mulop -> DIV");
	} 
	| MOD
	{
	print("mulop -> MOD");
	} 
	;
factor : primary 
	{
	print("factor -> primary ");
	}
	| unop factor
	{
	print("factor -> unop factor");
	}
	;
unop : PLUS
	{
	print("unop -> PLUS");
	}
	| MINUS
	{
	print("unop -> MINUS");
	}
	| NOT
	{
	print("unop -> NOT");
	}
	;
primary : denotation
	{
	print("primary -> denotation");
	} 
	| name 
	{
	print("primary -> name");
	}
	| LEFTPAR expression RIGHTPAR
	{
	print("primary -> LEFTPAR expression RIGHTPAR");
	} 
	| block
	{
	print("primary -> block");
	} 
	| clause
	{
	print("primary -> clause");
	}
	;

denotation : integer
	{
	print("denotation -> integer");	
	}
	|
	FLOAT
	{
	print("denotation -> FLOAT");	
	}
	;

procedure_call : name LEFTPAR argument argument_alpha RIGHTPAR
	{
	print("procedure_call -> name LEFTPAR argument argument_alpha RIGHTPAR");
	}
	;
argument : expression
	{
	print("argument -> expression");
	}
	;
clause : conditional_clause
	{
	print("clause -> conditional_clause");
	} 
	| case_clause
	{
	print("clause -> case_clause");
	}
	;
conditional_clause : IF expression THEN statement_list END 
	{
	print("conditional_clause -> IF expression THEN statement_list END");
	}
	| IF expression THEN statement_list ELSE statement_list END
	{
	print("conditional_clause -> IF expression THEN statement_list ELSE statement_list END");
	}
	;
case_clause : CASE expression OF  case_label COLON statement_list statement_list_alpha 
	ELSE statement_list END
	{
	print("case_clause -> CASE expression OF  case_label COLON statement_list statement_list_alpha ELSE statement_list END");
	}
	;
case_label : integer
	{
	print("case_label -> integer");
	}
	;


/*alphas*/
expression_alpha : COMMA expression expression_alpha 
	{
	print("expression_alpha -> COMMA expression expression_alpha ");
	}
	| /*empty*/
	;
argument_alpha : COMMA argument argument_alpha 
	{
	print("argument_alpha -> COMMA argument argument_alpha ");
	}
	| /*empty*/
	;
statement_list_alpha : DOUBLESLASH statement_list statement_list_alpha 
	{
	print("statement_list_alpha -> DOUBLESLASH statement_list statement_list_alpha");
	}
	| /*empty*/
	;
/*identifier : IDENTIFIER
	{
	print("identifier -> IDENTIFIER");
	}
	;*/
integer : INTEGER
	{
	print("integer -> INTEGER");
	}
	;
%%

int main()
{
    // UNCOMMENT THE BELOW LINES TO PRINT THE RESPECTIVE STATES AND GOTO
    // DEBUG DRIVER
    /*#if YYDEBUG
	yydebug = 1;
    #endif*/
    init_symtable();
    printf("\n\n----------------------------------------Parsing Begins Here:----------------------------------------\n\n");
    yyparse();
    if(success)
    	printf("\nParsing Successful\n\n");
    print_table();
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}

void print(char *s){
	printf("Reduction:  %s\n", s);
}


