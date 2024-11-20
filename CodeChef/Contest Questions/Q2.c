/*Skip Odd Number and print all the even number till the user inputs*/
#include <stdio.h>
void main()
{
  int n ;
  printf("Enter a number of your choice: \n");
  scanf("%d", &n);

  if(n == 0)
  {
    return 0;
  }

  for(int i = 2 ; i <= n ; i+=2)
    {
      printf("%d" , i);
    }


}
