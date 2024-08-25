#include<stdio.h>
#include<string.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

  // int* ptr = &arr[(sizeof(arr) / sizeof(int)) -1]; //WORKS TOO
  int* ptr = &arr[9];
  // printf("%i\n", *ptr); //debuging
  for (int c = 9; c >= 0; c--) {
    printf("%i\n", *ptr);
    ptr--;
  }
  char* ptr2 = &s[0];
  // for (int c = 0; c < sizeof(s) / sizeof(char); c++) { //WORKS TOO
  for (int c = 0; c < strlen(s); c++) { 
    *ptr2 = '#';
    ptr2++;
  } 
  printf("%s\n", s);  

}