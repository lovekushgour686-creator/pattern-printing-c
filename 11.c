#include <stdio.h>
int main()
{
    int n;
    printf("Enter the num::");
    scanf("%d", &n);

    for (int r = 1; r <= n; r++)
    {
        int a = 1;
        for (int c = 1; c <= n; c++)
        {
            printf("%c\t", (char)a + 64);
            a++;
        }
        printf(" \n");
    }
    return 0;
}