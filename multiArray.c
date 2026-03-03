#include <stdio.h>

int main()
{
    // This is 2D Array
    int matrix[2][3] = {{2, 5, 1}, {7, 4, 9}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // This is a 3D Array
    int matrix3D[2][4][2] =
        {
            {{1, 2}, {3, 7}, {5, 9}, {7, 5}},
            {{2, 1}, {7, 3}, {9, 5}, {5, 7}}};

    for (int i = 0; i < 2; i++)
    {
        printf("Block %d\n", i + 1);
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ", matrix3D[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}