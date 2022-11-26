#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "hangman_game.h"

int main(int argc, char *argv[])
{
    char secret_word[] = "MARRON";
    display_greetings();

    char my_letter = 0;

    my_letter = read_character();
    printf("%c", my_letter);

    return 0;
}

void display_greetings()
{

    printf("Bienvenue dans le Pendu !\n");
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