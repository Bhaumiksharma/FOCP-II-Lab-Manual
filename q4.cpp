/*A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase.
Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.*/
#include <iostream>
using namespace std;
int main()
{
int itemNo, qty;
    float unitPrice;
    cout << "Enter item number, No. of items, price per unit : ";
    cin >> itemNo >> qty >> unitPrice;
    float amount   = qty * unitPrice;
    float discount = 0.20f * amount;
    cout << "Item No   : " << itemNo         << "\n";
    cout << "Amount    : " << amount         << "\n";
    cout << "Discount  : " << discount       << "\n";
    cout << "Net Total : " << amount - discount << "\n";
    return 0;
}
