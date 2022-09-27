#include <stdio.h>

void preencheMatriz(int MAT[6][6]) {
  int i, j;
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      printf("Digite valor para a posição %d, %d: ", i, j);
      scanf("%d", &MAT[i][j]);
    }
  }
  printf("\nMATRIZ");
  for (i = 0; i < 6; i++) {
    printf("\n");
    for (j = 0; j < 6; j++) {
      printf("%d ", MAT[i][j]);
    }
  }
  printf("\n");
}

void transposta(int A[6][6]) {
  int i, j;
  int Mt[6][6];

  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      Mt[j][i] = A[i][j];
    }
  }
   printf("\nMATRIZ TRANSPOSTA");
  for (i = 0; i < 6; i++) {
    printf("\n");
    for (j = 0; j < 6; j++) {
      printf("%d ", Mt[i][j]);
    }
  }
}

int main(void) {
  int A[6][6];
  preencheMatriz(A);
  transposta(A);
}
