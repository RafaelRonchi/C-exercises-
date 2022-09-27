#include <stdio.h>

float calc(float b, float c) {
  float media;
  media = (b + c) / 2;
  return media;
}

int main() {
  float a, b, c, media;

  printf("\nDigite a primeira nota: ");
  scanf("%f", &a);
  printf("\nDigite a segunda nota: ");
  scanf("%f", &b);
  printf("\nDigite a terceira nota: ");
  scanf("%f", &c);

  if (a > c) {
    float test = c;
    c = a;
    a = test;
  }
  if (a > b) {
    float test = b;
    b = a;
    a = test;
  }
  if (b > c) {
    float test = c;
    c = b;
    b = test;
  }
  calc(b, c);

  media = calc(b,c);

  printf("\nA média das duas notas mais altas (%.2f e %.2f) foi de: %.2f", b, c,
         media);
}