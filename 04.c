#include <stdio.h>
int main()
{
    int num;
    printf("Enter the num::"); // print star triangle
    scanf("%d", &num);

    for (int r = 1; r <= num; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}