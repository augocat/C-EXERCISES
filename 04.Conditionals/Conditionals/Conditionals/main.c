#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  printf("||||||||||||||||||||||======04.Conditionals======||||||||||||||||||||\n");
  printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  printf("===============================================================\n");
  printf("=====================1.Introduction===================\n");
  printf("===============================================================\n");
  
  
  
  
  printf("===============================================================\n");
  printf("=====================2.Coin Flip Demo===================\n");
  printf("===============================================================\n");
  // Create a number that’s 0 or 1
  srand (time(NULL));
  int coin = rand() % 2;

  // If number is 0: Heads
  // If it is not 0: Tails
  if (coin == 0) {
    printf("Heads\n");
  } else {
    printf("Tails\n");
  }

  printf("===============================================================\n");
  printf("=====================3.if Statement===================\n");
  printf("===============================================================\n");
  
  int grade1_3 = 90;
  int grade2_3 = 59;
  
  printf("===============================================================\n");
  printf("=====================4.Working with Operators===================\n");
  printf("===============================================================\n");

  int a4 = 10;
  int b4 = -5;

  if (a4 > 0 && b4 > 0) {
    printf("Positive\n");
  }

  printf("===============================================================\n");
  printf("=====================5.else Clause===================\n");
  printf("===============================================================\n");
  int grade1_5 = 59;
  int grade2_5 = 90;

  if (grade1_5 > 60) {
    printf("Pass\n");
  }

  printf("===============================================================\n");
  printf("=====================6.else if===================\n");
  printf("===============================================================\n");
  
   double ph = 7.9;

   // Start the if, else if, else here:

  printf("===============================================================\n");
  printf("=====================7.switch Statement===================\n");
  printf("===============================================================\n");

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

  printf("===============================================================\n");
  printf("=====================8.Ternary Operators===================\n");
  printf("===============================================================\n");

  int a8 = 10;
  int b8 = 5;
  int min;

  // Print out the smaller number with return
  min = a8 < b8 ? a8 : b8;
  printf("%d\n", min);

  // Print out the smaller number without return
  a8 < b8 ? printf("%d\n", a8) : printf("%d\n", b8);

  
  printf("===============================================================\n");
  printf("=====================9.DATES_AND_SWITCHES===================\n");
  printf("===============================================================\n");
  int month, day, year;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  scanf("%d /%d /%d", &month, &day, &year);

  // Print the month
  

  // Print the day


  // Print the suffix for a given day
  

  // Print the year
  
   
}
