 #include<stdio.h>

 int main() 
 {
     int marks[5],choice,i,j,temp;
    
     for( i=0;i<5;i++)
     {
         printf("Enter Marks %d: ",i+1);
         scanf("%d",&marks[i]);
     }
    
    
     printf("\n Press 1 For Ascending Order \n Press 2 For Descending Order");
     scanf("%d",&choice);
    
    
     switch(choice)
     {
         case 1: 
         for(i=0;i<5;i++)
         {
             for(j=0;j<5-i;j++)
             {
                 if(marks[j] > marks[j + 1])
                 {
                      temp = marks[j];
                      marks[j] = marks[j + 1];
                      marks[j + 1] = temp;  
                 }
             }
         }
        
           
     printf("\nascending Order: ");
     for(i = 0; i <5 ; i++)
     {
         printf("%d ", marks[i]);
     }
     break;
       
    
        
         break;
        
         case 2: 
        
          for(i=0;i<5;i++)
         {
             for(j=0;j<5-i;j++)
             {
                 if(marks[j] < marks[j + 1])
                 {
                      temp = marks[j];
                      marks[j] = marks[j + 1];
                      marks[j + 1] = temp;  
                 }
             }
         }
        
           
     printf("\nDescending Order: ");
     for(i = 0; i < 5; i++)
     {
         printf("%d ", marks[i]);
     }
        
         break;
        
          default: printf("not valid");
          break;
     }
    
    
     return 0;
 }
