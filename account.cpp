/*Create a class Account with account number and balance. Add a function displayAccount().
 Derive a class SavingsAccount that includes interest rate and a function calculateInterest().
 Demonstrate usage of both classes*/
#include<iostream>
using namespace std;

class Account 
{
     string account_Number;
protected:
 float balance;

public:
   Account(string accno, float bal)
    {
        account_Number = accno;
        balance = bal;
    }

    float getBalance()
    {
        cout<<"remaing balance is "<<balance<<endl;
        return balance;
    }

    void displayAccount()
    {
        cout << "Your account number is " << account_Number << endl;
        cout << "Balance is " << balance << endl;
    }
};

class SavingsAccount : public Account 
{  
    float  intrest_rate;

public:
    SavingsAccount(string accNo, float bal, float rate)
        : Account(accNo, bal)
    {
         intrest_rate = rate;
    }

    void cal_intrest() 
    {
        float interest = (getBalance() * intrest_rate) / 100;
        cout << "Total Interest: " << interest << endl;
    }
};

int main()
{
    Account a1("101", 5000);
    a1.displayAccount();

    cout << endl;

    SavingsAccount s1("101b", 10000, 5);
    s1.displayAccount();
    s1.cal_intrest();

    return 0;
}