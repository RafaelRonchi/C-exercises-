#include <stdio.h>

void preencheMatriz(int MAT[3][5]) {
  int i = 0, j = 0;
  printf("CALCULADORA DE DETERMINANTE DE MATRIZ 3X3");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("\nDigite valor para a posição %d, %d: ", i, j);
      scanf("%d", &MAT[i][j]);
    }
  }
}

void imprimeMatriz(int A[3][5]) {
  int i = 0, j = 0, a = 0;
  int det = 0;

  for (i = 0; i < 3; i++) {
    a = 0;
    for (j = 3; j < 5; j++) {
      A[i][j] = A[i][a];
      a++;
    }
  }

  det = (A[0][0] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][3]) +
        (A[0][2] * A[1][3] * A[2][4]) - (A[0][2] * A[1][1] * A[2][0]) -
        (A[0][3] * A[1][2] * A[2][1]) - (A[0][4] * A[1][3] * A[2][2]);

  printf("\nDETERMINANTE: %d", det);
}

int main(void) {
  int A[3][5];
  preencheMatriz(A);
  imprimeMatriz(A);
}