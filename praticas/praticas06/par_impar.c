#include <stdio.h>
int main()
{
    int inteiro;
    printf("Digite um numero inteiro ");
    scanf("%i", &inteiro);

    if (inteiro % 2 == 0)
    {
        printf("O numero %i e PAR.\n", inteiro);
    }
    else
    {
        printf("O inteiro %i e IMPAR.\n", inteiro);
    }

    return 0;
}