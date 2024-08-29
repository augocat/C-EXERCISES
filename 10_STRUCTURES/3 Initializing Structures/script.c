#include <stdio.h>

int main(void) {
  struct Person {
    char firstName[25];
    char lastName[40];    
    int age;
  };
  
  struct Person person1 = {"Ada", "Lovelace", 28};
  struct Person person2 = {"Marie", "Curie", 44};
}