#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void) {
  int numeroRandom;
  int numeroChute = 101;
  int vidas;
  
  printf("ESCOLHA SUA QUANTIDADE DE VIDAS\n");
  scanf("%d", &vidas);
  if(vidas <= 0){
    vidas = 1;
  }
  system("cls"); // alterar dps pra cls do windows

  srand(time(NULL));
  numeroRandom = (rand() % 100);
  if(vidas == 11037){
    printf("%d \n", numeroRandom);
    vidas = 5;
  }
  while (numeroRandom != numeroChute && vidas > 0) {
    printf("////////////////////////////////\n %d Vidas Restantes\n", vidas);
    printf("ESCOLHA UM NUMERO ENTRE 0 E 100\n");
    scanf("%d", &numeroChute);

    if (numeroChute == numeroRandom) {
      printf("\n VOCE GANHOU HEHE!!");
      Sleep(5000);
    } else if (numeroChute > numeroRandom) {
      printf("\nTENTE UM NUMERO MENOR\n\n");
      vidas--;
    } else if (numeroChute < numeroRandom) {
      printf("\nTENTE UM NUMERO MAIOR\n\n");
      vidas--;
    }

    if (vidas == 3 && numeroRandom != numeroChute){
      if(numeroRandom % 2 == 0){
        printf("\nSEU NUMERO É PAR\n\n");
      }else if(numeroRandom % 2 == 1 ){
          printf("\nSEU NUMERO É IMPAR\n\n");
        }
    }//par impar

    
    if (vidas == 0) {
      system("cls"); // alterar dps pra cls do windows
      printf("VOCE PERDEU!!!!\n");
      printf("Seu Pc vai desligar em 15 segundos visse!");
      Sleep(5000);
      system("shutdown /s /t 15");//alterar caso eu va usar no prompt porque da erro aqui
    }//quando as vidas acabam
  }
}
