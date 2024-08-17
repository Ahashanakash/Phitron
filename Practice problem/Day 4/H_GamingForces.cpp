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
    ll n, cnt = 0, ans = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            cnt++;
    }
    sort(v.begin(), v.end());
    if (n == 1)
    {
        cout << 1 << '\n';
        return;
    }
    if (cnt % 2 == 0)
    {
        ans += (cnt / 2);
        ans += (n - cnt);
    }
    else
    {
        ans += (cnt / 2);
        ans += (n + 1 - cnt);
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
