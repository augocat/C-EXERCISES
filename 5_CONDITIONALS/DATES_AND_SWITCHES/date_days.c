//DATES_AND_SWITCHES
#include <stdio.h>

int main(void) {
  int day, days_to_add, new_date;
  //days_of_week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  printf("Enter day of week Sun = 1 and Sat = 7 and days to add(d/+days): \n");
  // Split the user input into 3 variables for the date
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  //scanf("%d /%d", &day, &days_to_add);
  day = 7;
  days_to_add = 2;
  new_date = (days_to_add % 7 + day) % 7;

  printf("Day Name is: ");
  
  
  
  switch (new_date) {
    case 1:
      printf("Sunday\n");
      break;
    case 2:
      printf("Monday\n");
      break;
    case 3:
      printf("Tuesday\n");
      break;
    case 4:
      printf("Wednesday\n");
      break;
    case 5:
      printf("Thursday\n");
      break;
    case 6:
      printf("Friday\n");
      break;
    default:
      printf("Saturday\n");
      break;

  }
  
    return 0;
}
