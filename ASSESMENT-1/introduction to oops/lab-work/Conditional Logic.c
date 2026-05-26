#include <stdio.h>

int main()
{
    int hours;

    printf("Enter hours studied today: ");
    scanf("%d", &hours);

    if(hours >= 8)
    {
        printf("Excellent work! Keep studying like this.\n");
    }
    else if(hours >= 5)
    {
        printf("Good job! You are doing well.\n");
    }
    else if(hours >= 2)
    {
        printf("You can improve with more focus.\n");
    }
    else
    {
        printf("Start studying seriously today!\n");
    }

    return 0;
}