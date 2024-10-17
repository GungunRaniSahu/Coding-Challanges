/*Oneful Pairs
Chef defines a pair of positive integers (a,b) to be a Oneful Pair, ifa+b+(a⋅b)=111.For example, (1,55) is a Oneful Pair, since 1+55+(1⋅55)=56+55=111.But (1,56) is not a Oneful Pair, since 1+56+(1⋅56)=57+56=113=111.

Given two positive integers a and b, output Yes if they are a Oneful Pair. And No otherwise.
Input Format
The only line of input contains two space-separated integers a and b.

Output Format
Output Yes, if (a,b) form a Oneful Pair. Output No if they do not.

You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).*/

#include <iostream>
using namespace std;

int main() 
{
    int a,b;
    cin>>a>>b;
    
    int c ,d;
    c = a+b;
    d = a*b;
    
    if(c+d==111)
    {
        cout << "Yes" << "\n";
    }
    
    else
    {
        cout << "No" << "\n";
    }
    
	return 0;
}
