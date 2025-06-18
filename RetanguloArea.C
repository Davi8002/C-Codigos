#include <stdio.h>

int main(void) {
  int h, v, backup;
  int hi, vi;

  printf("Digite medida Horizontal\n");
  scanf("%d", &h);
  printf("Digite medida Vertical\n");
  scanf("%d", &v);
  backup = h;
  hi = h;
  vi = v;
    
  while(v > 0){
    v--;
    printf("\n");
    h = backup;
    while (h > 0){
    h--;
    printf("-");  
    }
     }
  backup = vi * hi;
  printf("\n\n Seu retangulo %d por %d tem a Área de %d", hi, vi, backup);
    return 0;
}

