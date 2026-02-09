#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *b;
    int choice;
    char email[10],name[10],password[10],loginemail[10],loginpassword[10];

    printf("press 1 for singup\n press 2 for login\n");
    printf("enter the number:");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        b=fopen("you.txt","w");
        
        
        
        printf("enter the name:");
        scanf("%s",&name);
        printf("enter the email:");
        scanf("%s",&email);
        printf("enter the password:");
        scanf("%s",&password);
        fprintf(b,"name:%s\n",name);
        fprintf(b,"email:%s\n",email);
        fprintf(b,"password:%s\n",password);
        fclose(b);
        break;
        case 2:
        b=fopen("you.txt","r");
         if(b==NULL)
        {
            printf("not found:");
            fclose(b);
            break;
        }
        
        
            else
            {
                printf("enter the name:");
                scanf("%s",&name);
                printf("enter the email:");
                scanf("%s",&loginemail);
                printf("enter the password:");
                scanf("%s",&password);
           

            fscanf(b,"loginpassword:%s\n",name);
            fscanf(b,"loginemail:%s\n",email);
            fscanf(b,"loginpassword:%s\n",password);
            
            fclose(b);
                if(strcmp(loginemail,email && loginpassword,password)!=0) 
                {
                    printf("regiestration sucessfull");
                }
                        else{
                            printf("regiestration not sucessfull ");                            }
                        }
                        
                    
                    getch();
        }
        