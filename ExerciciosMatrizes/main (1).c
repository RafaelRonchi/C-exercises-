#include <stdio.h>

void preencheMatriz(int A[3][3], int B[3][3]) {
  int i, j;
  printf("DIGITE OS VALORES PARA PRIMEIRA MATRIZ\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Digite valor para a posição %d, %d: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  printf("\n");

  printf("DIGITE OS VALORES PARA SEGUNDA MATRIZ\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Digite valor para a posição %d, %d: ", i, j);
      scanf("%d", &B[i][j]);
    }
  }
  printf("\n");
}

void calc(int A[3][3], int B[3][3], int C[3][3]) {
  int i, j;
  printf("CALCULANDO...\n");
  for (i = 0; i < 3; i++) {

    for (j = 0; j < 3; j++) {
      C[i][j] = A[i][j] * B[j][i];
      printf("\n%d*%d= %d", A[i][j], B[j][i], C[i][j]);
    }
  }
}

void imprimeMatriz(int C[3][3]) {
  int i, j;
  printf("\n");
  printf("\nRESULTADO: \n");
  for (i = 0; i < 3; i++) {
    printf("\n");
    for (j = 0; j < 3; j++) {
      printf("%d ", C[i][j]);
    }
  }
}

int main(void) {
  int A[3][3];
  int B[3][3];
  int C[3][3];
  preencheMatriz(A, B);
  calc(A, B, C);
  imprimeMatriz(C);
}