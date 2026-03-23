/*A student wants to swap the values of two variables for practising coding basics.
Implement a solution to swap two numbers using different techniques*/

#include <iostream>
using namespace std;    

int main()
{int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
 
     int temp = a; a = b; b = temp;
    cout << "Using temp variable  : a=" << a << ", b=" << b << "\n";
    return 0;
}