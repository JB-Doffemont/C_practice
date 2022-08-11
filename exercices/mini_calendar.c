#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year)
{
    return (year % 4 == 0 && (year % 100 || year % 400 == 0));
}

int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void add_days_to_date(int *mm, int *dd, int *yy, int days_left_to_add)
{

    while (days_left_to_add > 0)
    {
        int days_left_in_month = days_in_month[*mm] - *dd;

        if (days_in_month[2] && is_leap_year(*yy) == true)
        {
            days_left_in_month += 1;
        }

        if (days_left_to_add > days_left_in_month) // if more days left than can be added in a month
        {
            days_left_to_add -= days_left_in_month + 1; // jump to the first day of the next month
            *dd = 1;                                    // we are on the first day of the next month, but what is the next month?

            if (*mm == 12) // if last month was December
            {
                *mm = 1;       // next month is January
                *yy = *yy + 1; // and we are in a new year so increase by 1
            }
            else

                *mm = *mm + 1; // if some other month, just increase by 1
        }
        else // if all days can be added in this month
        {
            *dd += days_left_to_add; // simply add the days
            days_left_to_add = 0;    // no more days to add!
        }
    }
}
int main()
{

    int mm;
    int dd;
    int yy;
    int days_left_to_add;

    printf("Please enter a date between 1800 and 10000 in the format mm dd yy and provide the number of days to add to this date :");

    scanf("%i%i%i%i", &mm, &dd, &yy, &days_left_to_add);

    add_days_to_date(&mm, &dd, &yy, days_left_to_add);

    printf("Le mois :%i le jour :%i l'annee :%i", mm, dd, yy);

    is_leap_year(yy);

    if (is_leap_year(yy) == true)
        printf("Leap Year");
    else
        printf("Not Leap Year");
}