#include <stdio.h>

float conv(float v1, float v2) {
  float dive;
  if (v1 > v2) {
    dive = v1 / v2;
    return dive;
  } else if (v2 > v1) {
    dive = v2 / v1;
    return dive;
  }
}
int main() {

  float v1, v2, dive;
  printf(" Digite os dois valores:\n ");
  scanf("%f %f", &v1, &v2);
  conv(v1, v2);

  dive = conv(v1,v2);

  printf("Valor da divisão: %.2f ", dive);
}