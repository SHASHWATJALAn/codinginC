#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
int a,b,c;
float s,k;
double area;
    printf("Enter the length of 1st side of the triangle ");
    scanf("%d",&a);
    printf("Enter the length of 2nd side of the triangle ");
    scanf("%d",&b);
    printf("Enter the length of 3rd side of the triangle ");

    scanf("%d",&c);
s=(a+b+c)/2;
k=s*(s-a)*(s-b)*(s-c);
area=sqrt(k);

printf("Area of the triangle with given sides is\n");
printf("%lf",area);
}
