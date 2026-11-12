#include <stdio.h>

int main(){

//como representar algo do mundo real?
//o que compoe um endereço residencial?
struct endereco_t 
{
char logradouro[31];
int numero;
char complemento [31];
char bairro[31];
char cidade[51];
char uf[3];
long int cep;
};
// criar uma variavel a partir da estrutura
struct endereco_t endereco;

printf("Forneca o seu endereco\n");
printf("Logradouro: ");

scanf("%s", endereco.logradouro);
printf("Numero: ");
scanf("%i",endereco.numero);
printf("Complemento");
scanf("%s", endereco.complemento);
printf("Bairro");
scanf("%s", endereco.bairro);
printf("cidade");
scanf("%s",endereco.cidade);
printf("UF: ");
scanf("%s", endereco.uf);
printf("CEP: ");
scanf("%li", &endereco.cep);

struct endereco;
//copia os valores da estrutura para outra
outro = endereco;

printf("Seu endereco\n");
printf("%s,%i,%s\n", outro.logradouro, outro.numero, outro.complemento);
printf("%s - %s/%s\n", outro.bairro, outro.cidade, outro.uf);
printf("%08li\n", outro.cep);

struct contato_t {

strcpy(contato.nome, "Ana");
contato.endereco.numero = 612;
strcpy (contato.endereco.logradouro, "SQS");



}
{
    /* data */
};

    return 0;
}