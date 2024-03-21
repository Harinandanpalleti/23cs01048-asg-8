#include <stdio.h>
void Duplicates(int *arr, int n)
{
    printf("Duplicates are: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) == *(arr + j))
            {
                printf("%d ", *(arr + i));
                break;
            }
        }
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
    Duplicates(arr, n);
    return 0;
}
