/*An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker.
Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and
display results*/
#include <iostream>
using namespace std;
int main()
{ int n;
    cout << "  number of employees: ";
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        float slry;
        cout << "  salary of employee " << i << ": ";
        cin >> slry;
        float bonus = 0.12f * slry;
        cout << "  Bonus=" << bonus << "  Net Salary=" << slry + bonus << "\n";
    }
    return 0;}