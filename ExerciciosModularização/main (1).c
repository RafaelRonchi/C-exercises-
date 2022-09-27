#include <stdio.h>

 void conv(float cel)
{
    float kelvin, fah;
    
    fah = (cel * 1.8) + 32;
    kelvin = cel + 273.15;
    
    printf("\nTemperatura em fahrenheit: %.2f", fah);
    printf("\nTemperatura em kelvin: %.2f", kelvin);
    
    
}
  int main (){
      
      float temp;
      printf("\nDigite a temperatura em Celsius: ");
      scanf("%f", &temp);
      conv(temp);
  }