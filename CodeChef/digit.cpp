/*Find the number of digits
Given an integer N, Calculate and print the number of digits present in N.*/
#include <iostream>
using namespace std;

int main() 
{
    int digit ;
    
    cin >> digit;
    
    int count = 0 ;
    
    while (digit!=0)
    {
        digit /= 10 ;
        count++;
    }
    
    cout << count << "\n";
    
    return 0;

}
