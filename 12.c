#include <stdio.h>
int main()
{
    int n;
    printf("Enter the num::");
    scanf("%d", &n);

    for (int r = 1; r <= n; r++)
    {
        int a = r - 1;
        for (int s = 1; s <= n - r + 1; s++)
        {
            printf(" \t");
        }
        for (int c = 1; c <= r; c++)
        {
            printf("%d\t", c);
        }
        for (int i = 1; i <= r - 1; i++)
        {
            printf("%d\t", a);
            a--;
        }
        printf(" \n");
    }

    return 0;
}