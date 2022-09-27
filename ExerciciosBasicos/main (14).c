#include <stdio.h>

int main(void) {
  int x, num = 1, tab = 0, res;

  printf("Digite um numero para saber a sua tabua, digite 0 para sair: \n");
  printf(" \n");
  while (num != 0) {
    scanf("%d", &num);
    if (num == 0) {
      break;
    }

    printf(" \n");

    while (tab <= 10) {
      res = num * tab;
      printf("%d x %d = %d\n", num, tab, res);
      tab++;
    }
    printf(" \n");
    tab = 0;
  }
}