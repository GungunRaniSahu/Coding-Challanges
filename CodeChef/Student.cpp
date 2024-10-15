/*Prodigy Student
Write a program to input two student's names and percentages and print the name of the student with the higher percentage. In case they score equal percentages, print 'equal'.

Input Format
The first line of input will contain two strings: the name of the first student and the name of the second student.
The second line of input will contain two percentages: the percentage of the first student and the percentage of the second student.*/

#include <iostream>
using namespace std;

int main() 
{
    string name1 , name2;
    
    cin >> name1 ;
    cin >> name2 ;
    
    int percentage1 , percentage2;
    
    cin >> percentage1 ;
    cin >> percentage2;
    
    if(percentage1 > percentage2)
    {
        cout << name1 << "\n";
    }
    
    else if(percentage2> percentage1)
    {
        cout << name2 << "\n";
    }
    
    else
    {
        cout << "Equal"<< "\n";
    }
    
    return 0;
}
