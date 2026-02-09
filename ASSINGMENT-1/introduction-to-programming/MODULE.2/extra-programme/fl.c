#include<stdio.h>
#include<conio.h>
void main()
{
    int num,f=0,l=0;
    printf("enter the value of num:");
    scanf("%d",&num);

    l=num%10;
    while (num>0)
    {
        if (num>9)
        {
            num=num/10;
        }
        else
        {
            f=num;
            num=num/10;
        }
        
    }
    int ans=f+l;
    printf("%d",ans);
    getch();
    
}