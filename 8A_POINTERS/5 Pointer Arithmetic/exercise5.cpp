#include<stdio.h>

int main() {
  double* ptr1;

  printf("%p\n", ptr1);
  ptr1 += 5;
  printf("%p\n", ptr1);
  ptr1 -= 4;
  printf("%p\n", ptr1);

}