/*Moneymaking
Chef has X nuggets and Y star pieces with him.

Each nugget sells for 5000 coins, and each star piece sells for 9800 coins.

How much money can Chef make by selling all of his items?

Input Format
The only line of input will contain two space-separated integers X and Y — the number of nuggets and star pieces Chef has.
Output Format
Output a single integer: the amount of money Chef can earn by selling all his items.*/
#include <stdio.h>

int main()
{
    int x , y , total;
    
    scanf("%d" , &x);
    scanf("%d" , &y);
    
    
    total = (x*5000) + (y*9800);
    
    
    printf("%d\n" , total);
    
    
    return 0;
}
