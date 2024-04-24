#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll tp = n * (n - 1) / 2;
        vector<ll> arr(tp);
        for (ll i = 0; i < tp; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        for (ll i = 0; i < tp; i += (--n))
        {
            cout << arr[i] << " ";
        }
        cout << arr[tp - 1] << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}