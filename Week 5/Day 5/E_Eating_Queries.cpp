#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> arr(n);
        vector<ll> v(n, 0);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.rbegin(), arr.rend());
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            v[i] = sum;
        }

        while (q--)
        {
            int x;
            cin >> x;
            if (v[n - 1] < x)
                cout << "-1" << '\n';
            else
            {
                auto it = lower_bound(v.begin(), v.end(), x);
                cout << (it - v.begin()) + 1 << '\n';
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}