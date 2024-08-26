#include <stdio.h>

void incrementAge(int* agePointer) {
  *agePointer += 1;
}

int main(void) {
  int age = 35;
  incrementAge(&age);
  printf("%d\n", age);

}