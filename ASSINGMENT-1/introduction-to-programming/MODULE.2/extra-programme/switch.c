#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);

    switch (n)
    {
    case 1 :printf("%d",n);
    break;
    case 2:printf("b");
    break;
    case 3:printf("c");
    break;
    case 4:printf("d");
    break;
    case 5:printf("e");
    break;
    default:printf("no");
    }
    getch();
}