#include <iostream>
using namespace std;
int main() 
{
 ios::sync_with_stdio(false); 

    cin.tie(NULL);               
 
    int T, N, x;

    cin >> T;

    while (T > 0) {

        cin >> N;

        int alive[500000], size = 0;

        for (int i = 0; i < N; i++)
        {

            cin >> x;

            alive[size++] = x;

            if (size && alive[size - 1] < x)

                size--;

            cout << size;

            if (i < N - 1) cout << " ";

        }

        cout << '\n';

        T--;

    }

}