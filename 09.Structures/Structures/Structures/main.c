#include<stdio.h>
#include<string.h>

// Write your code below for 4.Why Use Structures

//for 5.Structure Dot Notation
struct Person5 {
 char name[40];
 int age;
};

//for 6.Structure Pointers
struct Person6 {
 char name[40];
 int age;
};

//for 7.Structures in Functions
struct Person7 {
 char name[40];
 int age;
};

int main(void) {
  printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  printf("||||||||||||||||||||||======09.Structures======||||||||||||||||||||\n");
  printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
  printf("===============================================================\n");
  printf("=====================1.Introduction===================\n");
  printf("===============================================================\n");
  char firstName[] = "Ada";
  char lastName[] = "Lovelace";
  int age = 28;
  char profession[] = "Mathematician";

  printf("My name is %s %s, I am %d years old and I am a %s.\n", firstName, lastName, age, profession);
  printf("===============================================================\n");
  printf("=====================2.Defining Structures===================\n");
  printf("===============================================================\n");
  // Write your code below


  printf("===============================================================\n");
  printf("=====================3.Initializing Structures===================\n");
  printf("===============================================================\n");
  struct Person3 {
    char firstName[25];
    // Write your code below
    
    int age;
  };
  
  // Write your code below
  

  printf("===============================================================\n");
  printf("=====================4.Why Use Structures===================\n");
  printf("===============================================================\n");
  int table1Length = 24;
  int table1Width = 24;
  int table1Height = 20;
  char table1Color[20] = "Dark Brown";

  int table2Length = 42;
  int table2Width = 18;
  int table2Height = 32;
  char table2Color[20] = "Matte Black";

  // Write your code below
  

  printf("===============================================================\n");
  printf("=====================5.Structure Dot Notation===================\n");
  printf("===============================================================\n");
  struct Person5 person1 = {"Martin"};
  struct Person5 person2 = {"Michelle"};
  // Write your code below
  

  printf("Hello my name is %s and I am %d years old.\n", person1.name, person1.age);
  printf("Hello my name is %s and I am %d years old.\n", person2.name, person2.age);
  printf("===============================================================\n");
  printf("=====================6.Structure Pointers===================\n");
  printf("===============================================================\n");
  struct Person6 person6_1 = {"Martin", 57};
  struct Person6 person6_2 = {"Michelle", 27};
  // Write your code below
  

  printf("Hello my name is %s and I am %d years old.\n", person6_1.name, person6_1.age);
  printf("Hello my name is %s and I am %d years old.\n", person6_2.name, person6_2.age);
  printf("===============================================================\n");
  printf("=====================7.Structures in Functions===================\n");
  printf("===============================================================\n");
  struct Person7 myFriend = {"Martin", 57};
  struct Person7 myOtherFriend = {"Michelle", 27};
  // Call your function below
  

  printf("Hello my name is %s and I am %d years old.\n", myFriend.name, myFriend.age);
  printf("Hello my name is %s and I am %d years old.\n", myOtherFriend.name, myOtherFriend.age);
  printf("===============================================================\n");
  printf("=====================8.Review===================\n");
  printf("===============================================================\n");

  
  
  
  printf("===============================================================\n");
  printf("=====================9.RACE_SIMULATOR===================\n");
  printf("===============================================================\n");

  
  
  
}
