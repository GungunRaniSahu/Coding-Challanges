/*Print factorial
Write a program that uses a do-while loop to find the factorial of a given number.*/
#include <iostream>
using namespace std;

int main() 
{
    int i , sum = 1 , x;
    
    cin >> x;
    
    do
    {
        sum *= x;
        x--;
    }
    
    while(x>0);
    
    cout << sum;
    
    return 0;

}
