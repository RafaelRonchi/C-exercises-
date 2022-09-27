#include <stdio.h>

void preencheMatriz(int MAT[3][3]) {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Digite valor para a posição %d, %d: ", i, j);
      scanf("%d", &MAT[i][j]);
    }
  }
}

void imprimediagonal(int A[3][3]) {
  int l = 0, c;
 printf("DIAGONAL SECUNDARIA");
  for (c = 2; c >= 0; c--) {

    printf("\n%d", A[l][c]);
    l++;
  }
}

int main(void) {
  int A[3][3];
  preencheMatriz(A);
  imprimediagonal(A);
}