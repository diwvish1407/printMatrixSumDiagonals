#include <stdio.h>
int main()
{
    int arr[3][3], sum1 = 0, sum2 = 0, i, j;

    printf("Input elements in the matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Elements - [%d],[%d]: ", i, j);
            scanf("%d", (*(arr + i) + j));
        }
    }

    printf("\nThe matrix is:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        sum1 = sum1 + arr[i][i];
    }

    for (i = 0; i < 3; i++)
    {
        sum2 = sum2 + arr[i][2 - i];
    }

    printf("Sum of the diagonal_1 is:\n");
    printf("%d + %d + %d = %d\n", arr[0][0], arr[1][1], arr[2][2], sum1);

    printf("Sum of the diagonal_2 is:\n");
    printf("%d + %d + %d = %d\n", arr[0][2], arr[1][1], arr[2][0], sum2);

    return 0;
}
