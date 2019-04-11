// Counts number of new lines, tabs, and blanks
#include <stdio.h>

int main(){
  int c, nl = 0, tab = 0, blnk = 0;
  while((c = getchar()) != EOF){
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++tab;
    if (c == ' ')
      ++blnk;
  }
    
  printf("New Lines: %d | Tabs: %d | Blanks: %d \n", nl, tab, blnk);
}