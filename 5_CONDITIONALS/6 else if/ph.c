#include <stdio.h>
 
int main() {
 
  double ph = 7.0;

  if (ph > 7) {
    printf("Basic\n");
  } else if (ph < 7) {
    printf("Acidic\n");
  } else {
    printf("Neutral\n");
  } 

}