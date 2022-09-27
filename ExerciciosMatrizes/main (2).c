#include <stdio.h>

void preencheMatriz(int MAT[5][5]) {
  int i, j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("Digite valor para a posição %d, %d: ", i, j);
      scanf("%d", &MAT[i][j]);
    }
  }
}

void identidade(int A[5][5]) {
  int i, j, x = 0;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (i == j) {
        if (A[i][j] == 1) {
          x++;
        }
        if (i != j) {
          if (A[i][j] != 0) {
            x--;
          }
        }
      }
    }
  }

  if (x == 5) {
    printf("Matriz é identidade");
  } else {
    printf("A matriz não é identidade");
  }
}

int main(void) {
  int A[5][5];
  preencheMatriz(A);
  identidade(A);
}