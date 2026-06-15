
#include <stdio.h>
int main()
{
    int n;
    int odd;
    printf("Enter num:: "); // Print odd triangle
    scanf("%d", &n);

    for (int r = 1; r <= n; r++)
    {
        odd = 1;
        for (int c = 1; c <= r; c++)
        {
            printf("%d  ", odd);
            odd += 2;
        }
        printf("\n");
    }
    return 0;
}