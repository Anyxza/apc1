#include <stdio.h>

int main(){
    /*tipos de dados
char - um caracter 
int - um inteiro-,0 ou +
float - um decimal com 6 casas 
double - um decimal com 12 __C89_NAMELESSUNIONNAME2
void - sem tipo 
*/

//declara de variaveis 
char letra;
int numero_inteiro;
float media_final;
double exponencial;
//atribuir valor a uma variavel
letra = 'A';
numero_inteiro = 10;
media_final = 9.5f;
exponencial = 9.5;


printf("o valor da letra = %c\n",letra);
printf("o valor de numero_inteiro = %i\n", numero_inteiro);
printf("valor de media_final=%f\n", media_final);
printf("o valor de exponencial=%f\n",exponencial);




return 0;
}