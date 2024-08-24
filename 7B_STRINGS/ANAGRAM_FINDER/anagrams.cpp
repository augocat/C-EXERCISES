//ANAGRAM_FINDER
#include<stdio.h>
#include<string.h>

int main() {
  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};

 // char s1[] = {"dbb cccccaacb cdbababdcdcdab dcdad"};
 // char s2[] = {"bbbcc bdddccccad cdbbaaacaccdabdd"};
  char s1[] = {"bdacba"};
  char s2[] = {"abcda c"};


//COUNT CHARACTERS OF S2
//COUNT CHARACTERS OF S1
  for (int c = 0; c < strlen(s2); c++) {
    switch (s2[c]) {
      case 'a':
        counter2[0]++;
        break;
      case 'b':
        counter2[1]++;
        break;
      case 'c':
        counter2[2]++;
        break;
      case 'd':
        counter2[3]++;
        break;
      default:
        break;
    }

  }


//COUNT CHARACTERS OF S1
  for (int c = 0; c < strlen(s1); c++) {
    switch (s1[c]) {
      case 'a':
        counter1[0]++;
        break;
      case 'b':
        counter1[1]++;
        break;
      case 'c':
        counter1[2]++;
        break;
      case 'd':
        counter1[3]++;
        break;
      default:
        break;
    }

  }

  int flag = 0;
  for (int c = 0; c < 4; c++) {
      printf("%d: counter1 = %d, counter2 = %d\n", c, counter1[c], counter2[c]);
    if (counter1[c] != counter2[c]) {
      flag = 1;
      break;
    }
  }
  flag == 0 ? printf("Is Anagram!\n") : printf("Not an Anagram\n");


}