/*Icecream and Cone
Chef has X cones and Y scoops of ice cream. Each ice cream cone requires exactly one cone and one scoop of ice cream.

Your task is to determine the maximum number of ice cream cones Chef can make with the available ingredients.

Input Format
Input will contain two integers X and Y - the number of cones and ice cream scoops, respectively.
Output Format
Output the maximum number of ice cream cones Chef can make.*/
#include <stdio.h>

int main()
{
    int cones , scoops;

    printf("Enter the number of cones: \n");
    scanf("%d" , &cones);
    scanf("%d" , &scoops);
    
    printf("%d", scoops);

    return 0;
}
