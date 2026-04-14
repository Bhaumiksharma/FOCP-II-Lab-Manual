#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;

        priority_queue<long long> pq;

        for (int i = 0; i < N; i++)
        {
            long long X;
            cin >> X;
            pq.push(X);
        }

        long long total = 0;

        while (K--)
        {
            long long candies = pq.top(); 
            pq.pop();

            total += candies;

            pq.push(candies / 2);
        }

        cout << total << endl;
    }

    return 0;
}