#include <stdio.h>
int main()
{
    int n;
    printf("Enter the num::"); // print the pattern of star diamand
    scanf("%d", &n);

    int nsp = n / 2;
    int nst = 1;    // nuber of star is always start 1 star
    int m = (n / 2) + 1;  // middle term of n (number)

    for (int r = 1; r <= n; r++)
    {
        for (int s = 1; s <= nsp; s++)
        {
            printf(" ");
        }
        for (int c = 1; c <= nst; c++)
        {
            printf("*");
        }
        if (r < m)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }

        printf("\n");
    }

    return 0;
}