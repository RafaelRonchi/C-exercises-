#include <stdio.h>

int main(void) {
  float preco=0, valor, total = 0;
  int quant, val;
  
  printf("FAÇA SEU PEDIDO\n");
  printf(" \n");
  printf("Especificação    |  Código  | Preço\n");
  printf("Cachorro Quente  | 100          | R$ 1,20\n");
  printf("Bauru Simples    | 101          | R$ 1,30\n");
  printf("Bauru com ovo    | 102          | R$ 1,50\n");
  printf("Hambúrguer       | 103          | R$ 1,20\n");
  printf("Cheeseburguer    | 104          | R$ 1,30\n");
  printf("Refrigerante     | 105          | R$ 1,00\n");
  printf("PARA SAIR DIGITE 106\n");

  do {
    printf(" \n");
    printf("ESCOLHA UM NUMERO\n");
    scanf("%d", &quant);
    printf(" \n");
    if (quant == 106) {
      printf("VOCÊ ESCOLHEU SAIR\n");
      break;
      }
    printf("ESCOLHA A QUANTIDADE\n");
    scanf("%d", &val);
    printf(" \n");
 
    if (quant == 100) {
      preco = 0;
      preco = 1.20 * val;
      printf("Valor: %.2f\n", preco);
      total += preco;

    } else if (quant == 101) {
      preco = 0;
      preco = 1.30 * val;
      printf("Valor: %.2f\n", preco);
      total += preco;

    } else if (quant == 102) {
      preco = 0;
      preco = 1.50 * val;
      printf("Valor: %.2f\n", preco);
      total += preco;

    } else if (quant == 103) {
      preco = 0;
      preco = 1.20 * val;
      printf("Valor: %.2f\n", preco);
      total += preco;

    } else if (quant == 104) {
      preco = 0;
      preco = 1.30 * val;
      printf("Valor: %.2f\n", preco);
      total += preco;

    } else if (quant == 105) {
      preco = 0;
      preco = 1.00 * val;
      printf("Valor: %.2f\n", preco);
      total += preco;
    }
    } while (quant != 106);

  printf("TOTAL DO PEDIDO R$ %.2f\n",total);

  
  
}