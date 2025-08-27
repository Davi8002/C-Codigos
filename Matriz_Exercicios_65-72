
#include "afff.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int afff;
  printf("Qual Exercicio vc deseja testar heh\n");
  scanf("%d", &afff);

  switch (afff) {
  case 65:
    exercicio65();
    break;
  case 66:
    exercicio66();
    break;
  case 67:
    exercicio67();
    break;
  case 68:
    exercicio68();
    break;
  case 69:
    exercicio69();
    break;
  case 70:
    exercicio70();
    break;
  case 71:
    exercicio71();
    break;
  }
}








#ifndef EXERCICIOaf_H
#define EXERCICIOaf_H

#include <stdio.h>
#include <stdlib.h>

void exercicio65() {
  int matriz[2][3];
  int soma;
  printf("Digite as 6 posições da sua matriz! \n");

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d x %d\n", i + 1, j + 1);
      printf(" \n");
      scanf("%d", &matriz[i][j]);
    }
    system("clear");
  }
  soma = matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[1][0] + matriz[1][1] + matriz[1][2];

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("SOMA: %d", soma);
}

void exercicio66() {
   int matriz[3][3];
    int soma;
    printf("Digite as 9 posições da sua matriz! \n");

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        printf("%d x %d\n", i + 1, j + 1);
        printf(" \n");
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
int numeroMaior = -1000000;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if(numeroMaior < matriz[i][j]){
        numeroMaior = matriz[i][j];
      }
    }
    printf("\n");
  }
  printf("O maior numero da Matriz é: %d", numeroMaior);
  }

void exercicio67() {
    int matriz[3][2];
     int soma;
     printf("Digite as 6 posições da sua matriz! \n");

     for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 2; j++) {
         printf("%d x %d\n", i + 1, j + 1);
         printf(" \n");
         scanf("%d", &matriz[i][j]);
       }
       system("clear");
     }


     for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 2; j++) {
         printf("%d ", matriz[i][j]);
       }
       printf("\n");
     }
  int par = 0;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 2; j++) {
      if (matriz[i][j] % 2 == 0){
        par++;
      }
      }
      printf("\n");
    }
  printf("\nNumero Pares: %d", par);
  }

void exercicio68() {
  int matriz[2][2];
  int reserva[2][2];
  printf("Digite as 4 posições da sua matriz! \n");

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d x %d\n", i + 1, j + 1);
      printf(" \n");
      scanf("%d", &matriz[i][j]);
    }
    system("clear");
  }


  reserva[0][0] = matriz[1][0];
  reserva[0][1] = matriz[1][1];
  reserva[1][0] = matriz[0][0];
  reserva[1][1] = matriz[0][1];
  
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", reserva[i][j]);
    }
    printf("\n");
  }

}

void exercicio69() {
  int matriz[2][3];
  printf("Digite as 6 posições da sua matriz! \n");

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d x %d\n", i + 1, j + 1);
      printf(" \n");
      scanf("%d", &matriz[i][j]);
    }
    system("clear");
  }


  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

}

void exercicio70() {
  int matriz[3][3];
  printf("Digite as 9 posições da sua matriz! \n");
  int soma[3] = {0, 0 ,0};
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d x %d\n", i + 1, j + 1);
      printf(" \n");
      scanf("%d", &matriz[i][j]);
      soma[i] += matriz[i][j];
    }
    system("clear");
  }


  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < 3; i++) {
    printf("%d \n", soma[i]);

  }
}

void exercicio71() {
  int matriz[2][2];
  int reserva[2][2];
  printf("Digite as 4 posições da sua matriz! \n");

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d x %d\n", i + 1, j + 1);
      printf(" \n");
      scanf("%d", &matriz[i][j]);
      reserva[j][i] = matriz[i][j];
    }
    system("clear");
  }


  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", reserva[i][j]);
    }
    printf("\n");
  }

}
#endif
