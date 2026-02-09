#include<stdio.h>
#include<conio.h>
void main()
{
    int roll,pass;

    printf("enter the roll:");
    scanf("%d",&roll);
    printf("enter the pass:");
    scanf("%d",&pass);

    if(roll==120)
    {
        printf("good");
    }
    if(pass==123)
    {
        printf("so-good");
    }
    else
    {
        printf("no");
    }
    getch();
}