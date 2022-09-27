#include <stdio.h>

int main(void) {
  int l[10],x,v,t=0;

  printf("Digite 10 valores\n");
  for (x=0;x<10;x++){
    scanf ("%d",&l[x]);
  }

  printf("Digite um valor\n");
  scanf ("%d",&v);

  for (x=0;x<10;x++){
    if (l[x]==v){
      t=x;
    }
    
  }
  printf(" \n");
  if (t!=0){
    printf("Valor %d corresponde ao vetor %d\n",v,t);
  } else {
    printf("Nenhum valor corresponde nos vetores\n");
  }
}