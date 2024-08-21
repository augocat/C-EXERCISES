#include<stdio.h>

int main() {
  double arr[] = {1.0, 8, 2.27, 16.2, 2, 3.14, 12.6, 1.62, 6.54, 9, 11};
  int len;
  
  len = sizeof(arr) / sizeof(double);
  
  printf("%i\n", len);

  int n;
  for (n = 0; n < len; n++) {
    printf("%5.3f\n", arr[n]);
  }
}