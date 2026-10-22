all: limpa compila roda 

compila: comando_while.c
	gcc comando_while.c -o a.out -lm

roda: a.out
	./a.out 

limpa: 
	rm a.out