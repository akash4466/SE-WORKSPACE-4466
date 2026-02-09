#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    
    for ( i = 1; i <=5; i++)//row
    {
        for ( j = 1; j<i; j++)//column

        {
            printf(" ");
        }
        for ( k = i; k<=5; k++)
        {
            printf("*");
        }
        
        printf("\n");
        
    }
    
    
    
    getch();
    
}