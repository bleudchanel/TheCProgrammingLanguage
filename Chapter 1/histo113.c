#include <stdio.h>

#define WORDCOUNT 10
#define IN 1
#define OUT 0

int main(){
  int c, nl, nw, nc, state;
  state = OUT;
  nw = nc = 0;
  int histo[WORDCOUNT];
  for(int i = 0; i < WORDCOUNT; ++i)
    histo[i] = 0;

  while((c = getchar()) != EOF){
    if (c != ' ' && c != '\n' && c != '\t'){
      ++nc;
    }
    if (c == ' ' || c == '\n' || c == '\t'){
      state = OUT;
      if(nw < WORDCOUNT){
        histo[nw - 1] = nc;
        nc = 0;
      }
    }
    else if (state == OUT){
      state = IN;
      ++nw;
    } 
  }
  printf("Word count: %d \n", nw);
  for(int i = 0; i < WORDCOUNT; ++i){
    printf("Word %d :", i);
    for(int j = 0; j < histo[i]; ++j){
      printf("|");
    }
    printf("\n");
  }

\
}