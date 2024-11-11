/*Solve this problem - 2
You are given the name of a teen as the variable name.
There is a special rule in Chef town - You will get special treatment if your name is C or A.

Output the following
1 if the name is A or C
0 otherwise*/
#include <stdio.h>

int main() 
{
  char name = 'D'; 
    
    printf("%d" , name== 'C' || name == 'A');
  
  return 0;
}
