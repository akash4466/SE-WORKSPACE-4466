#include<stdio.h>
#include<conio.h>
struct student
{
    int id;
    char name[10];
}st[50];

int main()
{
    
    int i,num;
    
    printf("Enter Number of students:");
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
         printf("\n Enter Your Id: ");
         scanf("%d",&st[i].id);
    
         printf("\n Enter Your Name: ");
         scanf("%s",&st[i].name);
    }
    
     for(i=0;i<num;i++)
    {
          printf("\n your id is %d and Your name is %s ",st[i].id,st[i].name);
    
    }
   
    
    // printf("Your id is %d",st.id);
    // printf("Your name is %s",st.name);

    return 0;
}