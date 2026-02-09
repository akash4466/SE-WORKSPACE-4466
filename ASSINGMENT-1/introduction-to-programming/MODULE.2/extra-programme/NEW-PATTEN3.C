#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char str[]="india";
    int i,j,len;
    len=strlen(str);
for ( i = 0; i <len; i++)//row
    {
        for ( j = 0; j<=i;j++)//colum

        {
            printf("%C",str[j]);
            
        }
       
        
        
        printf("\n");
        
    
    
    getch();
    }
    
}