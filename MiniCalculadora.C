#include <stdio.h>
#include <math.h>

int main(void) {

  float numeroX, numeroY, resultado;
  int operacao;
  printf("Digite um número: \n");
  scanf("%f", &numeroX);
  printf("Digite:\n 1 para soma \n 2 para subtração\n 3 para multiplicação\n 4 para divisão \n 5 para média aritmética\n 6 para média geométrica\n");
  scanf("%d", &operacao);
  printf("Digite outro número: \n");
  scanf("%f", &numeroY);
  switch(operacao){
    case 1:
    resultado = numeroX + numeroY;
    break;
    case 2:
    resultado = numeroX - numeroY;
    break;
    case 3:
    resultado = numeroX * numeroY;
    break;
    case 4:
    resultado = numeroX / numeroY;
    break;
    case 5: 
    resultado = (numeroX + numeroY)/2;
    break;
    case 6: 
    resultado =  sqrt(numeroX * numeroY);
    break;
    default:
    printf("Operação inválida.\n");
    break;
  }

  printf("Seu resultado é %1.1f", resultado);
   return 0;
    }
 


