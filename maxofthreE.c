#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b){

        if(a>c){

            printf("First number is greatest\n");
            printf("%d",a);
        }
        else{
            printf("Third number is greatest\n");
            printf("%d",c);
        }


    }
    else 
    {
if(b>c)
{
printf("Second number is greatest\n");
printf("%d",b);
}
else
{
printf("Third number is greatest\n");
printf("%d",c);
}

    }
    
getch();
    
}
