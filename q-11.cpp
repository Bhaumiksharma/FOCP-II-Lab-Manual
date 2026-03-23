#include <iostream>
using namespace std;

int main()
{
    int qty;
    float price;
    
    cout << "Enter quantity: ";
    cin >> qty;
    
    cout << "Enter unit price: ";
    cin >> price;
    
    float total = qty * price;

    if (qty > 1000)
    {
        float disc = 0.10f * total;
        cout << "Discount applied: " << disc << endl;
        total -= disc;
    }
    else
    {
        cout << "No discount applied" << endl;
    }

    cout << "Total expense: " << total << endl;

    return 0;
}