#include <stdio.h>
int main()
{
    int n;
    printf("Enter the num::"); // Print number and char triangle
    scanf("%d", &n);

    for (int r = 1; r <= n; r++)
    {
        int ch = 'A';
        for (int c = 1; c <= r; c++)
        {
            if (r % 2 != 0)
                printf("%d  ", c);

            else
                printf("%c  ", ch++);
        }
        printf("\n");
    }

    return 0;
}