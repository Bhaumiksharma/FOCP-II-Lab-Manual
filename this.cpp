#include<iostream>
using namespace std;
class A
{
    int a1, a2;
    public:
 A()
    {
        cout<<"\n default";
        a1=0;
        a2=0;
    }
    A(int a1 ,int v2)
    {
        cout<<"\n parameterized";
        this->a1=a1;a2=v2;
    }
    void display()
    {
        cout<<"\n a1="<<a1<<" a2="<<a2;
    }
};
int main()
{
    A obj1,obj2(10,20);
    obj1.display();
    obj2.display();
    return 0;
}