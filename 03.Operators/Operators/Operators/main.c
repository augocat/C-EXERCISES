#include<stdio.h>
#include<string.h>

int main(void) {
  printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  printf("||||||||||||||||||||||======03.Operators======||||||||||||||||||||\n");
  printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  printf("===============================================================\n");
  printf("=====================1.Overview===================\n");
  printf("===============================================================\n");
  



  printf("===============================================================\n");
  printf("=====================2.Mathematical Operations===================\n");
  printf("===============================================================\n");
  // Variables set for you, do not change here
  int booksSold = 100;
  double bookCost = 9.99;
  double totalSalesValue;

  // Make your changes here


  // Output logic, no need to change this
  printf("You sold %d books and your take home was $%.2f\n", booksSold, totalSalesValue);

  printf("===============================================================\n");
  printf("=====================3.Modulo===================\n");
  printf("===============================================================\n");
  int endingDayOfWeek = 0;
  int daysThatPass;
  int daysInWeek;



  printf("You started on the 1st (0) day of the week, went %d days from this, so it is now the %d day of the week\n", daysThatPass, endingDayOfWeek);

  printf("===============================================================\n");
  printf("=====================4.Increment and Decrement===================\n");
  printf("===============================================================\n");
  int n = 13;
  int m = 10;
  
  printf("m = %d\n", m);
  printf("n = %d\n", n);

  printf("===============================================================\n");
  printf("=====================5.Assignment===================\n");
  printf("===============================================================\n");
  int timesServerCrashed = 5;
  double losses = 500.95;


  printf("Total Losses: $%.2f\n", losses);

  printf("===============================================================\n");
  printf("=====================6.Comparisons===================\n");
  printf("===============================================================\n");
  int x = 5;
  int y = 42;

//UNCOMMENT BELOW THREE LINES
//  if (x  y) {
//   printf("Congratulations on setting up a comparison correctly!");
//  }

  printf("===============================================================\n");
  printf("=====================7.Logical Operators===================\n");
  printf("===============================================================\n");
  int x7 = 1;
  int y7 = 27;

  if (x7 == y7) {
    printf("Congratulations on setting up a comparison correctly!");
  } else {
    printf("Please try again!");
  }

  printf("===============================================================\n");
  printf("=====================8.Order of Operations===================\n");
  printf("===============================================================\n");
  int x8;
  int y8;

  x8 = 2 + 3 * 5;
  y8 = 2 / 4 + 6;

  printf("x is: %d\n", x8);
  printf("y is: %d\n", y8);


  printf("===============================================================\n");
  printf("=====================9.GROCERY_STORE_PART_2===================\n");
  printf("===============================================================\n");
  int appleQuantity;
  double applePrice = 1.49;
  double appleReview;
  int appleReviewDisplay;
  const char appleLocation = 'F';

  appleQuantity = 23;
  appleReview = 82.5;
  appleReviewDisplay = appleReview;

  //UNCOMMENT BELOW FOUR LINES
//  if()
//  {
//   printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
//  }

  // Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
  printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);




  
}
