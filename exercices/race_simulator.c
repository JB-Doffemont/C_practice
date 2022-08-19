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

void updateFirstPlace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar2)
{

    if (raceCar1->totalLapTime <= raceCar2->totalLapTime)
    {
        race->firstPlaceRaceCarColor = raceCar1->driverName;
        race->firstPlaceRaceCarColor = raceCar1->raceCarColor;
    }
    else
    {
        race->firstPlaceRaceCarColor = raceCar2->driverName;
        race->firstPlaceRaceCarColor = raceCar2->raceCarColor;
    }
}

void startRace(struct RaceCar *raceCar1, struct RaceCar *raceCar2)
{
    struct Race race = {5, 1, "", ""};

    for (int i = 0; i < race.numberOfLaps; i++)
    {
        updateRaceCar(raceCar1);
        updateRaceCar(raceCar2);

        updateFirstPlace(&race, raceCar1, raceCar2);

        printFirstPlaceAfterLap(race);
    }

    printCongratulation(race);
}

int main()
{

    printIntro();
    printCountDown();

    struct Race race;
    printFirstPlaceAfterLap(race);

    struct RaceCar raceCar;
    updateRaceCar(&raceCar);

    calculateTimeToComplete();
    srand(time(0));
};