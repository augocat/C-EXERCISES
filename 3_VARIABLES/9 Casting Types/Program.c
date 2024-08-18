#include <stdio.h>

int main() {
  
  double testScore = 95.7;
  int displayScore = 0;

  //displayScore = testScore; //implicit 
  displayScore = (int)testScore; //explicit 

  // No need to change below here
  printf("Great work, you got a %d%% on your test\n", displayScore);

}