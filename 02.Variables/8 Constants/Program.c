#include <stdio.h>

int main() {
  
// Speed of light is 1.86e5 mi/s or 186000 mi/s we will store 1.86 and do the multiplicaiton later.
  double SPEEDOFLIGHT;
  int timeTraveledInSeconds = 30;

  SPEEDOFLIGHT = 1.86;


  // No need to change below here
  printf("Light would travel %.2f miles in %d seconds\n", SPEEDOFLIGHT * 100000 * timeTraveledInSeconds, timeTraveledInSeconds);

}