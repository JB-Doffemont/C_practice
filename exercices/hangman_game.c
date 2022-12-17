#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "hangman_game.h"

int main(int argc, char *argv[])
{
    char secret_word[7] = "MARRON";
    int number_try = 10;

    main_logic(secret_word, number_try);

    return 0;
}

void main_logic(char secret_word[], int number_try)
{
    int sizeArray = 0;
    char my_letter = 0;
    char secret_word_hide[strlen(secret_word)];

    sizeArray = strlen(secret_word);

    for (int i = 0; i < sizeArray; i++)
    {
        secret_word_hide[i] = '*';
    }

    printf("Bienvenue dans le Pendu !\n");

    do
    {
        printf("Quel est le mot secret ? %s\n", secret_word_hide);
        printf("Il vous reste %i coups a jouer\n", number_try);
        printf("Proposez une lettre :\n");

        my_letter = read_character();
        printf("%c\n", my_letter);

        for (int i = 0; i < sizeArray; i++)
        {

            if (secret_word[i] == my_letter)
            {
                secret_word_hide[i] = my_letter;
            }
        }

        if (!strchr(secret_word, my_letter))
        {
            printf("La lettre n'est pas dans le mot !\n");
            number_try--;
        }

        printf("Mot secret :%s  Mot deviné :%s\n", secret_word, secret_word_hide);

        // Je compare les deux chaînes de caractères avec strcmp +
    } while (strcmp(secret_word_hide, secret_word) != 0 && number_try != 0);

    if (strcmp(secret_word_hide, secret_word) == 0)
    {
        printf("Vous avez deviné le mot bravo !");
    }

    if (number_try == 0)
    {
        printf("Vous n'avez plus de tentative, c'est perdu !");
    }
};

char read_character()
{
    char character = 0;

    character = getchar();

    character = toupper(character);

    while (getchar() != '\n')
        ;

    return character;
}
