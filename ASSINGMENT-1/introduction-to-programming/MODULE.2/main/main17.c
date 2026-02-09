#include<stdio.h>
#include<math.h>

int main() {
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    if (sum == num)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
