/*Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

Declare  variables: two of type int and two of type float.
Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
Use the  and  operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.

Input Format

The first line contains two integers.
The second line contains two floating point numbers.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x , y;
    float a , b;
    
    scanf("%d%d" , &x , &y);
    scanf("%f%f" , &a , &b);
    
    printf("%d " , x+y);
    printf("%d\n" , x-y);
    
    printf("%.01f " , a+b);
    printf("%.01f " , a-b);
    
    return 0;
}
