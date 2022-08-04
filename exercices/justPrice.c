#include <stdio.h>

int main()
{
    int price;
    int justPrice = 15;

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
    } while (price != justPrice);
    printf("Bravo ! C'est le juste prix\n");

    return 0;
}