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

    char my_letter = 0;

    my_letter = read_character();
    printf("%c", my_letter);

    return 0;
}

void display_greetings(char secret_word[], int number_try)
{
    int sizeArray = 0;
    sizeArray = strlen(secret_word);

    for (int i = 0; i < sizeArray; i++)
    {
        secret_word[i] = *"*";
    }
    printf("Bienvenue dans le Pendu !\n");
    printf("Quel est le mot secret ? %s\n", secret_word);
    printf("Il vous reste %i coups a jouer\n", number_try);
    printf("Proposez une lettre :\n");
}

char read_character()
{
    char character = 0;

    character = getchar();

    character = toupper(character);

    while (getchar() != '\n')
        ;

    return character;
}