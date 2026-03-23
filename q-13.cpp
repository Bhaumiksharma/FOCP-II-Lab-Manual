/*A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a
solution to calculate the roots of a quadratic equation*/

#include<iostream>
#include<cmath>
using namespace std;
 int main()
{float a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;
    float disc = b*b - 4*a*c;
    if (disc > 0) 
    {
        float r1 = (-b + sqrt(disc)) / (2*a);
        float r2 = (-b - sqrt(disc)) / (2*a);
        cout << "Two distinct real roots: r1=" << r1 << ", r2=" << r2 << "\n";
    } else if (disc == 0) 
    {
        cout << "One real root: r=" << -b / (2*a) << "\n";
    } 
    else 
    {
        float real = -b / (2*a);
        float imag = sqrt(-disc) / (2*a);
        cout << "Complex roots: " << real << "+" << imag << "i  and  "
             << real << "-" << imag << "i\n";
    }
}
