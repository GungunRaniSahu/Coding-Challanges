/*Reverse a Number
Write a C program that takes an integer as input and prints its reverse. Use a while loop for the reversal process.*/
#include <stdio.h>
int main()
{
    int num, reverse = 0, remainder;
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse* 10 + remainder;
        num /= 10;
    }

    printf("%d", reverse);

    return 0;
}
