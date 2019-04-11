#include <stdio.h>
#define NUMCHAR 28
int main(){
  int c = 0;
  int histo[NUMCHAR];
  for(int i = 0; i < NUMCHAR; ++i)
    histo[i] = 0;

  while((c = getchar()) != EOF){
    ++histo[c-95];
  }

  printf("Histogram:  \n");
  for(int j = 0; j < NUMCHAR; ++j){
    if (histo[j] > 0){
      putchar(j + 95);
      printf(" - ");
      for(int jj = 0; jj < histo[j]; ++jj){
        printf("|");
      }
      printf("\n");
    }
  }
}

