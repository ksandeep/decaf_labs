all : decafch.tab.c decafch.tab.h lex.yy.c decafch
decafch.tab.c decafch.tab.h: decafch.y
	bison -d decafch.y

lex.yy.c: decafch.l decafch.tab.h
	flex decafch.l

decafch: lex.yy.c decafch.tab.c decafch.tab.h
	g++ decafch.tab.c lex.yy.c -lfl -o decafch

clean :
	rm decafch.tab.*
	rm decafch
	rm lex.yy.c


