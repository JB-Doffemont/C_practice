#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race
{
    int numberOfLaps;
    int currentLap;
    char *firstPlaceDriverName;
    char *firstPlaceRaceCarColor;
};

struct RaceCar
{
    char *driverName;
    char *raceCarColor;
    int totalLapTime;
};
// Print functions section
void printIntro(void)
{
    printf("Welcome to our main event digital race fans! I hope everybody has their snacks because we are about to begin!\n");
}
void printCountDown(void)
{
    printf("Racers Ready! In...\n 5\n 4\n 3\n 2\n 1\n Race !\n");
}

void printFirstPlaceAfterLap(struct Race race)
{
    race.numberOfLaps = 2;
    race.firstPlaceDriverName = "JB";
    race.firstPlaceRaceCarColor = "Yellow";

    printf("After lap number %d\nFirst Place Is: %s in the %s car!\n", race.numberOfLaps, race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(struct Race race)
{
    race.firstPlaceDriverName = "Thomas";
    race.firstPlaceRaceCarColor = "Red";

    printf("After final lap let's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

// Logic functions section

int calculateTimeToComplete(void)
{
    int speed = (rand() % 3) + 1;
    int acceleration = (rand() % 3) + 1;
    int nerves = (rand() % 3) + 1;

    int sum = speed + acceleration + nerves;

    return sum;
}

void updateRaceCar(struct RaceCar *raceCar)
{
    raceCar->totalLapTime = calculateTimeToComplete();

    printf("totalLapTime : %d", raceCar->totalLapTime);
}

int main()
{

    printIntro();
    printCountDown();

    struct Race race;
    printFirstPlaceAfterLap(race);
    printCongratulation(race);

    struct RaceCar raceCar;
    updateRaceCar(&raceCar);

    calculateTimeToComplete();
    srand(time(0));
};