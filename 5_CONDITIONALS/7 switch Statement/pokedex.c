#include <stdio.h>

int main() {

  int number = 7;

  switch(number) {
    case 1:
      printf("Bulbasaur\n");
      break;
    case 2:
      printf("Ivysaur\n");
      break;
    case 3:
      printf("Venusaur\n");
      break;
    case 4:
      printf("Charmander\n");
      break;
    case 5:
      printf("Charmeleon\n");
      break;
    case 6:
      printf("Charizard\n");
      break;
    default:
      printf("Unknown\n");
      break;
  }
}
