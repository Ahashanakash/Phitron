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
        ll x, y, k;
        bool flag = false;
        cin >> x >> y >> k;
        k--;
        x++;
        while (x != y)
        {
            if (x % y == 0)
            {
                while ((x % y) == 0)
                    x = x / y;
            }
            if (k == 0)
            {
                cout << x << '\n';
                flag = true;
                break;
            }
            ll a = y - (x % y);
            if (a <= k)
            {
                k = k - a;
                x = x + a;
            }
            else
            {
                cout << x + k << '\n';
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << 1LL + k % (y - 1LL) << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}