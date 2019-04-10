#include <stdio.h>
#define MAXLINE 1000 /* MAXIMUM INPUT LINE */

int getline2(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main(){
  int len; /* Current Length */
  int max; /* Maximum found length */
  char line[MAXLINE]; /* Current Line */
  char longest[MAXLINE]; /* Longest Line found */
  max = 0;
  while((len = getline2(line, MAXLINE)) > 0){
    if (len > max){
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0) /* Line found */
    printf("%s", longest);
  return 0;
}

/* getline: read a line into s, return length */
int getline2(char s[], int lim){
  int c, i;
  for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n'){
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(char to[], char from[]){
  int i;
  i = 0;
  while((to[i] = from[i]) != '\0')
    ++i;
}
