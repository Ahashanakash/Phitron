#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] == 0)
        {
            cout << "0" << '\n';
            continue;
        }
        vector<ll> v(16);
        ll mn = LLONG_MAX;
        for (int j = 0; j <= 15; j++)
        {
            ll a = arr[i] + j, y = 0;
            while (a % 2 == 0)
            {
                y++;
                a = a / 2;
            }
            v[i] = j + 15 - y;
            mn = min(mn, v[i]);
        }
        cout << mn << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
