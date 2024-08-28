//MINI_CALENDAR
#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year) {
  if ((year % 4) != 0) {
    return false;
  } else if ((year % 100) == 0) {
    if ((year % 400) == 0) {
      return true;
    } else {
      return false;
    }
  }
  else {
    return true;
  }
}

int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
void add_days_to_date(int* d, int* dd, int* mm, int* yyyy, int days_left_to_add) {
  *d = (days_left_to_add % 7 + *d) % 7;
  int days_left_in_month;
  while (days_left_to_add > 0) {
    printf("TOP:dys lft before = %d\n", days_left_to_add);
    printf("month days - days = %d - %d\n", days_in_month[*mm], *dd);
    days_left_in_month = days_in_month[*mm] - *dd; //YY
    printf("dys lft after in month %d = %d\n", *mm, days_left_in_month);
    if (*mm == 2 && is_leap_year(*yyyy) == true) {
      days_left_in_month++;
      printf("days_left_in_month++ = %d\n", days_left_in_month); //YY
    }
    printf("days_left_to_add(%d) > days_left_in_month(%d) = %d\n", days_left_to_add, days_left_in_month, days_left_to_add > days_left_in_month);
    if (days_left_to_add > days_left_in_month) {
      days_left_to_add = days_left_to_add - days_left_in_month - 1;
      printf("days_left_to_add = %d\n", days_left_to_add);
      *dd = 1;
      if (*mm == 12) {
        *mm = 1;
        *yyyy = *yyyy + 1;
      } else {
        *mm = *mm + 1;
      }
    } else {
      *dd = *dd + days_left_to_add;
      days_left_to_add = 0;
    }
    }
    
  }












int main() {
  int d;
  int mm;
  int dd;
  int yyyy;
  int days_left_to_add;
  printf("Enter day of week Sun = 1 and Sat = 7, date between the years 1800 and 10000 and provide the number of days to add to this date: (d/dd/mm/yyyy/+days):\n");
  scanf("%d %d %d %d %d", &d, &dd, &mm, &yyyy, &days_left_to_add);
  add_days_to_date(&d, &dd, &mm, &yyyy, days_left_to_add);

  
  switch (d) {
    case 1:
      printf("Sunday ");
      break;
    case 2:
      printf("Monday ");
      break;
    case 3:
      printf("Tuesday ");
      break;
    case 4:
      printf("Wednesday ");
      break;
    case 5:
      printf("Thursday ");
      break;
    case 6:
      printf("Friday ");
      break;
    default:
      printf("Saturday ");
      break;

  }
  
  switch (mm) {
    case 1:
      printf("January");
      break;
    case 2:
      printf("February");
      break;
    case 3:
      printf("March");
      break;
    case 4:
      printf("April");
      break;
    case 5:
      printf("May");
      break;
    case 6:
      printf("June");
      break;
    case 7:
      printf("July");
      break;
    case 8:
      printf("August");
      break;
   case 9:
      printf("September");
      break;
    case 10:
      printf("October");
      break;
    case 11:
      printf("November");
      break;
    default:
      printf("December");
      break;

  }

  switch (dd) {
    case 1: case 21: case 31:
      printf(" %dst", dd);
      break;
    case 2: case 22:
      printf(" %dnd", dd);
      break;
    case 3: case 23:
      printf(" %drd", dd);
      break;
    default:
      printf(" %dth", dd);
      break;

  }

  printf(", %d.\n", yyyy);
  return 0;
  
  
  printf("%d / %d / %d\n", dd, mm, yyyy);
  
}













