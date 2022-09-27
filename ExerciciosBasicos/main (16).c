#include <stdio.h>

int main(void) {
  int v,x,m=0;
  float menor=10000000000,maior=0,media=0,valor=0,valores=0;

  printf("Digite o tanto de vezes que o programa ira rodar: ");
  scanf ("%d",&v);

  for (x=0;x<v;x++){
    m++;
    printf("Digite o valor %d: ",m);
    scanf ("%f",&valor);

    if (valor>maior){
      maior=valor;
    }

    if (valor<menor){
      menor=valor;
    }

    valores=valores+valor;
  }

  media=valores/m;

  printf("O menor valor é de: %.2f\n",menor);
  printf("O maior valor é de: %.2f\n",maior);
  printf("A media é de: %.2f\n",media);

  
}