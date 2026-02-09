#include<stdio.h>
#include<conio.h>
void main()
{
    int m;
    printf("enter the m value:");
    scanf("%d",&m);

    if(m>=70)
    {
        printf("a");
    }
    
    else if(m>=60)
    {
        printf("b");
    }
    
    else if(m>=50)
    {
        printf("c");
    }
    
    else if(m>=40)
    {
        printf("d");
    }
    else
    {
        printf("fail");
    }
    getch();

}