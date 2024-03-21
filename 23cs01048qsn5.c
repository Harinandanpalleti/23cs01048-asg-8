#include <stdio.h>
void rotate(int mat[100][100], int n)
{
    for (int x = 0; x < n / 2; x++)
    {
        for (int y = x; y < n - x - 1; y++)
        {
            int temp = *(*(mat + x) + y);
            *(*(mat + x) + y) = *(*(mat + n - 1 - y) + x);
            *(*(mat + n - 1 - y) + x) = *(*(mat + n - 1 - x) + n - 1 - y);
            *(*(mat + n - 1 - x) + n - 1 - y) = *(*(mat + y) + n - 1 - x);
            *(*(mat + y) + n - 1 - x) = temp;
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int mat[100][100];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", (*(mat + i) + j));
        }
    }
    int r;
    printf("Enter the number of rotations: ");
    scanf("%d", &r);
    printf("given Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        rotate(mat, n);
    }
    printf("Rotated Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
    return 0;
}
