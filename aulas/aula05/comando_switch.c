#include <stdio.h>

int main (){
    int nota;

printf(" Entre com a nota de 1 a 5 :");
scanf("%i", &nota);

switch (nota)
{
case 1 : printf ("Ganhou *\n"); break;
case 2 : printf("Ganhou **\n");break;
case 3 : printf("Ganhou ***\n");break;
case 4 : printf("Ganhou ****\n");break;
case 5 : printf("Ganhou *****\n");break;
default:printf("Nota invalida. Tente de novo!\n");
  
}

    return 0;
}