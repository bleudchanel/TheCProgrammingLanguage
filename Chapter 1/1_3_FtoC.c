#include <stdio.h>
/* print Farenheit Celsius Table for fahr = 0, 20, ..., 300 */
int main(){
  float fahr, celsius;
  float lower, upper, step;

  lower = 0; /* Lower limit of temperature scale */
  upper = 300; /* Upper limit of temperature scale */
  step = 20; /* Step size */

  fahr = lower;
  printf("Farenheit to Celsius Table\n");
  while (fahr <= upper){
    celsius = (5.0 * (fahr - 32.0))/9.0;
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr += step;
  }
}