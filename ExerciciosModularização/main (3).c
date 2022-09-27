#include <stdio.h>


void contas(float *nota,int lista) {
  int x, i;
  float soma=0, test, mediana;


  for (x = 0; x < lista; x++) {
    soma = nota[x] + soma;
  }
  soma = soma / lista;

  for (x = 0; x < lista - 1; x++) {
    for (i = x + 1; i < lista; i++) {

      if (nota[x] > nota[i]) {

        test = nota[x];
        nota[x] = nota[i];
        nota[i] = test;
      }
    }
  }

  if (lista % 2) {
    mediana = nota[lista / 2];
  } else {
    mediana = (nota[lista / 2 - 1] + nota[lista / 2]) / 2;
  }

  printf("\nA media é foi de: %.2f: ", soma);
  printf("\nA mediana foi de: %.2f: ", mediana);
}

int main() {

  int lista, x;
  float nota[100];

  printf("Informe em números o tamanho da lista: ");
  scanf("%d", &lista);

  for (x = 0; x < lista; x++) {
    printf("\nDigite a nota: ");
    scanf("%f", &nota[x]);
  }
  contas(nota, lista);
  
}