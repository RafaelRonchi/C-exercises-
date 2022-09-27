#include <stdio.h>

int main(void) {
  float nota;
  scanf ("%f",&nota);

  if (nota>=9.0 && nota<=10.0){
    printf("A\n");
  } else if (nota>=7.0 && nota<=8.99){
    printf("B\n");
  } else if (nota>=5.0 && nota<=6.99){
    printf("C\n");
  } else if (nota>=0 && nota<=4.99){
    printf("D\n");
  }
}