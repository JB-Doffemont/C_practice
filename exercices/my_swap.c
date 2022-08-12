#include <stdio.h>

void my_swap(char *str, char *str1)
{
    *str = 'b';
    *str1 = 'a';
}

int main(void)
{

    char a = 'a';
    char b = 'b';

    my_swap(&a, &b);

    printf("%s", a == 'b' && b == 'a' ? "true" : "false");
    return 0;
}