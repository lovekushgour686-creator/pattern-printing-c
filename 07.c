#include <stdio.h>
int main()
{
    int n;
    int ch;
    printf("Enter the num :: "); // print abcd square
    scanf("%d", &n);

    for (int r = 1; r <= n; r++)
    {
        ch = 'A';

        for (int c = 1; c <= n; c++)
        {
            printf("%c  ", ch++);
        }
        printf("\n");
    }
    return 0;
}