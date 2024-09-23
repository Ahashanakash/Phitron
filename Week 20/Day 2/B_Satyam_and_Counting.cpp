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
    ll n;
    cin >> n;
    vector<ll> arr(n + 10), v(n + 10);
    for (int i = 1; i <= n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (y == 0)
            arr[x] = 1;
        else
            v[x] = 1;
    }
    ll ans = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] != 0 && v[i] != 0)
            ans += (n - 2);
        if (i == 0)
            continue;
        if (arr[i + 1] != 0 && arr[i - 1] != 0 && v[i] != 0)
            ans++;
        if (v[i + 1] != 0 && v[i - 1] != 0 && arr[i] != 0)
            ans++;
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