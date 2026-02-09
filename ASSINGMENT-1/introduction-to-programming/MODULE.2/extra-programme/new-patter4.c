#include<stdio.h>
#include<conio.h>
int main()
{
   int row,col;
    
    for (int row=5;row>=1;row++)//row
    {
        for (int col=5;col>=row;col--)//column

        {
            printf("%d",row);
        }
       
        
        
        printf("\n");
        
    }
    
    
    
    getch();
    
}