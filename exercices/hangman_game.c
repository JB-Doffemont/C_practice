#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "hangman_game.h"

int main(int argc, char *argv[])
{
    char secret_word[7] = "MARRON";
    int number_try = 10;

    display_greetings(secret_word, number_try);

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
            else if (secret_word[i] != my_letter)
            {
                printf("La lettre n'est pas dans le mot !");
                number_try--;
            }
        }
    } while (secret_word != secret_word_hide);
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
