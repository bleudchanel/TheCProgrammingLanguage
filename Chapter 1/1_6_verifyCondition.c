#include <stdio.h>

int main(){
  int c = 0, condition = 0;
  printf("Testing a not EOF char\n");
  putchar('a');
  printf("\nPress Enter");
  c = (getchar() != EOF);
  printf("Current value of comparison %d\n", c);
  printf("Press Ctrl+D\n");
  c = (getchar() != EOF);
  printf("Current value of comparison %d\n", c);
}