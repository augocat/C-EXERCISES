#include <stdio.h>

int main() {

  int number1 = 1;
  int numbers_entered1 = 0;

  while (numbers_entered1 < 10) {

    printf("Loop 1 - Please enter a number: ");
    scanf("%d", &number1);

    // Figure out how to break out here!




    numbers_entered1++;
  }

  printf("Good job! You’ve broken out!\n");
}