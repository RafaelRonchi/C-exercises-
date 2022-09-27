#include <stdio.h>

void preencheMatriz(int A[4][4], int B[4][4], int C[4][4]) {
  int i, j;
  printf("\n DIGITE OS VALORES DA MATRIZ 1 \n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("Digite valor para a posição %d, %d: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }
  printf("\n DIGITE OS VALORES DA MATRIZ 2\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("Posição %d, %d: ", i, j);
      scanf("%d", &B[i][j]);
    }
  }
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
}

void imprimeMatriz(int A[4][4], int B[4][4], int C[4][4]) {
  int i, j;

  for (i = 0; i < 4; i++) {
    printf("\n");
    for (j = 0; j < 4; j++) {
      printf("%d ", C[i][j]);
    }
  }
}

int main(void) {
  int A[4][4];
  int B[4][4];
  int C[4][4];
  preencheMatriz(A, B, C);
  imprimeMatriz(A, B, C);
}