#include <stdio.h>
#include <math.h>
#include <limits.h>

#define ITEMS 8

/* A static mergeSort implementation */
void merge(int A[], int p, int q, int r);
void mergeSort(int A[], int p, int r);

int main(){

  int Ar[ITEMS] = {2,8,5,7,9,2,3,6};

  mergeSort(Ar, 0, 7);
  printf("\n");

  for(int i = 0; i < ITEMS; ++i)
    printf(" %d ", Ar[i]);
  printf("\n");

}

void mergeSort(int A[], int p, int r){
  printf("From %d to %d \n", p, r);
  if (p < r){
    int q;
    q = floor((p + r)/2);
    printf("Mid %d\n", q);
    mergeSort(A, p, q);
    mergeSort(A, q + 1, r);
    merge(A, p, q, r);
  }
}

void merge(int A[], int p, int q, int r){
  //printf("%d -> %d ->%d \n", p, q, r);
  int n1, n2;
  n1 = q - p + 1;
  n2 = r - q;
  printf("n1: %d || n2 : %d [p: %d, q: %d, r: %d]\n", n1, n2, p, q, r);
  int L[n1 + 1];
  int R[n2 + 1];
  printf("Current L: ");
  for(int i = 0; i < n1; ++i){
    L[i] = A[p + i];
    printf(" %d ", L[i]);
  }
  printf("\n");
 
  printf("Current R: ");
  for(int j = 0; j < n2; ++j){
    R[j] = A[q + j + 1];
    printf(" %d ", R[j]);
  }
  printf("\n");
    
  
  L[n1] = INT_MAX;
  R[n2] = INT_MAX;

  int i = 0;
  int j = 0;

  for(int k = p; k <= r; ++k){
    if (L[i] <= R[j]){
      A[k] = L[i];
      ++i;
    }
    else{
      A[k] = R[j];
      ++j;
    }
  }
  printf(" After merge: ");
  for(int i = 0; i < ITEMS; ++i){
    printf(" %d ", A[i]);
  }
  printf("\n");
}