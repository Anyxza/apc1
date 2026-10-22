#include <stdio.h>
int main()
{
    int numero = 0;

    printf("Entre com um numero de 1 a 10:\n");
    scanf("%i", &numero);

    /*
    comando while = repete nao sei a quantidade de vezes

    while (codicao_eh_verdadeira){
    faz_algo;
    }
    */

    while (numero < 1 || numero > 10)
    {
        printf("Numero invalido, Tente de novo!\n");
        printf("Entre com um numero de 1 a 10 :\n");
        scanf("%i", &numero);
    }

    printf(" A tabuada de multiplicacao de %i\n", numero);
    int i = 1;
    while (i <= 10)
    {

        printf("%i x %i = %i\n", i, numero, i * numero);
        i++;
    }

    return 0;
}
