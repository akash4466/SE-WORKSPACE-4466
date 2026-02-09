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
}s1;
void main()
{
   
   struct student s1 = {"John Doe", 200, {"New York", 10001}};
   printf("%s",s1.name);
   printf("\n%d",s1.age);    
    
  
  getch();
}