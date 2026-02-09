#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enetr the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);

   int f1=a+=b;
   int f2=a-=b;
   int f3=a*=b;
   printf("\n%d",f1);
   printf("\n%d",f2);
   printf("\n%d",f3);
   getch();
    
}