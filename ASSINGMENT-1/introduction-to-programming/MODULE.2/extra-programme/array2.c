#include <stdio.h>
#include<conio.h>
void main()
{
int i;
int marks[5],total=0;
for(i=1;i<=5;i++)
{
    printf("enter the marks of subject %d",i);
    scanf("%d",&marks[i]);
    total=total+marks[i];
    printf("%d",total);
}

}