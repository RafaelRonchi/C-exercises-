#include <stdio.h>

int main(void) {
  int idade=1,pessoas=0,media=0,menor=10000000000,maior=0;

  while (idade!=0){
    scanf("%d",&idade);
    if (idade==0){
      break;
    }

    pessoas++;
    media=idade+media;

    if (idade > maior){
      maior=idade;
    }

    if (idade < menor ){
      menor=idade; 
    }

    
    
  }
  media=media/pessoas;

  printf("o número de pessoas: %d\n",pessoas);
    printf("a idade média do grupo: %d\n",media );
  printf("a menor idade: %d e a maior idade: %d",menor,maior);
}