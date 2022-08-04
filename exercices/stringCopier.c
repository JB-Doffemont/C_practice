#include <stdio.h>
#include <string.h>

void copy(char *dst, char *src)
{

    // printf("%p", *src);
    while (*src != '\0')
    {
        *dst = *src;

        src++;
        dst++;
        *dst = '\0';
    };
}

int main()
{
    char srcString[] = "We promptly judged antique ivory buckles for the next prize!";

    int len = strlen(srcString);

    char dstString[] = "";

    copy(dstString, srcString);

    printf("%s", dstString);

    return 0;
}