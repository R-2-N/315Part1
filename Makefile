run:
	lex syntax.l
	yacc -v yacc.y
	gcc y.tab.c
