#include<stdio.h>
#include<conio.h>
struct address
{
     char city[50];
     int zip;
};
struct student
{
    int age;
    char name[10];
    struct address add; 
}s1;

int main()
{
    
    printf("\n Enter Name: ");
    scanf("%s",&s1.name);
    
    printf("\n Enter Age: ");
    scanf("%d",&s1.age);
    
    printf("\n Enter City: ");
    scanf("%s",&s1.add.city);
    
    printf("\n Enter Zipcode: ");
    scanf("%d",&s1.add.zip);
    
    
    printf("\n Name is %s",s1.name);
    printf("\n Age is %d",s1.age);
    printf("\n City is %s",s1.add.city);
    printf("\n Zip is %d",s1.add.zip);
    

    

    return 0;
}