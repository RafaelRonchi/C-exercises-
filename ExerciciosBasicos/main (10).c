#include <stdio.h>

int main(void) {
  int escolha;
  float saldo = 0, saque = 0, deposito = 0;
  do {
    printf(" \n");
    printf("ESCOLHA UMA OPÇÃO\n");

    printf(" \n");

    printf("(0) CONSULTAR SALDO\n");

    printf("(1) SAQUE\n");

    printf("(2) DEPOSITO\n");

    printf("(3) SAIR\n");
    printf(" \n");
    scanf("%d", &escolha);

    if (escolha == 3) {
      break;
    }

    if (escolha == 0) {
      printf("%.2f\n", saldo);
    }
    if (escolha == 1) {
      printf("DIGITE O VALOR DO SAQUE: ");
      scanf("%f", &saque);
      saldo = saldo - saque;
    }
    if (escolha == 2) {
      printf("DIGITE O VALOR DO DEPOSITO: ");
      scanf("%f", &deposito);
      saldo = saldo + deposito;
    }

  } while (escolha != 3);
}