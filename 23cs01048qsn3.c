#include <stdio.h>
void reverse(int a[100], int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = *(a + i);
        *(a + i) = *(a + n - i-1);
        *(a + n - i-1) = temp;
    }
}
int main()
{
    int n;
    printf("enter the size of array:\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements in the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
    }
    reverse(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}