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
        vector<ll> arr(n), v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] != 1)
            v.push_back(1);
        else
            v.push_back(2);
        for (int i = 1; i < n; i++)
        {
            ll x = v[i - 1];
            if ((x + 1) != arr[i])
                v.push_back(x + 1);
            else
                v.push_back(arr[i] + 1);
        }
        cout << v[n - 1] << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}