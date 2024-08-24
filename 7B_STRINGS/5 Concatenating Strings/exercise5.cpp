#include<stdio.h>
#include<string.h>

int main() {
    
  char s1[] = "London";
  char s2[] = " Bridge";

  char n[] = "New";
  char y[] = " York";
  char c[] = " City";

  strcat(s1, s2);
  printf("%s\n", s1);

  strcat(n, y);
  strcat(n, c);
  printf("%s\n", n);

}