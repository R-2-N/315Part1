run:
	lex CS315_24F_Team_12.lex
	yacc CS315_24F_Team_12.yacc
	gcc y.tab.c -o parser


test1:
	./parser < CS315_24F_Team_12_Test1.txt

test2:
	./parser < CS315_24F_Team_12_Test2.txt

test3:
	./parser < CS315_24F_Team_12_Test3.txt

test4:
	./parser < CS315_24F_Team_12_Test4.txt

test1Error:
	./parser < CS315_24F_Team_12_Test1Error.txt

test2Error:
	./parser < CS315_24F_Team_12_Test2Error.txt

test3Error:
	./parser < CS315_24F_Team_12_Test3Error.txt

test4Error:
	./parser < CS315_24F_Team_12_Test4Error.txt


clean:
	rm -f lex.yy.c
	rm -f y.tab.c
	rm -f y.output
