#include <stdio.h>

int funcao_inverte(int *x, int tam) {

  int novo[10];
  int i, j = 10;

  for (i = 0; i < tam; i++) {
    printf("\n%d", x[i]);
  }
  for (i = 0; i < 10; i++) {
    novo[i] = x[j - 1];
    j--;
  }
}

int main() {
  int i, x[10];
  printf("\nDigite os valores: \n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &x[i]);
  }
  funcao_inverte(x, 10);

  int *V = funcao_inverte(x, 10);

  for (i = 0; i < 10; i++) {
    printf("%d", V[i]);
  }
}
