#include <stdio.h>
int main()
{
    int numero;
    unsigned long long fatorial=1L;

    printf("Entre com um numero inteiro de 1 a 50: ");
    scanf("%i", &numero);

    if (numero < 0)
    {
        printf("Fatorial nao existe para numeros negativo\n");
    }
    else {
        for (int i = 1; i <= numero; i++)
        {
            fatorial = fatorial * i;
        }
    }printf("O fatorial de %i e %lld\n", numero, fatorial);
    
    return 0;
}