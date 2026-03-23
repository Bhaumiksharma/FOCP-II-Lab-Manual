/* A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to
convert Fahrenheit temperature into Centigrade or vice versa*/

#include <iostream>
using namespace std;
int main ()
{
int choice;
    float temp;
    cout << "1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\nChoice: ";
    cin >> choice;
    cout << "Enter temperature: ";
    cin >> temp;
    if (choice == 1)
        cout << temp << " F = " << (temp - 32) * 5.0 / 9.0 << " C\n";
    else
        cout << temp << " C = " << (temp * 9.0 / 5.0) + 32 << " F\n";
        return 0;
}