#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int price;
    char answer[100];
    int justPrice;
    int try = 0;
    int choicePlayer;
    int continue_party = 1;
    const int MAX = 100, MIN = 1;

    while (continue_party == 1)
    {
        printf("=== Menu ===\n");
        printf("1. Un Joueur\n");
        printf("2. Deux Joueurs\n");
        scanf("%d", &choicePlayer);

        if (choicePlayer == 1)
        {
            srand(time(NULL));
            justPrice = (rand() % (MAX - MIN + 1)) + MIN;
        }
        else
        {
            printf("Veuillez saisir le nombre mystere :\n");
            scanf("%d", &justPrice);
        }

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

        // on reinitialise le compteur
        try = 0;

        printf("Souhaitez-vous faire une autre partie ? o/n\n");
        scanf("%s", answer);

        // strcmp permet de comparer deux chaines
        if (strcmp(answer, "o") == 0)
        {
            continue_party = 1;
        }
        else if (strcmp(answer, "n") == 0)
        {
            continue_party = 0;
        }
        else
        {
            printf("Saisie incorrect");
        }
    }

    return 0;
}