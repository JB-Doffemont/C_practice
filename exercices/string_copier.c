#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void copy(char *dst, char *src)
{
    printf("%p", *dst);
    while (*src != '\0')
    {
        *dst = *src;

        src++;
        dst++;
    }

    *dst = '\0';
}

int main()
{
    char srcString[] = "We promptly judged antique ivory buckles for the next prize!";

    int len = strlen(srcString);

    // malloc alloue en mémoire la taille du tableau, et renvoie un pointeur sur la mémoire allouée (1er element).
    // sizeof permet de connaître la longueur d'un type
    // len + 1 pour le \0 dans le cas d'une chaîne de caractère

    char *dstString = malloc(sizeof(char) * (len + 1));

    copy(dstString, srcString);

    printf("%c\n", *dstString);

    printf("%s", dstString);

    free(dstString);

    return 0;
}