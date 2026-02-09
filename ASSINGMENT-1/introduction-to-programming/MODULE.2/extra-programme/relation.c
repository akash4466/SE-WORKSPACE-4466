#include <stdio.h>
#include <conio.h>
void main()
{
    int a=5, b=9;
    

    int f1 = a < b;
    int f2 = a > b;
    int f3 = a <= b;
    int f4 = a >= b;
    int f5 = a == b;

    printf("\n %d good", f1);
    printf("\n %d not good", f2);
    printf("\n %d ok", f3);
    printf("\n %d no", f4);
    printf("\n %d fog", f5);

    getch();
}