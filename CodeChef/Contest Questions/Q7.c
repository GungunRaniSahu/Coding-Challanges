/*Food Costs
You're a bit all over the place as a college student. You used to eat out at expensive restaurants almost every day until your parents gave you a talking-to about being irresponsible. Now, you've got to control your eating and spending habits.

So, here's the plan: you'll stick to the college mess for your meals every day, except Sundays. On Sundays, you're treating yourself to those fancy restaurant meals.
The cost is Rs. X for the mess food each day, and Rs.Y for the restaurant splurges.

Now, what's the cost of food per week? Note that you don't have to pay for the mess on Sundays.
A week has seven days, as usual.

Input Format
The first and only line of input contains 2 space-separated integers, X and Y.
Output Format
Output a single integer: the weekly cost of food.*/
#include <stdio.h>

int main() 
{
	int x , y;
	
	scanf("%d" , &x);
	scanf("%d" , &y);
	
	int total ;
	total = x*6+y;
	
	printf("%d" , total);
	
	return 0;
	

}
