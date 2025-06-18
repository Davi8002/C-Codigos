#include <stdio.h>
#include <string.h>


int main(void) {
char nome[50], rua[50];
int idade, telefone;

printf("Digite o seu nome!\n");
scanf("%s", &nome[50]);

printf("Digite sua idade!\n");
scanf("%d", &idade);

printf("Digite seu telefone!\n");
scanf("%d", &telefone);

printf("Digite sua rua!\n");
scanf("%s", &rua[50]);
  
printf("Seu nome é %s, você tem %d anos, mora na rua %s e seu telefone é %d", nome, idade, rua, telefone);


}
