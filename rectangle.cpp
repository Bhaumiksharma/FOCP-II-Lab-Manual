#include<iostream>
using namespace std;
class shape final 
{
public:
shape(){cout<<"\n shape default const called";}
 virtual void area()=0;// pure virtual function 
 void display(){cout<<" \n we are 2d shape";}
};
class rectangle:public shape
{
int len ; int wid;
public:
rectangle(int l =5,int w =10):len(l),wid(w)
{cout<<"\n rectangle object  created";}
void area(){cout<<"\n area of rectangle is "<<len*wid;}

};
int main()
{
    shape s1;
          rectangle r1, r2(50,45);
          r1.area();
          r2.area();
          r2.shape::area();
          r2.display();
          r1.display();
          return 0;
}
