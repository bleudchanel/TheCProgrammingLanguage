//Prints a Celsius to Farenheit Table using Function (Same as 1_4)
#include <stdio.h>

float convert(float celsius);

int main(){
  float celsius, lower, fahr = 0.0;
  float step = 20.0;
  float upper = 300.0;
  printf("Celsius to Farenheit Table: \n");
  while (celsius <= upper){
    fahr = convert(celsius);
    printf("%3.0f %6.2f \n", celsius, fahr);
    celsius += step;
  }
}

float convert(float celsius){
  float fahr = 0.0;
  fahr =  ((9.0/5.0) * celsius) - 32.0;
  return fahr;
}