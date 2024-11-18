/*Task
Read  numbers from stdin and print their sum to stdout.

Input Format
One line that contains 3 space-separated integers: a, b, and c.

Constraints
1<= a,b , c <= 1000

Output Format
Print the sum of the three numbers on a single line.*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int a , b ,c , sum;
    
    cin >> a;
    cin >> b;
    cin >> c;
    sum = a+b+c;
    
    cout << sum ;
    return 0;
}
