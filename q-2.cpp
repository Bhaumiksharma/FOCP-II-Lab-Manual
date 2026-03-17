/*An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute 
the area of a circle*/
#include<iostream>
using namespace std;                         
int main(){
    double radius, area;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    area=3.14*radius*radius;
    cout<<"The area of the circle is: "<<area<<endl;
    return 0;
}