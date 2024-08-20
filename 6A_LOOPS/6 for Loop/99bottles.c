#include <stdio.h>

int main() {

  int c;

 // while (c >= 0) {
   // printf("%d bottles of pop on the wall.\n", c);
   // printf("Take one down and pass it around.\n");
   // printf("%d bottles of pop on the wall.\n", c - 1);
   // c--;
 // }
  for (c = 99; c >= 0; c--) {
    printf("%d bottles of pop on the wall.\n", c);
    printf("Take one down and pass it around.\n");
    printf("%d bottles of pop on the wall.\n", c - 1);
  }


}