//Program to print the reference derived data types in C++

#include <iostream>
using namespace std;

int main()
{
    int x = 12;
    int& ref = x;

    ref = 2;
    cout << "x = " << x << endl;
    x = 40;
    cout << "ref = " << ref << endl;

 return 0;
}
