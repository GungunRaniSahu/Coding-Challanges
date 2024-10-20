/*Product and Sum of digits
Given an integer N, Calculate and print the sum and product of its digit.

Input Format
The first and only line of input will contain a single positive integer N <= 109.
Output Format
Print the sum and product of digits of N on single line with a space between them.*/
#include <iostream>
using namespace std;

int main() 
{
    int n , sum =0 , product = 1;
    
    cin >> n;
    
    while(n != 0)
    {
        sum += (n%10);
        product = product * (n%10);
        n /= 10;
    }
    
    cout << sum << " " << product << "\n";
    
    return 0;

}
