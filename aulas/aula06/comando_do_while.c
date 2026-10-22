#include <stdio.h>
int main()
{
    int numero = 0;

    do
    {
        printf("Entre com um numero de 1 a 10:\n");
        scanf("%i", &numero);
        while (getchar() != '\n')
            ;
    } while (numero < 1 || numero > 10);

    /*
    comando while = repete nao sei a quantidade de vezes

    while (codicao_eh_verdadeira){
    faz_algo;
    }
    */

    printf(" A tabuada de multiplicacao de %i\n", numero);
    int i = 1;
    do
    {
        printf("%i x %i = %i\n", numero);
        i++;
        
    } while (i <= 10);

    return 0;
}
