#include<stdio.h>
#include<conio.h>
void main()
{
    int m;
    printf("enter the marks:");
    scanf("%d",&m);

    if(m>=33)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    getch();
}