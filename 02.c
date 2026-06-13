#include <stdio.h>
int main()
{
    int num;
    printf("Enter the num ::"); // Print pattern of solid square
    scanf("%d", &num);

    for (int r = 1; r <= num; r++)
    {
        for (int c = 1; c <= num; c++)
        {
            printf("  *");
        }
        printf("\n");
    }
    return 0;
}