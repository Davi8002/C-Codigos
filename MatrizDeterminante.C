#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int matriz[3][3];
  int determinante;
  printf("Digite as 9 posições da sua matriz! \n");

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d x %d", i + 1, j + 1);
      printf("\n \n");
      scanf("%d", &matriz[i][j]);
    }
    system("clear");
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  determinante = ((matriz[0][0] * matriz[1][1] * matriz[2][2]) +
                  (matriz[0][1] * matriz[1][2] * matriz[2][0]) +
                  (matriz[0][2] * matriz[1][0] * matriz[2][1])) -
                 ((matriz[0][1] * matriz[1][0] * matriz[2][2]) +
                  (matriz[2][1] * matriz[1][2] * matriz[0][0]) +
                  (matriz[0][2] * matriz[1][1] * matriz[2][0]));
  printf("%d", determinante);
}
