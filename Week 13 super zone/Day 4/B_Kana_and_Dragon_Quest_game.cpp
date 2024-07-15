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
        ll x, n, m, cnt = 0;
        cin >> x >> n >> m;
        m = m * 10;
        while (n-- && x > 0)
        {
            if ((x - m) <= 0)
            {
                cnt = 1;
                break;
            }
            x = (x / 2) + 10;
        }
        if (cnt == 1)
            cout << "YES" << '\n';
        else
        {
            x = x - m;
            if (x <= 0)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
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