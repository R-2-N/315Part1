%token 
SEMICOLON COMMENT IF DO LBRACE RBRACE ELSE WHILE FOR DEF VARIABLE LP RP RETURN COMMA TYPE CONTINUE BOOLEAN LESSER LARGER LESSER_EQ LARGER_EQ EQUALS NOT_EQUALS AND OR XOR BREAK ASSIGNMENT MINUS PLUS DIVISION MULTIPLICATION MODULUS NOT INTEGER FLOAT STRING PRIMITIVE_FUNCTION
%%

program: program statement_list | program COMMENT | COMMENT | statement_list;

statement_list: statement_list SEMICOLON statement SEMICOLON | statement SEMICOLON;
statement: void_statement | expression;

void_statement: if_statement | loop | function_def | type_def | BREAK | CONTINUE;

if_statement: if_statement else_statement | IF conditional_expression DO LBRACE statement_list RBRACE
else_statement: ELSE DO LBRACE statement_list RBRACE | ELSE IF conditional_expression DO LBRACE statement_list RBRACE;

loop: while_loop | for_loop;
while_loop: WHILE expression DO LBRACE statement_list RBRACE
for_loop: FOR LP assignment_expression SEMICOLON expression SEMICOLON assignment_expression RP DO LBRACE statement_list RBRACE; 

function_def: DEF VARIABLE LP variable_list RP DO LBRACE statement_list RETURN LP expression RP RBRACE;
variable_list: VARIABLE COMMA variable_list | VARIABLE | EMPTY;

type_def: TYPE VARIABLE;

expression: conditional_expression | assignment_expression;

conditional_expression: conditional_expression condition_operator low_precedence_arithmetic_expression | low_precedence_arithmetic_expression;

condition_operator: LESSER | LARGER | LESSER_EQ | LARGER_EQ | EQUALS | NOT_EQUALS | AND | OR | XOR;

assignment_expression: type_def ASSIGNMENT expression | VARIABLE ASSIGNMENT expression;

low_precedence_arithmetic_expression:  low_precedence_arithmetic_expression low_precedence_operator high_precedence_arithmetic_expression | high_precedence_arithmetic_expression;
high_precedence_arithmetic_expression: high_precedence_arithmetic_expression high_precedence_operator highest_precedence_arithmetic_expression | highest_precedence_arithmetic_expression;
highest_precedence_arithmetic_expression : highest_precedence_operator highest_precedence_arithmetic_expression | LP conditional_expression  RP | value;

low_precedence_operator: MINUS | PLUS;
high_precedence_operator: DIVISION | MULTIPLICATION | MODULUS;
highest_precedence_operator: NOT;

value: function_call | VARIABLE | INTEGER | FLOAT | STRING | BOOLEAN;

function_name: VARIABLE | PRIMITIVE_FUNCTION;

function_call: function_name LP expression_list RP;
expression_list: expression COMMA expression_list | expression | EMPTY ;

EMPTY: ;

%%

#include "lex.yy.c"
int yyerror(char* s){
	fprintf(stderr, "%s\n", s);
}
