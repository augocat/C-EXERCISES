#include <stdio.h>
#include <string.h>

int main(void) {
  printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  printf("||||||||||||||||||||||======02.Variables======||||||||||||||||||||\n");
  printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  printf("===============================================================\n");
  printf("=====================1.What is a Variable in C?===================\n");
  printf("===============================================================\n");
  
  
  printf("===============================================================\n");
  printf("=====================2.Naming Standards===================\n");
  printf("===============================================================\n");
// UNCOMMENT BELOW FOUR LINES
//  int number!;
//  int test value;
//  int 1example;
//  float int;
  printf("Hello World!\n");

  printf("===============================================================\n");
  printf("=====================3.Data Types===================\n");
  printf("===============================================================\n");
  // UNCOMMENT THE THREE SECTIONS BELOW
  // Fix the missing data types
//  studentRank;
//  studentFeeTotal;
//  studentGradeLetter;
  
  // No need to make any changes below here, use these as a hint to how each variable above should be declared
// studentRank = 1;
// studentFeeTotal = 100.56;
// studentGradeLetter = 'A';

// printf("Student's Rank in class: %dst\n", studentRank);
// printf("Student's Total Fees: $%3.2f\n", studentFeeTotal);
// printf("Student's Grade: %c\n", studentGradeLetter);

  printf("===============================================================\n");
  printf("=====================4.printf()===================\n");
  printf("===============================================================\n");
  int ageLearnedToRide = 5;

  printf("I was years old when I learned to ride a bike.");
  printf("I hope I still remember how to ride.");

  printf("===============================================================\n");
  printf("=====================5.Initialization===================\n");
  printf("===============================================================\n");
  int numOfBooks;
  char favLetter;
  char favDigit;
  double costOfCandyBar;

  printf("Number of books: %d\n", numOfBooks);
  printf("Your Favorite Letter is: %c\n", favLetter);
  printf("Your Favorite Digit is: %c\n", favDigit);
  printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);

  printf("===============================================================\n");
  printf("===========6.Float and Double, What's the Difference?===========\n");
  printf("===============================================================\n");
  // Modify this variable value, start low and increase until something odd appears in the results
  int numOfLoops = 10;

  // Please do not modify anything below this point
  float a = 0.1f;
  float b = 0;
  double x = 0.1;
  double y = 0;

  printf("At the start, our target float b is:%f\n", b);
  printf("At the start, our target double y is:%f\n", y);

// If you were curious about what this code is doing, it is looping through and adding to our variables b and y a set amount of 0.1 on each loop
  for(int i = 0; i < numOfLoops; i++)
  {
    b += a;
    y += x;
  }

  printf("At the end, our target float b is:%f\n", b);
  printf("At the end, our target double y is:%f\n", y);

  printf("===============================================================\n");
  printf("=====================7.Updating Values===================\n");
  printf("===============================================================\n");
  // These variables were created and had a starting value for you, no need to change
  char bookVersionReview = 'A';
  char movieVersionReview = 'B';
  double ticketPrice = 10.25;
  double bookPrice = 19.99;

  // Update the movie review score here

  // Update the ticket price here


  // No need to change below here
  printf("The book version has a review score of %c and costs $%.2f\n", bookVersionReview, bookPrice);
  printf("The movie version has a review score of %c and costs $%.2f\n", movieVersionReview, ticketPrice);

  printf("===============================================================\n");
  printf("=====================8.Constants===================\n");
  printf("===============================================================\n");
  // Speed of light is 1.86e5 mi/s or 186000 mi/s we will store 1.86 and do the multiplicaiton later.
  double SPEEDOFLIGHT;
  int timeTraveledInSeconds = 30;

  SPEEDOFLIGHT = 1.86;


  // No need to change below here
  printf("Light would travel %.2f miles in %d seconds\n", SPEEDOFLIGHT * 100000 * timeTraveledInSeconds, timeTraveledInSeconds);

  printf("===============================================================\n");
  printf("=====================9.Casting Types===================\n");
  printf("===============================================================\n");
  double testScore = 95.7;
  int displayScore = 0;


  // No need to change below here
  printf("Great work, you got a %d%% on your test\n", displayScore);
  
  printf("===============================================================\n");
  printf("=====================10.Casting Types Continued===================\n");
  printf("===============================================================\n");
  char targetChar;
  int sourceInt = 99;
  double sourceDouble = 55.67;

  // Cast here


  // No need to change below here
  printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);
  
  printf("===============================================================\n");
  printf("=====================11.GROCERY_STORE===================\n");
  printf("===============================================================\n");


  // Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
  // UNCOMMENT THE BELOW LINES
//  printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);
}
