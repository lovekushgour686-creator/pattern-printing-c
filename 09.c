#include <stdio.h>
int main()
{
    int n;
    printf("Enter the num::"); // print pattern of ulta triangle
    scanf("%d", &n);

    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= 1 + n - r; c++)
        {
            printf(" *");
        }
        printf(" \n");
    }
    return 0;
}