/*User input Loop
Let's change the problem little bit.
Task
Write a program which does the following

Declare a variable num and store a user's input from the console in it.
Declare a variable a and initialise it to 0.
Use the while syntax to create a loop, output the following to the console:
Print a in separate lines as long as it is less than num.
Increment a by 1 in each iteration.*/
#include <stdio.h>

int main()
{

    int num;
    scanf("%d", & num);
    int a = 0;
    while (a < num) 
    {
        printf("%d\n", a);
        a = a + 1;
    }

  return 0;
}
