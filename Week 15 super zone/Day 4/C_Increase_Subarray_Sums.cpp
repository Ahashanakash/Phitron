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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> arr(n), v(n + 1, LLONG_MIN);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            ll res = 0;
            for (int j = i; j < n; j++)
            {
                res += arr[j];
                v[j - i + 1] = max(v[j - i + 1], res);
            }
        }
        for (int i = 0; i <= n; i++)
        {
            ll res = 0;
            for (int j = 1; j <= n; j++)
            {
                res = max(res, v[j] + (min(i, j) * m));
            }
            cout << res << " ";
        }
        cout << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}