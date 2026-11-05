#include <stdio.h>
#include <string.h>
int main(){
char vetor [13];

vetor[0]= 'E';
vetor[1]='u';
vetor[2]=' ';
vetor[3]='g';
vetor[4]='o';
vetor[5]='s';
vetor[6]='t';
vetor[8]='o';
vetor[9]=' ';
vetor[10]='d';
vetor[11]=' ';
vetor[12]='c';


for (int i = 0; i <13 ; i++){
    printf("%c", vetor [i]);
}
printf("\n");

printf("%s\n", vetor);


//NAUM PODE!
//vetor = "Eu gosto de c";
//vetor = "Eu gosto de" + "c"

//copiar um string
strcpy (vetor, "bora codar!");
vetor [12]= '\0';  // toda string termina em \0
for (int i = 0; i <13 ; i++){
    printf("%c", vetor [i]);
}
printf("\n");
printf("%s\n", vetor);

strcpy (vetor, "bora ");
printf("%s\n", vetor);
//concatenar um strig
strcat(vetor,"codar!");
printf("%s\n", vetor);
//comparar um string
printf("banana = BANANA?%i\n", strcmp ("banana", "BANANA"));//> 0 ordem crescente
printf("banana = BANANA?%i\n", strcmp ("BANANA", "banana"));//< 0 ordem decresente
printf("banana = BANANA?%i\n", strcmp ("banana", "banana"));// = 0 iguais
//tamanho da string
printf("banana tem %i caracteres\n", strlen ("banana"));
//procurar um caracter na string
printf("banana tem a letra 'a'? %s\n", strchr("banana", 'a'));
printf("banana tem a letra 'a'? %s\n", strchr("banana", 'e'));
//procurar um string na string
printf("banana tem a 'ana'? %s\n",strstr("banana","ana"));
printf("banana tem a 'ama'? %s\n",strstr("banana","ama"));
// preencher um string com um caracter
memset(vetor,'a', 5);
printf("%s\n",vetor);
memset (vetor, '\0', sizeof(vetor)); //limpa o vetor
printf("%s\n",vetor);

    return 0;
}