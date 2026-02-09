#include<stdio.h>
#include<conio.h>
int main()  //  meaning
{
    FILE*fr;
    fr=fopen("akash.txt","w");
    if (fr==NULL)
    {
        printf("file is created:");
    }
    else 
    {
        printf("file is not created:");
    }
    fclose(fr);
    system("explorer.");
    return 0;
    
    
}