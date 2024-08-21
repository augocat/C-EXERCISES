#include<stdio.h>

int main() {
  int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
  int arr2[100];
  int c;  
 // int n = sizeof(arr); // INCORRECT
  for (c = 0; c < 20; c++) {
    printf("%i\n", arr[c]);
  }    
  int b;
  for (b = 0; b < 100; b++) {
    arr2[b] = b + 4;
    printf("%d\n", arr2[b]);
  }  

}