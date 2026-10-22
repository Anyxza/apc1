#include <stdio.h> 

int main(){


int numero;

printf("Entre com um numero de 1 a 10");
scanf("%i",&numero);

printf("A tabuada de multiplicacao de %i\n",numero);

//("1 x %i = %i\n", numero, 1 * numero);...
/* 
comando for = repete n vezes = contada
for(contadoe; condicao; incremento) {
faz_algo;
}
*/
for (int i = 1; i <= 10; i++){
    printf("%i x %i = %i\n", i,numero, i * numero);

    for (int i = 10 i>= 1; i --){
printf("%i x %i = %i\n", i, numero, i * numero)

}
// perigo
 for (int i = 1; i > 0/ 1++){
printf(" Ao infinito e alem\n");


 }
    

}


    return 0;

}
