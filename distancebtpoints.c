#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float x1,y1,x2,y2;
    printf("Enter the x and y coordinates of 1st point\n");
    scanf("%f\n",&x1);
    scanf("%f",&y1);
    printf("Enter the x and y coordinates of 2nd point\n");
    scanf("%f\n",&x2);
    scanf("%f",&y2);
float dis;
dis=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("Distance between two points is ");
    printf("%f",dis);
}