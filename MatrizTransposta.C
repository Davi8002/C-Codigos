#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x;
  int y;
  printf("Quantidade de Linhas da matriz que você deseja transformar:\n");
  scanf("%d", &x);
   printf("Quantidade de Colunas da matriz que você deseja transformar:\n");
   scanf("%d", &y);
  
  int matrizOriginal[x][y];
  int matrizTransposta[y][x];

  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      printf("%d x %d", i + 1, j + 1);
      printf("\n");
      scanf("%d", &matrizOriginal[i][j]);
    }
    system("clear");
  }

  
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      printf("%d ", matrizOriginal[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      matrizTransposta[j][i] = matrizOriginal[i][j];
    }

  }
  printf("\n \n");
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      printf("%d ", matrizTransposta[i][j]);
    }
    printf("\n");
  }

}

