#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    printf(" Entre com um numero inteiro: ");
    scanf("%i", &numero1);

    printf(" Entre com outro numero inteiro:");
    scanf("%i", &numero2);

    /*sintexe basica
    if(condicao eh verdadeiro) {
       faz algo
    }
    */
    if (numero2 == 0)
    {
        printf(" Nao posso dividir por ZERO\n");
    }
    /*sistase completa
    if(condicao eh verdadeira){
    | faz uma coisa
    }else
    | faz outra coisa
    }
    */

    if (numero2 != 0)
    {
        int divisao = numero1 / numero2;
        printf("%i / %i = %i\n", numero1, numero2, divisao);
    }
    else
    {
        printf(" Nao posso diviir por zero\n");
    }
    
    return 0;
}