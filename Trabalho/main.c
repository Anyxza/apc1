#include <stdio.h>
#include <stdlib.h>

#define Limite 20

int main(){
   
    int opcao = 0;
struct playlist{

 
int id;
char desc[]
};
    while (opcao != 5)
    {
        opcao = 0;
        system("clear");
        printf("+--------------------------+\n");
        printf(" | Cadastro da minha play\n");
        printf("+--------------------------+\n");
        printf("MENU PRICIPAL\n");
        printf("1 - cadastrar\n");
        printf("2 - Listar\n");
        printf("3 - procurar\n");
        printf("4 - Modificar\n");
        printf("5 - Remover\n");
        printf("6 - sair\n");
        printf("Sua opcao > ");
        scanf("%i", &opcao);
        while(getchar() != '\n');
               
        switch(opcao){
            case 1:{}
            case 2:{}
            case 3:{
                printf("informe o dado de Alguma coisa\n"); 
                break;
            }
            case 4:{}
            case 5:{
                printf("Informe o dado de Alguma coisa\n");
                printf("Deseja remover alhuma coisa\n");
                if (getchar()== 'S');
            }
            case 6:break;
            default:
            printf("Opcao invalida. Tente de novo!");
            printf("Pressione ENTER para continuar...");
            while (getchar() != '\n');
            break;
            {
                /* code */
            }
            
        
        }
    }

    return 0;
}
