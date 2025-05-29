#include <stdio.h>
#include <math.h>

int main(void) {
  
  int num1, num2, num3;
  
  printf("Digite o primeiro numero!!\n");
  scanf("%d", &num1);
  
  printf("Digite o segundo numero!!\n");
  scanf("%d", &num2);

  printf("Digite o terceiro numero!!\n");
  scanf("%d", &num3);

  if(num1 > num2 && num1 > num3){
    printf("%d é maior que %d e %d\n", num1, num2, num3);
  }
  else if(num2 > num1 && num2 > num3){
    printf("%d é maior que %d e %d\n", num2, num1, num3);
  }
  else if(num3 > num1 && num3 > num2){
    printf("%d é maior que %d e %d\n", num3, num1, num2);
  }
  else if(num1 > num2 && num1 == num3){
    printf("%d é maior que %d e igual a %d\n", num1, num2, num3);
  }
  else if(num1 == num2 && num1 > num3){
    printf("%d é maior que %d e igual %d\n", num1, num3, num2);
  } 
  else if(num2 > num1 && num2 == num3){
    printf("%d é maior que %d e igual a %d\n", num2, num1, num3);
  }
  else if(num2 == num1 && num2 > num3){
    printf("%d é maior que %d e igual %d\n", num2, num3, num1);
  } 
  else if(num3 > num1 && num3 == num2){
    printf("%d é maior que %d e igual a %d\n", num3, num1, num2);
  }
  else if(num3 == num1 && num3 > num2){
    printf("%d é maior que %d e igual %d\n", num3, num2, num1);
  }else{
    printf("Os números são iguais!");
  }
  
  
  
  float numero;
  
  printf("Digite o número que você deseja calcular a raiz!!\n");
  scanf("%f", &numero);
 
  numero = sqrt(numero);
    
  printf("Seu resultado é %1.2f", numero);
  return 0;
}
