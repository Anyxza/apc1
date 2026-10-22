#include <stdio.h>
int main()
{

    int idade;
    printf("Digite a idade: ");
    scanf("%i", &idade);

    if (idade < 0)

    {
        printf("Idade invalida!\n");
    }
    else if (idade <= 12)
    {
        printf("Classificacao: Crianca\n");
    }
    else if (idade <= 17)
    {
        printf("Classificacao: Adolecente\n");
    }
    else if (idade <= 64)
    {
        printf("Classificacao: Adulto\n");
    }
    else if (idade += 65)
    {
        printf("Classificacao:Idoso\n");
    }

    return 0;
}
