#include <stdio.h>
void concatenate(char *s1, char *s2)
{
    while (*s1)
    {
        s1++;
    }
    while (*s2)
    {
        *s1 = *s2;
        s2++;
        s1++;
    }
    *s1 = '\0';
}

int main()
{
    int size1, size2;
    printf("Enter the size of the first string: ");
    scanf("%d", &size1);
    printf("Enter the size of the second string: ");
    scanf("%d", &size2);
    char str1[size1 + 1], str2[size2 + 1];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    concatenate(str1, str2);
    printf("Resulting string: %s\n", str1);
    return 0;
}
