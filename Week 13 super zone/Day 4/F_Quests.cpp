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
        ll n, c, d, cnt = 0, ans = -1;
        cin >> n >> c >> d;

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());

        ll l = 0, r = d + 2, mid;
        while (l < r)
        {
            mid = l + ((r - l + 1) / 2);
            cnt = 0;
            for (int i = 0; i < d; i++)
            {
                if (i % mid < n)
                    cnt += v[i % mid];
            }
            if (cnt >= c)
                l = mid;
            else
                r = mid - 1;
        }
        if (l == d + 2)
            cout << "Infinity" << '\n';
        else if (l == 0)
            cout << "Impossible" << '\n';
        else
            cout << l - 1 << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}