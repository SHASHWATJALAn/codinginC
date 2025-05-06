#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    int k=1;

    printf("Enter the number whose Multiplication table you want\n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        k=n*i;
        printf("%d",n);
        printf("*");
        printf("%d",i);
        printf("=");
        printf("%d\n",k);
        k=1;

    }
}
