#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, day;
    float hours;
    FILE *fp;
    char ch;

    do
    {
        printf("\n===== Student Productivity Tracker =====\n");
        printf("1. Log Daily Study Hours\n");
        printf("2. Generate Weekly Report\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                fp = fopen("study.txt", "a");

                if(fp == NULL)
                {
                    printf("File could not be opened.\n");
                    break;
                }

                printf("Enter day number (1-7): ");
                scanf("%d", &day);

                printf("Enter study hours: ");
                scanf("%f", &hours);

                fprintf(fp, "Day %d : %.2f hours\n", day, hours);

                fclose(fp);

                printf("Study hours saved successfully.\n");

                break;

            case 2:

                fp = fopen("study.txt", "r");

                if(fp == NULL)
                {
                    printf("No study records found.\n");
                    break;
                }

                printf("\n===== Weekly Study Report =====\n");

                while((ch = fgetc(fp)) != EOF)
                {
                    printf("%c", ch);
                }

                fclose(fp);

                break;

            case 3:

                printf("Exiting Program...\n");
                break;

            default:

                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 3);

    return 0;
}