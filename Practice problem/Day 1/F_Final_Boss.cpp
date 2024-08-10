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
        ll h, n;
        cin >> h >> n;

        vector<ll> arr(n), v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll l = 0, r = 100000000000;
        while (l < r)
        {
            ll x = (l + r) / 2;
            ll dm = 0;
            for (int i = 0; i < n; i++)
            {
                dm += ((x + v[i] - 1) / v[i]) * arr[i];
                if (dm >= h)
                    break;
            }
            if (dm >= h)
                r = x;
            else
                l = x + 1;
        }
        cout << l << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}