#include <stdio.h>
#include <string.h>

int main(void) {
  float preco;
  int escolha;
  int parcelas;

  printf("Digite o produto do seu preço total!\n");
  scanf("%f", &preco);
  system("clear");

  printf("Opção 1 : a vista com 10%% de desconto;\n\n");
  printf("Opção 2 : em duas vezes (preço da etiqueta);\n\n");
  printf("Opção 3 : de 3 até 10 vezes com 3%% de juros ao mês\n\n");
  scanf("%d", &escolha);
  system("clear");

  if (escolha == 1) {
    preco = (preco / 100) * 90;
    printf("Seu preço total é de %1.1f\n\n", preco);
  } else if (escolha == 2) {
    preco = (preco / 2);
    printf("Seu preço ficou em duas parcelas de %1.1f\n\n", preco);
  } else if (escolha == 3) {
    if (preco < 100) {
      printf("Você deseja parcelar em quantas vezes?");
      scanf("%d", &parcelas);
      if (parcelas < 3) {
        parcelas = 3;
      }else if (parcelas > 10) {
        parcelas = 10;
      }
      preco = preco / parcelas;
      printf("Seu preço ficou em %d parcelas de %1.1f\n\n", parcelas, preco);

    } else if (preco >= 100) {
      printf("Você deseja parcelar em quantas vezes?\n");
      scanf("%d", &parcelas);

      if (parcelas < 3) {
        parcelas = 3;
      } else if (parcelas > 10) {
        parcelas = 10;
      }
  
      preco = ((preco/parcelas) * 1.03);
      printf("Seu preço ficou em %d parcelas de %1.1f\n\n", parcelas, preco);
    }
  }
}
