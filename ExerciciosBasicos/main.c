#include <stdio.h>

int main(void) {
  int temp[12], x, i = 0, med = 0;

  printf("Digite a temperatura média de cada mês do ano\n");
  printf(" \n");
  for (x = 0; x < 12; x++) {
    i++;
    printf("Digite temperatura média do mês %d", i);
    printf(" \n");
    scanf("%d", &temp[x]);
  }

  for (x = 0; x < 12; x++) {
    med = temp[x] + med;
  }

  med = med / 12;

  printf(" \n");

  if (temp[0] > med) {
    printf("1 Janeiro\n");
  }
  if (temp[1] > med) {
    printf("2 Fevereiro\n");
  }
  if (temp[2] > med) {
    printf("3 Marco\n");
  }
  if (temp[3] > med) {
    printf("4 Abril\n");
  }
  if (temp[4] > med) {
    printf("5 Maio\n");
  }
  if (temp[5] > med) {
    printf("6 Junho\n");
  }
  if (temp[6] > med) {
    printf("7 Julho\n");
  }
  if (temp[7] > med) {
    printf("8 Agosto\n");
  }
  if (temp[8] > med) {
    printf("9 Setembro\n");
  }
  if (temp[9] > med) {
    printf("10 Outubro\n");
  }
  if (temp[10] > med) {
    printf("11 Novembro\n");
  }
  if (temp[11] > med) {
    printf("12 Dezembro\n");
  }
}