/*A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total
expenses and apply a discount accordingly.*/
#include <iostream>
using namespace std;    
int main()
{
    int qty;
    float price;
    cout << "Enter quantity";cin >> qty;
    cout << "Enter unit price "; cin >> price;
    float total = qty * price;
    if (qty > 1000) {
        float disc = 0.10f * total;
        cout << "Discount" << disc << "\n";
        total -= disc;
    }
    cout << "Total expense: " << total << "\n";
    return 0;
    
}