#include <stdio.h>

void conv(float total, int fo) {
  float gasto, vp;
  int vezes;

  if (fo == 1) {
    gasto = total - 0.10;
    printf("A vista com desconto, Total: %.2f ", gasto);
  } else if (fo == 2) {
    gasto = total;
    vp = gasto / 2;
    printf("2 Vezes preço por prestação: %.2f, preço da etiqueta : %.2f ", vp,
           gasto);
  } else if (fo == 3) {
    printf("Digite em quantas prestações (3 a 10 vezes): ");
    scanf("%d", &vezes);
  }

  if (fo == 3 && total > 100) {
    gasto = (vezes * 0.03) + total;
    vp = gasto / vezes;
    printf("Preço por prestação: %.2f Total: %.2f ", vp, gasto);
  } else if (vezes < 0 || vezes > 10 || fo > 3 || fo < 3) {
    printf("ERRO! Valores invalidos ");
  }
}

int main() {

  float total;
  int fo;

  printf("Digite o total gasto: ");
  scanf("%f", &total);

  printf("Digite a formula de pagoso(1,2 ou 3): ");
  scanf("%d", &fo);

  conv(total, fo);
}