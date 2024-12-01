/*Odd numbers
Task
Write a program to print odd numbers between 10 to 20 on separate lines:

Think of where the loop should start from, declare a variable a and initialise it to that value.
Use the while syntax to create a loop,
Think of what condition would stop the loop when the iterator reaches its end.
Think of how to adjust the value of the iterator within each iteration. Would it be incremented or decremented? By what value should it be incremented or decremented?
Expected output:
11
13
15
17
19*/
#include <stdio.h>

int main() 
{

    int i = 11;
    while (i < 20) 
    {
        printf("%d\n", i);
        i += 2;
    }
    
    return 0;
}
