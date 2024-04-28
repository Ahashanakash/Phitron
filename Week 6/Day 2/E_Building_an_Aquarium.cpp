#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, left = 1, right = 1e10;
        cin >> n >> x;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (left < right - 1)
        {

            ll total = 0;
            ll mid = left + (right - left) / 2;
            for (ll i = 0; i < n; i++)
            {
                if (arr[i] < mid)
                {
                    total += (mid - arr[i]);
                }
            }
            if (total > x)
            {
                right = mid;
            }
            else
            {
                left = mid;
            }
        }
        cout << left << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}