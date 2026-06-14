#include <stdio.h>
int main()
{
    int n;
    printf("Enter num :: "); // print number triangle
    scanf("%d", &n);

    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            printf("%d  ", c);
        }
        printf("\n");
    }
    return 0;
}