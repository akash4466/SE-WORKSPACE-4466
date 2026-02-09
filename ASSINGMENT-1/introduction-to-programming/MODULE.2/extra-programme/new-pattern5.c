#include<stdio.h>
#include<conio.h>
void main()
{
    int i=5,j,n=6,space;

    for (i=0;i<=n;i++)

    {
        for (space=0;space<=5-i;space++)
        {
            printf(" ");
        }
        
        for (j=5;j<=i;j++)
        {
            printf("1");
        }
        printf("\n");
        
        
    }
    getch();
    
}