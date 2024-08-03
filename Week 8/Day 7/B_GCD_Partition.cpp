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
    ll n, a = 1, mx = 0;
    cin >> n;
    vector<ll> arr(n), v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
            v[i] = arr[i];
        else
            v[i] = v[i - 1] + arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        ll a = v[n - 1] - v[i];
        a = __gcd(a, v[i]);
        mx = max(mx, a);
    }
    cout << mx << '\n';
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