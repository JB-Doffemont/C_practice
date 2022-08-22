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
    race.currentLap;
    race.firstPlaceDriverName;
    race.firstPlaceRaceCarColor;

    printf("After lap number %d\nFirst Place Is: %s in the %s car!\n", race.currentLap, race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(struct Race race)
{
    race.firstPlaceDriverName;
    race.firstPlaceRaceCarColor;

    printf("After final lap let's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
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
}

void updateFirstPlace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar2)
{

    if (raceCar1->totalLapTime <= raceCar2->totalLapTime)
    {
        race->firstPlaceDriverName = raceCar1->driverName;
        race->firstPlaceRaceCarColor = raceCar1->raceCarColor;
    }
    else
    {
        race->firstPlaceDriverName = raceCar2->driverName;
        race->firstPlaceRaceCarColor = raceCar2->raceCarColor;
    }
}

void startRace(struct RaceCar *raceCar1, struct RaceCar *raceCar2)
{
    struct Race race = {5, 0, "", ""};

    for (int i = 0; i <= race.numberOfLaps; i++)
    {
        race.currentLap++;
        updateRaceCar(raceCar1);
        updateRaceCar(raceCar2);

        updateFirstPlace(&race, raceCar1, raceCar2);

        printFirstPlaceAfterLap(race);
    }

    printCongratulation(race);
}

int main()
{

    struct RaceCar raceCar1 = {"JB", "Red"};
    struct RaceCar raceCar2 = {"Jerome", "Blue"};

    printIntro();
    printCountDown();

    startRace(&raceCar1, &raceCar2);

    calculateTimeToComplete();
};