#include <stdio.h>

int main(void) {
  int x;
  float impares=0,pares=1,par,tes=0;

  for(x=1;x<51;x++){
    tes=x%2;
    if (tes!=0){
      impares=x+impares;
    } 
     
    if (tes==0){
      
      pares=(x*pares);
    }
    }
  printf("Soma dos numeros impares %.2f\n",impares);
  printf("multiplicação dos números pares %.2f\n",pares);
  
    }