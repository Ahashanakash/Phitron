#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, mx = LLONG_MIN;
        cin >> n;
        unordered_map<ll, ll> mp;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
            mx = max(mx, mp[x]);
        }

        if (n % 2 == 0)
        {
            if (mx <= n / 2)
            {
                cout << "0" << '\n';
            }
            else
                cout << mx - (n - mx) << '\n';
        }
        else
        {
            if (mx <= n / 2)
            {
                cout << "1" << '\n';
            }
            else
                cout << mx - (n - mx) << '\n';
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