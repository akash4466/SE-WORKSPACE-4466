#include<stdio.h>
#include<conio.h>
int main()  //  meaning
{
    int choice;
    char name[10],email[10],pass[10];
    FILE *fp;
    printf("enter 1 for sing-up:\nenter 2 for sing-in:");
    scanf("%d",choice);
    switch (choice)
    {
    case 1:printf("\n enter your name:");
    scanf("%c",&name);
    printf("\n enter your email:");
    scanf("%c",&email);
    printf("\n enter your pass:");
    scanf("%c",&pass);

    fp=fopen("details.txt","w");
    fprintf(fp,name);
    fprintf(fp,email);
    fprintf(fp,pass);
    break;

        case 2:
        break;
    }
    return 0;

}  

