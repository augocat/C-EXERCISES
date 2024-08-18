#include <stdio.h>

int main() {
  
  char targetChar;
  int sourceInt = 99;
  double sourceDouble = 55.67;

  targetChar = (char)sourceInt;  // a Integer into a Character
  targetChar = sourceDouble; // a Double into a Character

  printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);

}