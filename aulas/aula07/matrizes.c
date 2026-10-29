#include <stdio.h>
int main()
{
    // L  C
    float notas[5][4]; // 5 linhas x 4 colunas

    for (int i = 0; i < 5; i++)
    { // andei nas colunas
        for (int j = 0; j < 4 ; j++)
        { // andei mas colunas
            printf("informe o valor da nota[%i,%i]:", i, j);
            scanf("%f", &notas[1][j]);
        }
    }
    printf("As minhas notas foram : \n");
    for (int i = 0; i < 5; i++)
    {
        // andei nas linhas
        for (int j = 0; j < 4; j++)
        { // andei nas colunas
            printf("|%5.1f|", notas[i][j]);
        }
        printf("\n");
    }
    return 0;
}