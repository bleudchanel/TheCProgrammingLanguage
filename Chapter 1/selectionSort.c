#include <stdio.h>
#include <math.h>
/* A static selection sort implementation */ 
#define N 18

int main(){
  int A[N] = {5,6,3,2,9,10,1,99,98,1,2,3,4,8,12,2,1,0};
  int found = 0;
  int index = 0;
  int key = A[0];
  for(int i = 0; i < N - 1; i++){
    key = A[i];
    found = 0;
    for(int j = i; j < N; j++){
      if(A[j] < key){
        found = 1;
        index = j;
        key = A[j];
      }
    }
    if (found == 1){
        A[index] = A[i];
        A[i] = key;
      }
    printf("%3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d\n", A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17]);
  }
printf("%3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d\n", A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17]);
}