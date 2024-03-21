#include <stdio.h>

#define k 100
void multiply(int a[k][k], int b[k][k], int result[k][k], int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            *(*(result + i) + j) = 0;
            for (int l = 0; l < c1; ++l)
            {
                *(*(result + i) + j) += *(*(a + i) + l) * *(*(b + l) + j);
            }
        }
    }
}
int main()
{
    int a[k][k], b[k][k], result[k][k];
    int r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d", &r2, &c2);
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            scanf("%d", (*(a + i) + j));
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            scanf("%d", (*(b + i) + j));
        }
    }
    multiply(a, b, result, r1, c1, r2, c2);
    printf("Resultant matrix\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            printf("%d ", *(*(result + i) + j));
            if (j == c2 - 1)
                printf("\n");
        }
    }
    return 0;
}
