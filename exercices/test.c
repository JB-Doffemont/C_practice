/* Calcul du nombre de chiffres d'un entier */

#include <stdio.h>

int nombreChiffres(int nombre)
{
    int i = 1;
    // if (nombre < 0)
    // {
    //     nombre = -nombre;
    //     return nombre;
    // }
    int D;

    // int mod = nombre % 100;
    // printf("%d\n", mod);

    // D = (nombre - mod) / 10;
    // printf("%d\n", D);

    while (nombre >= 10)
    {
        nombre /= 10;

        i++;
    }
    /*
     * Avec une boucle for
     * 	for (i=1; nombre >= 10; nombre /= 10, i++) ;
     */

    int power = i;
    return power;
}

int main()
{
    int N;
    printf("Nombre : ");
    scanf("%d", &N);

    printf("Nombre de chiffres de %d : %d\n", N, nombreChiffres(N));
    return 0;
}