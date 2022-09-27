#include <stdio.h>

float conta(float n1, float n2, float n3, int i) {

  float media;

  if (i == 1) {
    media = (n1 + n2 + n3) / 3;
    return media;
  } else if (i == 2) {
    media = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
    return media;
  } else if (i == 3) {
    media = (3 / ((1 / n1) + (1 / n2) + (1 / n3)));
    return media;
  }
}

int main() {
  float n1, n2, n3, media;
  int i;
  char x;

  printf("Digite a primeira nota: ");
  scanf("%f", &n1);
  printf("\nDigite a segunda nota: ");
  scanf("%f", &n2);
  printf("\nDigite a terceira nota: ");
  scanf("%f", &n3);
  printf("\nDigite uma letra: ");
  scanf("%s", &x);

  if (x == 'A' || x == 'a') {
    i = 1;
  } else if (x == 'P' || x == 'p') {
    i = 2;
  } else if (x == 'H' || x == 'h') {
    i = 3;
  }

  conta(n1, n2, n3, i);

  media = conta(n1,n2,n3,i);

  if (i == 1) {
    printf("\n Média aritmética: %.2f", media);
  } else if (i == 2) {
    printf("\n Média ponderada: %.2f", media);
  } else if (i == 3) {
    printf("\n Média harmônica: %.2f", media);
  }
}