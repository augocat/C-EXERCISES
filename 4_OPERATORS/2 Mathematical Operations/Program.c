#include <stdio.h>

int main() {
  int booksSold = 100;
  double bookCost = 9.99;
  double totalSalesValue;

  booksSold = booksSold + 200;
  totalSalesValue = booksSold * bookCost;
  totalSalesValue = totalSalesValue / 2;

  printf("You sold %d books and your take home was $%.2f\n", booksSold, totalSalesValue);
}