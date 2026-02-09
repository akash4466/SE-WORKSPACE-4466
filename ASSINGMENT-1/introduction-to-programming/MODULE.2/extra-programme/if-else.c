#include<stdio.h>
#include<conio.h>
void main()
{
    int a;

    printf("enter the value of a:");
    scanf("%d",&a);

    if(a<2)
    {
        printf("good");
    }
    else
    {
        printf("not-good");
    }
    getch();
}