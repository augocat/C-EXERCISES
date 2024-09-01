//RACE_SIMULATOR
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

//======STRUCTURES=========
struct Race {
  int numberOfLaps;
  int currentLap;
  char* firstPlaceDriverName;
  char* firstPlaceRaceCarColor;
  
};

struct RaceCar {
  char* Name;
  char* Color;
  int totalLapTime;

};
//======PROTOCOLS======below structures always
void startRace(struct RaceCar*, struct RaceCar*);
void updateFirstPlace(struct Race*, struct RaceCar*, struct RaceCar*);
void updateRaceCar(struct RaceCar*);
void printCongratulation(struct Race);
void printFirstPlaceAfterLap(struct Race*);

//======PRINT FUNCTIONS=========
void printIntro() {
  printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to begin!\n");

}

void printCountDown() {
  printf("Racers Ready! In...\n5\n4\n3\n2\n1\nRace!\n");

}

void printFirstPlaceAfterLap(struct Race* race) {
  printf("After lap number %d\nFirst Place Is: %s in the %s race car!\n", (*race).currentLap, (*race).firstPlaceDriverName, (*race).firstPlaceRaceCarColor);
}

void printCongratulation(struct Race race) {
struct Race* racePointer = &race;
  printf("Let's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!\n", (*racePointer).firstPlaceDriverName, (*racePointer).firstPlaceRaceCarColor);

}

//======LOGIC FUNCTIONS=========
int calculateTimeToCompleteLap() {
//  int speed;
//  int acceleration;
//  int nerves;
  int speed = rand() % 3 + 1;
  int acceleration = rand() % 3 + 1;
  int nerves = rand() % 3 + 1;
  return speed + acceleration + nerves;

}

void updateRaceCar(struct RaceCar* raceCar) {
  (*raceCar).totalLapTime += calculateTimeToCompleteLap();
  
}

void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
  if ((*raceCar1).totalLapTime <= (*raceCar2).totalLapTime) {
    (*race).firstPlaceDriverName = (*raceCar1).Name;
    (*race).firstPlaceRaceCarColor = (*raceCar1).Color;
  } else {
    (*race).firstPlaceDriverName = (*raceCar2).Name;
    (*race).firstPlaceRaceCarColor = (*raceCar2).Color;
  }

}

void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
  struct Race race = {5, 1, "", ""};
  for (int c = 1; c <= race.numberOfLaps; c++) {
    updateRaceCar(raceCar1);
    updateRaceCar(raceCar2);
    updateFirstPlace(&race, raceCar1, raceCar2);
    printFirstPlaceAfterLap(&race);
    race.currentLap++;
  }
  printCongratulation(race);
  
}


int main() {
  //SRAND() MUST BE IN MAIN
  srand(time(NULL));  //seed seconds since 1/1/1970
  printIntro();
  printCountDown();
  struct RaceCar mini = {"Mini", "Azure"};
  struct RaceCar beetle = {"Beetle", "Lime"};
  startRace(&mini, &beetle);

  return 0;
}
