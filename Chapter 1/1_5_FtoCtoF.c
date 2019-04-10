#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
  int fahr;
  printf("Farenheit to Celsius (for): \n");
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
    printf("%3d %6.1f \n", fahr, (5.0/9.0)*(fahr-32));
  }

  printf("\n\nFarenheit to Celsius (Reverse for): \n");
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
    printf("%3d %6.1f \n", fahr, (5.0/9.0)*(fahr-32));
  }
}