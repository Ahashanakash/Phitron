#include <bits/stdc++.h>
using namespace std;

#define ll long long
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
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        priority_queue<ll> pq;

        pq.push(arr[n - 1]);
        
        for (int i = n - 2; i >= 0; i--)
        {
            if (pq.top() >= arr[i])
            {
                ll a = pq.top() ^ arr[i];
                pq.pop();
                pq.push(a);
            }
            else
            {
                pq.push(arr[i]);
            }
        }
        cout << pq.size() << endl;
    }
    return 0;
}