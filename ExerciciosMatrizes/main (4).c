#include <stdio.h>

void preencheMatriz(int MAT[5][5]) {
  int i, j, x, a = 0, b = 0 ;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("Digite valor para a posição %d, %d: ", i, j);
      scanf("%d", &MAT[i][j]);
    }
  }
  printf("Digite o valor para a verificação: ");
  scanf("%d",&x);

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
     if (x == MAT[i][j]){
       a = i;
       b = j;
       }
     }
   
    }
  if (a!=0 && b!=0){
    printf("Valores emcontrados em %d %d\n",a,b);
  } else {
    printf("Elemento X não encontrado");
  }

  }
  


int main(void) {
  int A[5][5], x;
  preencheMatriz(A);
}