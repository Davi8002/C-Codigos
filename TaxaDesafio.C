#include <stdio.h>

int main(void) {
  float preco;

  printf("Digite o produto do seu preço!\n");
  scanf("%f", &preco);

  if (preco > 100) {
    preco = (preco / 100) * 110;
    printf("Seu produto com 10%% de taxa ficou %1.1f", preco);
  } else if (preco <= 100) {
    preco = (preco / 100) * 120;
    printf("Seu produto com 20%% de taxa ficou %1.1f", preco);
  }

}
