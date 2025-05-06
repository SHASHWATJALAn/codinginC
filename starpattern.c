#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter till which line you want pattern to be printed\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}