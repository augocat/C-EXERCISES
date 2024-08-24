#include<stdio.h>
#include<string.h>

int main() {
  char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
  char p[] = "poolloop";  
  for (int c = 0; c < strlen(s); c++) {
    s[c] = '*';
  }
  printf("%s\n", s);
  for (int c = 0; c < strlen(p) / 2; c++) {
    p[c] = '#';
  }
  printf("%s\n", p);

}


