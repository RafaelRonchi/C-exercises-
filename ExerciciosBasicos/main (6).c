#include <stdio.h>

int main(void) {
  int vm,vc,med;
  printf("Velocidade da rua: ");
  scanf ("%d",&vm);
  printf("Velocidade do carro: ");
  scanf("%d",&vc);

  med=vc-vm;

  if(med == 10 ){
    printf("Multa de 50 Reais");
  } else if(med>=11 && med<= 30 ){
    printf("Multa de 100 reais");
  } else if (med>30){
    printf("Multa 300 reais");
  }

  

  
}