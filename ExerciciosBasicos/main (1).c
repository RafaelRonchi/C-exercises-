#include <stdio.h>

int main(void) {
  int v1[10], v2[10], v3[20], x, i;

  printf("Digite os valores do vetor 1\n");

  for (x = 0; x < 10; x++) {
    scanf("%d", &v1[x]);
  }

  printf("Digite os valores do vetor 2\n");

  for (x = 0; x < 10; x++) {
    scanf("%d", &v2[x]);
  }
  printf(" \n");

  for (x = 0; x < 20; x++) {
    v3[x * 2] = v1[x];
  }
  for (x = 0; x < 20; x++) {
    v3[x * 2 + 1] = v2[x];
  }
   
  printf("C : ");
  for (x = 0; x < 20; x++) {
    printf("%d,  ", v3[x]);
  }
}