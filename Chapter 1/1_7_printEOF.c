//Very basic EOF experiment
#include <stdio.h>

int main(){
  printf("The value of %d \n", EOF);
  int c = 0;
  c = (getchar() != EOF);
  printf("The value of c : %d \n", c);
}