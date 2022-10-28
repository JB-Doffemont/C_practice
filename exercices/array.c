#include <stdio.h>

int sumArray(int array[], int sizeArray);
int averageValueArray(int array[], int sizeArray);

int main(int argc, char *argv[])
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}};
    int sum = 0;

    int rowDimension = sizeof(matrix) / sizeof(matrix[0]);
    int columnDimension = sizeof(matrix[0]) / sizeof(int);

    for (int i = 0; i < rowDimension; i++)
    {
        for (int y = 0; y < columnDimension; y++)
        {
            sum = sum + matrix[i][y];
        }
    }

    printf("Somme premier tableau : %i\n", sum);

    sumArray(array, 10);
    averageValueArray(array, 10);

    return 0;
}

int sumArray(int array[], int sizeArray)
{
    int i;
    int sum = 0;

    for (i = 0; i < sizeArray; i++)
    {
        sum = sum + array[i];
    }

    return printf("Somme second tableau : %d\n", sum);
}

int averageValueArray(int array[], int sizeArray)
{

    int i = 0;
    int sum = 0;
    int average = 0;

    for (i = 0; i < sizeArray; i++)
    {

        sum = sum + array[i];
        average = sum / sizeArray;
    }

    return printf("La moyenne du tableau est de : %d\n", average);
}
