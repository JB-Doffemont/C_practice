#include <stdio.h>
#include <string.h>

int main()
{

    int counter1[] = {0, 0, 0, 0};
    int counter2[] = {0, 0, 0, 0};

    char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
    char s2[] = "bbbcc bdddccccad  cdbbaaacaccdabdd";
    int flag = 0;

    // loop on first string array
    for (int i = 0; i < strlen(s1); i++)
    {
        printf("%c", s1[i]);

        if (s1[i] == 'a')
        {
            counter1[0]++;
        }
        else if (s1[i] == 'b')
        {
            counter1[1]++;
        }
        else if (s1[i] == 'c')
        {
            counter1[2]++;
        }
        else if (s1[i] == 'd')
        {
            counter1[3]++;
        }
    }
    printf("\n");

    // loop on second string array
    for (int y = 0; y < strlen(s2); y++)
    {
        printf("%c", s2[y]);

        if (s2[y] == 'a')
        {
            counter2[0]++;
        }
        else if (s2[y] == 'b')
        {
            counter2[1]++;
        }
        else if (s2[y] == 'c')
        {
            counter2[2]++;
        }
        else if (s2[y] == 'd')
        {
            counter2[3]++;
        }
    }
    printf("\n");

    for (int z = 0; z < 4; z++)
    {
        if (counter1[z] != counter2[z])
        {

            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        printf("Not Anagram !");
    }
    else
    {
        printf("Anagram !");
    }
    return 0;
}