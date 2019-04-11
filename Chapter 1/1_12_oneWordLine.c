#include <stdio.h>

#define IN 1
#define OUT 0
int main(){
  int c = 0;
  int word = 0;
  int perline = 0;
  int state = OUT;
  while((c = getchar()) != EOF){
    //word += c;
    if (c == ' ' || c == '\n' || c == '\t'){
      state = OUT;
    } else if (state == OUT){
      state = IN;
      putchar('\n');
    }
    
    putchar(c);
    
  }
}
