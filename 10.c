#include<stdio.h>
int main()
{   int n;
    printf("Enter the num::"); // Print pattern of number star triangle ulta
    scanf("%d",&n);

    for(int r=1;r<=n;r++)
    {
        for(int c=1;c<=n-r+1;c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }


    return 0;
}