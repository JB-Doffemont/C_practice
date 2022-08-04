#include <stdio.h>

int main()
{
    int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}};
    int sum = 0;

    int rowDimension = sizeof(matrix) / sizeof(matrix[0]);
    int columnDimension = sizeof(matrix[0]) / sizeof(int);

    for (int i = 0; i < rowDimension; i++)
    {
        for (int y = 0; y < columnDimension; y++)
        {
            sum = sum + matrix[i][y];
            printf("%i\n", sum);
        }
    }
}