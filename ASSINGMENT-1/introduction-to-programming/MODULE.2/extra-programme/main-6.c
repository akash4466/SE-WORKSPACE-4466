#include<stdio.h>
#include<conio.h>
struct student
{
    int id;
    char name[10];
};

int main()
{
    struct student st;
    
    printf("Enter Your Id: ");
    scanf("%d",&st.id);
    
    printf("Enter Your Name: ");
    scanf("%s",&st.name);
    
    printf("\nYour id is: %d",st.id);
    printf("\nYour name is: %s",st.name);

    return 0;
}