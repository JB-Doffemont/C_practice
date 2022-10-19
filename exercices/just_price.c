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
    int choiceDifficulty;
    int continue_party = 1;
    const int MIN = 1;
    int MAX;

    while (continue_party == 1)
    {
        printf("=== Menu ===\n");
        printf("1. Un Joueur\n");
        printf("2. Deux Joueurs\n");
        scanf("%d", &choicePlayer);

        printf("=== Choix de difficulté ===\n");
        printf("1. Facile entre 1 et 100\n");
        printf("2. Moyen entre 1 et 1000\n");
        printf("3. Difficile entre 1 et 10000\n");
        scanf("%d", &choiceDifficulty);

        if (choiceDifficulty == 1)
        {
            MAX = 100;
        }
        else if (choiceDifficulty == 2)
        {
            MAX = 1000;
        }
        else
        {
            MAX = 10000;
        }

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
            printf("Saisie incorrect\n Retour menu principal\n");
        }
    }

    return 0;
}