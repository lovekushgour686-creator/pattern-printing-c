#include <stdio.h>
int main()
{
    int num;
    printf("Enter the num ::"); // print pattern of abcd pyramid
    scanf("%d", &num);

    for (int r = 1; r <= num; r++)
    {
        int a = 1;

        int ch = r - 1 + 64;
        for (int s = 1; s <= num - r + 1; s++)
        {
            printf("  ");
        }
        for (int c = 1; c <= r; c++)
        {
            printf("%c ", (char)(a + 64));
            a++;
        }
        for (int i = 1; i <= r - 1; i++)
        {
            printf("%c ", (char)ch);
            ch--;
        }
        printf(" \n");
    }

    return 0;
}