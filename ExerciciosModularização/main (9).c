#include <stdio.h>

float calc(float hora, float valor) {
  float semana;
  if (hora <= 40) {
    semana = hora * valor;
     return semana;
  } else if (hora > 40 && hora < 60) {
    semana = (hora * (1 + (50 / 100))) * valor;
    return semana;
  } else if (hora > 60) {
    semana = (hora * (1 + (100 / 100))) * valor;
   return semana;
  }
}

int main() {

  float hora, valor, semana;

  printf("\nInforme o número de horas empregadas na semana: ");
  scanf("%f", &hora);

  printf("\nInforme o valor de cada hora: ");
  scanf("%f", &valor);

  if (hora <= 0 || valor <= 0) {
    while (1) {
      printf("\nValor de horas ou valor de hora invalido");
      break;
    }
  }

  calc(hora, valor);

  semana = calc(hora,valor);

  if (hora <= 40) {
    printf("\nO valor o valor do salario semanal do trabalhador é de: %.2f",
           semana);
  } else if (hora > 40 && hora < 60) {
    printf("\nO valor o valor do salario semanal do trabalhador (50%%) é de: %.2f",
           semana);
  } else if (hora > 60) {
    printf("\nO valor o valor do salario semanal do trabalhador (100%%) é de: %.2f",
           semana);
  }
}