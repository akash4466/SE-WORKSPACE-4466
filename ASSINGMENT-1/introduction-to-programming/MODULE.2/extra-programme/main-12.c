#include<stdio.h>
#include<conio.h>
struct address
{
     char city[50];
     int zip;
};
struct student
{
    char name[50];  
    int age;
    struct address add; 
}s1,s2;
void main()
{
    
    
   printf("enter the age:");
   scanf("%d",&s1.age);
   printf("enter the age:");
   scanf("%d",&s2.age);
    
    printf("\n %d",s1.age);
    printf("\n %d",s2.age);
   
    getch();
}