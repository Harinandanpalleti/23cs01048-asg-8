#include <stdio.h>
void circular(int *x, int *y, int *z)
{
    int t;
    t = *x;
    *x = *z;
    *z = t;
    *z = *y;
    *y = t;
}
int main()
{
    int x, y, z;
    printf("enter the three values in order:");
    scanf("%d%d%d", &x, &y, &z);
    printf("\nbefore changing: x=%d,y=%d,z=%d", x, y, z);
    circular(&x, &y, &z);
    printf("\nafter changing: x=%d,y=%d,z=%d", x, y, z);
    return 0;
}