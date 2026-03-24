/*Create a class Account with account number and balance. Add a function displayAccount().
 Derive a class SavingsAccount that includes interest rate and a function calculateInterest().
 Demonstrate usage of both classes*/
#include<iostream>
using namespace std;

class Account 
{
    int accNum;
    float balance;

public:
    Account(int accno, float bal)
    {
        this->accNum = accno;
        this->balance = bal;
    }

    float getBalance()
    {
        cout<<"remaing balance is "<<balance<<endl;
        return balance;
    }

    void displayAccount()
    {
        cout << "Your account number is " << accNum << endl;
        cout << "Balance is " << balance << endl;
    }
};

class SavingsAccount : public Account 
{  
    float rate_of_intrest;

public:
    SavingsAccount(int accNo, float bal, float rate)
        : Account(accNo, bal)
    {
        rate_of_intrest = rate;
    }

    void cal_intrest() 
    {
        float interest = (getBalance() * rate_of_intrest) / 100;
        cout << "Total Interest: " << interest << endl;
    }
};

int main()
{
    Account a1(101, 5000);
    a1.displayAccount();

    cout << endl;

    SavingsAccount s1(102, 10000, 5);
    s1.displayAccount();
    s1.cal_intrest();

    return 0;
}