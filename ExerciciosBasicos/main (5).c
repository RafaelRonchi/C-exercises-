#include <stdio.h>

int main(void) {
  float v;
  int x, idade, m1 = 0, m2 = 0, m3 = 0, m4 = 0;
   printf("DIGITE 0 PARA SAIR");
  while (idade != 0) {
    printf("Digite a idade de uma pessoa\n");
    scanf("%d", &idade);
    if (idade == 0) {
      break;
    }

    if (idade < 18) {
      m1++;
    } else if (idade >= 18 && idade <= 40) {
      m2++;
    } else if (idade >= 41 && idade <= 60) {
      m3++;
    } else if (idade > 60) {
      m4++;
    }
  }

  printf("Pessoas Menores de 18 anos: %d\n", m1);

  printf("Pessoas entre 18 e 40: %d\n", m2);

  printf("Pessoas entre 41 e 60: %d\n", m3);

  printf("Pessoas acima de 60: %d\n", m4);
}