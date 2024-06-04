#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> diff_arr;
    for (int i = 1; i <= n; i++)
    {
        ll l, r;
        cin >> l >> r;
        diff_arr[l]++;
        diff_arr[r + 1]--;
    }

    ll sum = 0;
    bool ok = true;
    for (auto [idx, value] : diff_arr)
    {
        sum += value;
        if (sum > 2)
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}