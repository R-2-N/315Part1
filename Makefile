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

errortest1:
	./parser < test1error.txt

errortest2:
	./parser < test2error.txt

errortest3:
	./parser < test3error.txt

errortest4:
	./parser < test4error.txt


clean:
	rm -f lex.yy.c
	rm -f y.tab.c
	rm -f y.output
