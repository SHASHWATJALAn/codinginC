#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char x[20],y[20];
    int check;
    printf("Enter first string\n");
    gets(x);
    printf("Enter second string\n");
    gets(y);
    check=strcmp(x,y);
    if(check==0)
    {
        printf("Both are Equal\n ");

    }
    if(check>0)
    {
        printf("First string is greater than second");

    }
    if(check<0)
    {
        printf("Second string is greater than first");
    }
    getch();
}