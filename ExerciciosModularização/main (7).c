#include <stdio.h>
#include <math.h>

int conta(int a,int b){
  double res;
  res = pow(a,b);

  return res;
  
}

int main() {
  int a,b;
  double res;
  printf("\nDigite a base: ");
  scanf("%d",&a);

  printf("\nDigite o expoente: ");
  scanf("%d",&b);
  conta(a,b);

  res = conta(a,b);
  
  printf("\n");
  printf("Resultado da exponenciação\n");
  printf("\n %d^%d : %.2f",a,b,res);
}