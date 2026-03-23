/*. A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a
solution to classify the symbol.*/
#include <iostream>
using namespace std;
int main()
{char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isdigit(ch))
        cout << ch << " is a Digit\n";
    else if (isalpha(ch)) 
    {
        char lo = tolower(ch);
        if (lo=='a'||lo=='e'||lo=='i'||lo=='o'||lo=='u')
            cout << ch << " is a Vowel\n";
        else
            cout << ch << " is a Consonant\n";
    } 
    else
     {
         cout << ch << " is a Special Char \n";
     }
    return 0;
}