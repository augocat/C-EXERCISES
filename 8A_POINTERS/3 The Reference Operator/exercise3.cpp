#include<stdio.h>

int main() {
  
  double g = 9.81;
  double pi = 3.14;
  
  double* dblPtr = &g;
  printf("%p\n", dblPtr);
  dblPtr = &pi;
  printf("%p\n", dblPtr);

}
