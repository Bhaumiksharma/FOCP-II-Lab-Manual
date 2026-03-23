/* A learning application analyzes numbers for mathematical properties.
Design a solution to check whether a given number is a Perfect number or an Armstrong number.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Perfect number
    int sum = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        cout << n << " is Perfect Number\n";
    else
        cout << n << " isn't a Perfect Number\n";

    // Armstrong number
    int temp = n, dig = 0, arm = 0;

    while (temp)
    {
        dig++;
        temp /= 10;
    }

    temp = n;

    while (temp)
    {
        int d = temp % 10;
        arm += pow(d, dig);
        temp /= 10;
    }

    if (arm == n)
        cout << n << " is Armstrong Number\n";
    else
        cout << n << " isn't Armstrong Number\n";

    return 0;
}