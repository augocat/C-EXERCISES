#include <stdio.h>

int main() {

  for (int c = 0; c < 10; c++) {
    // Figure out how to skip the print of 5 here
    if (c == 5) {
      continue;
    }

    printf("%d\n", c);
  }
}