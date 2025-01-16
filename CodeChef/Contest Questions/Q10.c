/*Can You Bench
Chef goes to the gym daily and follow a progressive bench press routine. In the 1st set, Chef will lift X kilograms. For each subsequent set, you increase the weight by 10 kilograms.

Your task is to calculate the amount of weight Chef will bench in the 3rd set.

Input Format
The input consists of a single integer X, the weight (in kilograms) Chef benches in the 1st set.

Output Format
Output a single integer — the weight (in kilograms) Chef will bench in the 3rd set.*/
#include <stdio.h>

int main() 
{
    int X;

    scanf("%d", &X);

    int third = X + 20;

    printf("%d\n", third);

    return 0;
}
