#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;

// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

void solve()
{
    ll n, l = 0, h = LLONG_MAX;
    vector<ll> v;
    cin >> n;
    while (n--)
    {
        ll a, k;
        cin >> a >> k;
        if (a == 1)
        {
            if (k > l)
                l = k;
        }
        else if (a == 2)
        {
            if (k < h)
                h = k;
        }
        else
            v.push_back(k);
    }
    ll ans = h - l + 1;
    if (ans <= 0)
    {
        cout << "0" << '\n';
        return;
    }
    for (auto &&i : v)
    {
        if (i >= l && i <= h)
            ans--;
        if (ans <= 0)
        {
            cout << "0" << '\n';
            return;
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}