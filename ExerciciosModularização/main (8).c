#include <stdio.h>


void soma() {

  float a, b;

  printf("\nEscolha soma\n");
  printf("\nDigite o primeiro número: ");
  scanf("%f", &a);
  printf("\nDigite o segundo número: ");
  scanf("%f", &b);
  a = a + b;
  printf("\nResultado: %.2f", a);
}

void sub() {
  float a, b;
  printf("\nEscolha subtração\n");
  printf("\nDigite o primeiro número: ");
  scanf("%f", &a);
  printf("\nDigite o segundo número: ");
  scanf("%f", &b);
  a = a - b;
  printf("\nResultado: %.2f", a);
}

void mult() {
  float a, b;
  printf("\nEscolha multiplicação\n");
  printf("\nDigite o primeiro número: ");
  scanf("%f", &a);
  printf("\nDigite o segundo número: ");
  scanf("%f", &b);
  a = a * b;
  printf("\nResultado: %.2f", a);
}

void div() {
  float a, b;
  printf("\nEscolha divisão\n");
  printf("\nDigite o primeiro número: ");
  scanf("%f", &a);
  printf("\nDigite o segundo número: ");
  scanf("%f", &b);
  a = a / b;
  printf("\nResultado: %.2f", a);
}

void rest() {
  int a, b;
  printf("\nEscolha resto da divisão\n");
  printf("\nOBS: Só é possivel calcular resto da divisão com números inteiros\n");
  printf("\nDigite o primeiro número: ");
  scanf("%d", &a);
  printf("\nDigite o segundo número: ");
  scanf("%d", &b);
  a = (a%b);
  printf("\nResultado: %d", a);
}

int main(void) {

  int escolha;
  printf("\n-----------CALCULADORA-----------");
  printf("\n 1 - Soma");
  printf("\n 2 - Subtração");
  printf("\n 3 - Multiplicação");
  printf("\n 4 - Divisão");
  printf("\n 5 - Resto da divisão");
  printf("\n 0 - sair ");
  printf("\n---------------------------------\n");
  printf("\nEscola uma opção: ");
  scanf("%d", &escolha);

  if (escolha == 1) {
soma();
  } else if (escolha == 2) {
    sub();

  } else if (escolha == 3) {
    mult();

  } else if (escolha == 4) {
    div();

  } else if (escolha == 5) {
    rest();

  } else if (escolha >= 6 || escolha <= 0) {
    while (1) {
      printf("\nERRO! \nOpção invalida tente novamente");
      break;
    }
  }
}