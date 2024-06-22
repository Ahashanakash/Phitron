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
    ll t, sum = 0, mx = LLONG_MIN;
    map<ll, ll> mp;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        mp[x]++, mp[y + 1]--;
    }

    for (auto [a, b] : mp)
    {
        sum += b;
        mx = max(mx, sum);
    }
    cout << mx;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}