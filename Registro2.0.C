#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
  char nome[50];
  int id;
  char autor[50];
  char sinopse[250];
  char genero[50];
  int paginas;
  bool emprestimo;

} Livro;
int quantidadeLivro = 0;
Livro livro[20];


void registro(int i){
  printf("Digite o nome do Livro!\n");
  fgets(livro[i].nome, 50, stdin);
  // fgets(nomedoobjeto, tamanhodotexto, stdin)
livro[i].nome[strcspn(livro[i].nome, "\n")] = '\0'; // naoentendimasta

  printf("Digite o id do Livro!\n");
  scanf("%d", &livro[i].id);
  // scanf("texto e %x", nomedavariavel)
  getchar();
  // limpa o buffercom o \n pra o proximo fgets nao pegar ele

  printf("Digite o autor do Livro!\n");
  fgets(livro[i].autor, 50, stdin);
livro[i].autor[strcspn(livro[i].autor, "\n")] = '\0';
  // verifica onde ta com o espaço e depois troca pelo fim da string

  printf("Digite a sinopse do Livro!\n");
  fgets(livro[i].sinopse, 250, stdin);
livro[i].sinopse[strcspn(livro[i].sinopse, "\n")] = '\0';

  printf("Digite o genero do Livro!\n");
  fgets(livro[i].genero, 50, stdin);
  livro[i].genero[strcspn(livro[i].genero, "\n")] = '\0';

  printf("Digite a quantidade de paginas do Livro!\n");
  scanf("%d", &livro[i].paginas);
  getchar();
  //fflush(stdin);
  livro[i].emprestimo = false;
  
  printf("\n--- Livro Cadastrado ---\n");
  printf("Nome: %s\n", livro[i].nome);
  printf("ID: %d\n", livro[i].id);
  printf("Autor: %s\n", livro[i].autor);
  printf("Sinopse: %s\n", livro[i].sinopse);
  printf("Gênero: %s\n", livro[i].genero);
  printf("Páginas: %d\n", livro[i].paginas);
  quantidadeLivro++;
  return;
};


int main(void) {
  registro(quantidadeLivro);      

 
}
