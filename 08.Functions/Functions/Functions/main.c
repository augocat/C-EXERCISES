#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>

//Write your code below for 4.Defining Functions


//Modify the code below for 5.Function Return Values
 void getRandom1000(void) {
   int random1000 = rand() % 1000 + 1;
 }

//Modify the code below for 6.Function Parameters
 int getRandomNumber6() {
   int randomNumber = rand() % 1000 + 1;
   return randomNumber;
 }

//Write your code below for 7.Functions with Pointers





//Define prototypes above for 8.Function Prototypes
 // the function definitions
//UNCOMMENT BELOW FUNCTION
// void repeatDigit(int repetitions) {
//   int digit = getRandomNumber8(9);
//   for(int i = 0; i < repetitions; i++) {
//     printf("%d ", digit);
//   }
//   printf("\n");
// }

 int getRandomNumber8(int maxNumber) {
   int randomNumber = rand() % maxNumber + 1;
   return randomNumber;
 }
int main(void) {
  printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  printf("||||||||||||||||||||||======08.Functions======||||||||||||||||||||\n");
  printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  printf("===============================================================\n");
  printf("=====================1.Introduction===================\n");
  printf("===============================================================\n");
  int absValue = abs(-5);
  printf("%d\n", absValue);
  
  printf("===============================================================\n");
  printf("=====================2.Calling a Function===================\n");
  printf("===============================================================\n");
  int num1 = -5;
  int num2 = 42;
  // Write your code below
  

  printf("===============================================================\n");
  printf("=====================3.Library Functions===================\n");
  printf("===============================================================\n");
  srand(time(NULL));
  // Write your code below
  

  
  printf("===============================================================\n");
  printf("=====================4.Defining Functions ===================\n");
  printf("===============================================================\n");

  
  
  
  printf("===============================================================\n");
  printf("=====================5.Function Return Values===================\n");
  printf("===============================================================\n");
  srand(time(NULL));
  // Modify the code below
  int randomNumber5 = 0;
  printf("My random number is: %d", randomNumber5);

  
  printf("===============================================================\n");
  printf("=====================6.Function Parameters===================\n");
  printf("===============================================================\n");
  srand(time(NULL));
  // Modify the code below
  int randomNumber6 = 0;
  printf("My random number is: %d", randomNumber6);


  printf("===============================================================\n");
  printf("=====================7.Functions with Pointers===================\n");
  printf("===============================================================\n");

  
  
  
  printf("===============================================================\n");
  printf("=====================8.Function Prototypes===================\n");
  printf("===============================================================\n");
  srand(time(NULL));
//UNCOMMENT BELOW TWO LINES
//  int repetitions = getRandomNumber8(10);
//  repeatDigit(repetitions);

  
  
  
  printf("===============================================================\n");
  printf("=====================9.MINI CALENDAR===================\n");
  printf("===============================================================\n");
  
  
  
  
}
