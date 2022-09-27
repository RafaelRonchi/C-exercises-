#include <stdio.h>

void preencheMatriz(int MAT[3][3], int R[3][3]) {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Digite valor para a posição %d, %d: ", i, j);
      scanf("%d", &MAT[i][j]);
    }
  }
  
}

void multiplicaMatrizPorNumero(int MAT[3][3], int R[3][3], int x) {
  int l, c;
  for (c = 0; c < 3; c++) {
    for (l = 0; l < 3; l++) {
      R[l][c] = MAT[l][c] * x;
    }
  }
}

void imprimeMatriz(int R[3][3]) {
  int l,c;
  for (c = 0; c < 3; c++) {
    printf("\n");
    for (l = 0; l < 3; l++) {
      printf("%d ",R[c][l]);
    }
  }
}

int main(void) {
  int A[3][3], x, R[3][3];
  printf("Digite o número: ");
  scanf("%d", &x);
  preencheMatriz(A, R);
  multiplicaMatrizPorNumero(A, R, x);
  imprimeMatriz(R);
}