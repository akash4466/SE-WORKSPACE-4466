#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are eligible for vote");
        if (age>=60)
    {
        printf("\nfree to vote");

    }
    else
    {
        printf("\n not free");
    }
    }
    
    
    else
    {
        printf("\n not eligible");
    }
    getch();
}