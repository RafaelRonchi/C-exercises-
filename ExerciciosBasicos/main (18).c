#include <stdio.h>

int main(void) {
  int a, b, tabuada = 0;
  scanf("%d", &b);

  for (a = 0; a <= 10; a++) {
    tabuada = b * a;
    printf("Tabuada %dx%d:%d\n", b, a, tabuada);
  }
}