all: limpa compila roda 

compila: matrizes.c
	gcc matrizes.c -o a.out -lm

roda: a.out
	./a.out 

limpa: 
	rm a.out