#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Modify the code below
int getRandomNumber() {
  int randomNumber = rand() % 1000 + 1;
  return randomNumber;
}

int main(void) {
  srand(time(NULL));
  // Modify the code below
  int randomNumber = 0;
  printf("My random number is: %d", randomNumber);
}