#include <math.h>
#include <stdio.h>

int main(void) {
  float x[5], soma = 0;
  int a;

  for (a = 1; a < 6; a++) {
    printf("Digite o %d° número: ", a);
    scanf("%f", &x[a]);
    x[a] = pow(x[a], 2);
    soma = x[a] + soma;
  }
  printf("\n");

  for (a = 1; a < 6; a++) {
    printf("O resultado do %d° número de %.2f\n", a, x[a]);
  }
  printf("\n");
  printf("Resultado da soma: %.2f", soma);
}