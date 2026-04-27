#include <iostream>
#include <vector>
using namespace std;
int main() {
 vector<int> marks;
 int choice, val, sum;
 do {
 cout << "\n1. Add Marks\n2. Display\n3. Average\n4. Remove Last\n Exit\n";
 cin >> choice;
 switch(choice) {
 case 1:
 cout << "Enter marks: ";
 cin >> val;
 marks.push_back(val);
 break;
 case 2:
 cout << "Marks: ";
 for(int x : marks)
 cout << x << " ";
 break;
 case 3:
 if(marks.empty()) {
 cout << "No data!";
 break;
 }
 sum = 0;
 for(int x : marks)
 sum += x;
 cout << "Average = " << (float)sum / marks.size();
 break;
 case 4:
 if(!marks.empty())
 marks.pop_back();
 else
 cout << "Nothing to remove!";
 break;
 }
 } while(choice != 0);
}