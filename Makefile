run:
	lex syntax.l
	yacc -v yacc.y
	gcc y.tab.c -o parser

test1:
	./parser < test1.txt

test2:
	./parser < test2.txt

test3:
	./parser < test3.txt

test4:
	./parser < test4.txt
