all: limpa compila roda 

compila:classificacao_idade.c
	gcc classificacao_idade.c -o a.out -lm

roda: a.out
	./a.out 

limpa: 
	rm a.out