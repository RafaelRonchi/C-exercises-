#include <stdio.h>
int main() {
  char v[5], x[5];
  int i;

  printf("Digite as vogais: \n");

  for (i = 0; i < 5; i++) {
    scanf("%c", &v[i]);
    fflush(stdin);
  }

  for (i = 0; i < 5; i++) {
    if (v[i] == 'a') {
      x[0] = 'a';
    } else if (v[i] == 'e') {
      x[1] = 'e';
    } else if (v[i] == 'i') {
      x[2] = 'i';
    } else if (v[i] == 'o') {
      x[3] = 'o';
    } else if (v[i] == 'u') {
      x[4] = 'u';
    }
  }
  printf("Vogais: \n");
  for (i = 0; i < 5; i++) {
    printf("%c, ", x[i]);
  }
}