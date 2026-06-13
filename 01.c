#include <stdio.h>
int main()
{
    int num;
    printf("Enter the num :: "); // print pattern of rectangle
    scanf("%d", &num);

    for (int r = 1; r <= num; r++)
    {
        for (int c = 1; c <= num + 2; c++)
        {
            printf(" *");
        }
        printf(" \n");
    }

    return 0;
}