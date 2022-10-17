#include <stdio.h>

int main()
{
    int price;
    char answer;
    int justPrice = 15;
    int try = 0;
    int continue_party = 1;

    while (continue_party == 1)
    {

        do
        {
            printf("Entrez un prix : ");
            scanf("%d", &price);

            if (price > justPrice)
            {
                printf("C'est moins\n");
            }
            else if (price < justPrice)
            {
                printf("C'est plus\n");
            }
            try++;

        } while (price != justPrice);

        printf("Bravo ! C'est le juste prix\n Vous avez trouve en %d tentatives !\n", try);

        printf("Souhaitez-vous faire une autre partie ? o/n\n");
        scanf("%d", &answer);
    }

    if (&answer == "o")
    {
        continue_party = 1;
    }
    else if (&answer == "n")
    {
        continue_party = 0;
    }

    return 0;
}