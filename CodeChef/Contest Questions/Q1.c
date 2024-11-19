/*Sum of squares of all numbers from 1 to a given number*/
#include<stdio.h>
void main()
{
  int num , sum =0 ;

  printf("Enter a number of your choice : \n");
  scanf("%d" , &num);

  if(num == 0)
  {
    return 1;
  }

  for(int i = 1 ; i < = num ; i++)
    {
      sum += i*i;
    }

  printf("%d" , sum);

}
