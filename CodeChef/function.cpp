/*Double the Value
Complete the given function which doubles the value of variable x using pointer.

Input Format
The only line of input will contain a single integer x

Output Format
Output 2x.*/

#include <iostream>
using namespace std;

void doubleValue(int* p)
{
   *p *= 2;
}

int main() 
{
    int x;
    
    cin >> x;
   

    int* ptr = &x;

    
    doubleValue(ptr);

    cout << x << endl;

    return 0;
}
