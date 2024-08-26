#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Modify the code below
int getRandomNumber(int maxNumber) {
  int randomNumber = rand() % maxNumber + 1;
  return randomNumber;
}

int main(void) {
  srand(time(NULL));
  // Modify the code below
  int randomNumber = getRandomNumber(100);
  printf("My random number is: %d\n", randomNumber);
}