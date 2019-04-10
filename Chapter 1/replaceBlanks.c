#include <stdio.h>

int main(){
  int c, b = 0;
  int flag = 0;
  while((c = getchar()) != EOF){
    if (c != ' ')
      flag = 1;
    if (flag == 1)
      putchar(c);
    putchar(' ');
  }
}
