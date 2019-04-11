#include <stdio.h>

int main(){
  int c, b = 0;
  int flag = 0;
  while((c = getchar()) != EOF){
    //if (c != ' ')
    //  flag = 1;
    if (c == ' '){
      if (b == 0){
        b = 1;
        putchar(c);
      } 
    }
    else{
      putchar(c);
      b = 0;
    }
    //putchar(' ');
  }
}
