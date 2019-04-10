//Static implementation of a program that executes the binary Sum of 2 numbers

#include <stdio.h>
#define N 5
int main(){
  int A[N] = {1,0,0,1,0};
  int B[N] = {1,1,0,1,1};
  int C[N+1] = {0,0,0,0,0,0};
  int res = 0;
  int carry = 0;
for(int i = N - 1; i >= 0; i--){
  res = A[i] + B[i];
  //printf("%i %i = %i\n", A[i], B[i], res);
  if (carry > 0){
    res += carry;
    carry = 0;
  }
  if (res > 1){
    carry = 1;
    res = 0;
    if (i == 0){
      C[i + 1] = res;
      C[i] = carry;
      //printf("%i %i C[%i] \n", res, carry, i);
    }else{
      C[i + 1] = res;
    }
  }else{
    C[i + 1] = res;
  }
}
printf("%i %i %i %i %i %i \n",C[0],C[1],C[2],C[3],C[4],C[5]);

}