#include <stdio.h> //printf()
#include <stdlib.h>//srand() and rand()
#include <time.h>//time()

int main(void) {
  srand(time(NULL));//time(NULL) seed of seconds passed since the date, January 1, 1970
  int randomNumber = rand() % 20 + 1;
  printf("%i\n", randomNumber);  

}