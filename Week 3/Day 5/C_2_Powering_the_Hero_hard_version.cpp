#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        priority_queue<long long> pq;
        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] != 0)
                pq.push(arr[i]);
            if (!pq.empty() && arr[i] == 0)
            {
                sum += pq.top();
                pq.pop();
            }
        }
        cout << sum << endl;
    }
    return 0;
}