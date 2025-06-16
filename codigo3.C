
#include <stdio.h>
#include <string.h>

//
typedef struct {
  char nome[50];
  int id;
  char autor[50];
  char sinopse[250];
  char genero[50];
  int paginas;
} Livro;

int main(void) {
  Livro livro[2];
  Livro teste;
  

  printf("Digite o nome do Livro!\n");
  fgets(teste.nome, 50, stdin);
  // fgets(nomedoobjeto, tamanhodotexto, stdin)
  teste.nome[strcspn(teste.nome, "\n")] = '\0'; // naoentendimasta

  printf("Digite o id do Livro!\n");
  scanf("%d", &teste.id);
  // scanf("texto e %x", nomedavariavel)
  getchar();
  // limpa o buffer com o \n pra o proximo fgets nao pegar ele

  printf("Digite o autor do Livro!\n");
  fgets(teste.autor, 50, stdin);
  teste.autor[strcspn(teste.autor, "\n")] = '\0';
  // verifica onde ta com o \n do enter e depois troca pelo fim da string

  printf("Digite a sinopse do Livro!\n");
  fgets(teste.sinopse, 250, stdin);
  teste.sinopse[strcspn(teste.sinopse, "\n")] = '\0';

  printf("Digite o genero do Livro!\n");
  fgets(teste.genero, 50, stdin);
  teste.genero[strcspn(teste.genero, "\n")] = '\0';

  printf("Digite a quantidade de paginas do Livro!\n");
  scanf("%d", &teste.paginas);
  getchar();

  printf("\n--- Livro Cadastrado ---\n");
  printf("Nome: %s\n", teste.nome);
  printf("ID: %d\n", teste.id);
  printf("Autor: %s\n", teste.autor);
  printf("Sinopse: %s\n", teste.sinopse);
  printf("Gênero: %s\n", teste.genero);
  printf("Páginas: %d\n", teste.paginas);
}
