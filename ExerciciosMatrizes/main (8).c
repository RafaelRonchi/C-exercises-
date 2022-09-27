#include <stdio.h>

void preencheMatriz(int MAT[3][3]){
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite valor para a posição %d, %d: ", i, j);
            scanf("%d", &MAT[i][j]);
        }
    }
}

void imprimediagonal(int A[3][3]){
  printf("\nImprimindo diagonal principal");
        printf("\n");
        int i, j=0;
  for (i=0;i<3;i++){
    if(i==j){
      printf("\n%d",A[i][j]);
    }
    j++;
  }
    }


int main(void) {
    int A[3][3];
    preencheMatriz(A);
  imprimediagonal(A);
    
}