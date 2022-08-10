#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year)
{
    int test = year % 100;
    printf("Le test est :%d\n", test);
    if (year % 4 == 0)
    {
        return true;
    }
    // if (year % 100 == 0)
    // {
    //     return true;
    // }
    else
    {
        return false;
    }
}

int main()
{
    int year;
    printf("Tap a year between 1000 and 10000 :");
    scanf("%d", &year);

    is_leap_year(year);

    if (is_leap_year(year) == true)
        printf("Leap Year");
    else
        printf("Not Leap Year");
}