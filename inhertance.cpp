#include<iostream>
using namespace std;
class A

{
    int a=10;

public:

A(){cout<<"constructor is called"<< endl;}
~A(){cout<<"destructor is called "<< endl;}
void display_a()
{ cout<<"value of a is "<<a<<endl;}
};

class B: virtual public A
{
    int b=10;

public:
B(){cout<<"constructor is called"<<endl;}

~B(){cout<<"destructor is called "<<endl;}

void display_b(){ cout<<"value of b is "<<b<<endl;}
};


class C:virtual public A
{
    int c=10;

public:

C() {cout<<"constructor is called"<<endl;}
~C() {cout<<"destructor is called "<<endl;}

void display_c(){ cout<<"value of c is "<<c<<endl;}
};

class D:public B ,public C 
{
    int d=999;

public:
D() {cout<<"constructor is called"<<endl;}
~D() {cout<<"destructor is called "<<endl;} 

void display_d()
{display_a();
display_b();
display_c();
cout<<"value of d is "<<d<<endl;}
};
int main()
{
    D d1;
    d1.display_d();
    d1.display_a();
    d1.display_b();
    d1.display_c();
    return 0;
}
