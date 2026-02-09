#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    FILE *ya;
    char email[20],pass[10];
    char loginemail[20]="polakash@gamil.com",loginpassword[20]="1234";
    printf("enter the email:");
    scanf("%s",&email);
    printf("enter the pass:");
    scanf("%s",&pass);

    ya=fopen("tiger.txt","w");
    fprintf(ya,"email:%s\npassword:%s",email,pass);
    fclose(ya);

    ya=fopen("tiger.txt","r");
    fscanf(ya,"email:%s\npassword:%s",&email,&pass);
    // fscanf(ya,"%s",pass);
    fclose(ya);
    printf("%s",email);
    printf("%s",pass);

    if(strcmp(loginemail,email)&&strcmp(loginpassword,pass))
    {
        printf("login successfull....");    
    }
    else
    {
        printf("login not successfull..");
    }
    getch();

}