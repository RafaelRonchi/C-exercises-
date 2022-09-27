#include <stdio.h>

int main(void) {
  int x=1, par=0, impar=0;

  printf("Digite um numero e aperte enter, caso quera finalizar digite 0 e aperte enter\n");
  
  while (x != 0) {
    scanf("%d", &x);
    if (x==0){
      break;
    }
    

    if (x%2 == 0) {
      par++;
    } else {
      impar++;
      }
    
  }

  printf("pares %d\n",par);
  printf("impares %d\n",impar);
  
  
}