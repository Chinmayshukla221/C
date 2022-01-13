/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Enter the year:";
    cin>>year;
    if(year%4==0)
    {
        cout<<"This is a leap year!";
    }
    else
    {
        cout<<"This is a year.";
    }
}
