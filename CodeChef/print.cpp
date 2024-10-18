/*Print Squares
Write a program that utilizes a while loop to print the squares of numbers from 1 to N.*/
#include <iostream>
using namespace std;

int main() 
{
    int num = 1;
    int x;
    
    cin >> x;
    
    while(num <= x)
    {
        cout << num * num << " ";
        num++;
    }
     
    return 0;
}
