#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    printf("%s\n", argv[0]);

    int height = atoi(argv[1]);
    int width = atoi(argv[2]);

    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            if (y == 0 || y == height - 1)
            {
                printf("#");
            }
            else if (x == 0 || x == width - 1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
