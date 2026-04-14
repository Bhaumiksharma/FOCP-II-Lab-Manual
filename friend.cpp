#include<iostream>
using namespace std;    
class rectangle
{
    int length;
    int width;
 public:
    rectangle()
    {length=0;width=0;}
    rectangle(int l,int w)    
    {length=l;width=w;}
    void display()
    {
        cout<<"length="<<length<<endl;
        cout<<"width="<<width<<endl;
    }
    friend void area(rectangle obj);
};
void area(rectangle obj)
{
    int area=obj.length*obj.width;
    cout<<"Area="<<area<<endl;
}
int main()
{       rectangle r1,r2(10,15);
        r1.display();
        r2.display();
        area(r2);
        return 0;
}