/* A teacher wants to calculate the average marks of three students to determine the class performance. 
Implement a solution to accept three numbers and compute their average. */
#include <iostream>
using namespace std;

int main() {
    double m1,m2,m3;
    cout << "Enter marks of three students: ";
    cin >> m1 >> m2 >> m3;
    double avg = (m1 + m2 + m3) / 3;
    cout << "The average marks is: " << avg << endl;
    return 0;
}