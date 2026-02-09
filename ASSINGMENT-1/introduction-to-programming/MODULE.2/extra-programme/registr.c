#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *ray;
    int choice;
    char filname[10]="fir.txt",email[10],name[10],password[10],loginemail[10],loginpassword[10];

    printf("press 1 for singup\n press 2 for login\n");
    printf("enter the number:");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        ray=fopen(filname,"w");
        printf("enter the name:");
        scanf("%s",&name);
        printf("enter the email:");
        scanf("%s",&email);
        printf("enter the password:");
        scanf("%s",&password);
        fprintf(ray,"name%s\nemail%s\npassword%s");
        fclose(ray);
        case 2:
        ray=fopen(filname,"r");
        if(ray==NULL)
        {
            printf("not found:");
            fclose(ray);
            break;
        }
        else{
             printf("enter the name:");
            scanf("%s",&name);
            printf("enter the email:");
            scanf("%s",&loginemail);
             printf("enter the password:");
            scanf("%s",&password);
           

            fscanf(ray,"loginpassword:%s\n",name);
            fscanf(ray,"loginemail:%s\n",email);
            fscanf(ray,"loginpassword:%s\n",password);
            fscanf(ray,"loginpassword:%s\n",name);
            fclose(ray);
                if(strcmp(loginemail,email)==0){
                        if(strcmp(loginpassword,password)==0){
                            printf("Login Successfully");
                        }
                        else{
                            printf("Invalid Password");                            }
                        }
                    else{
                        printf("Invalid Email");
                    }
        }
        
    

        
    
    
       
    }

}