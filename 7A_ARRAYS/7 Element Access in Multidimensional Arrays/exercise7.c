#include<stdio.h>

int main() {
  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 
  int sum = 0;

  printf("%d\n", matrix[3][1]);

  int n;
  int m;
  for (m = 0; m < sizeof(matrix) / sizeof(matrix[0]); m++) {
    for (n = 0; n < sizeof(matrix[0]) / sizeof(int); n++) {
      sum += matrix[m][n];
    }
  }
  printf("%d\n", sum);
}