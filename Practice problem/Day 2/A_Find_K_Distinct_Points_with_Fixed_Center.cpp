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
    ll x, y, k;
    cin >> x >> y >> k;
    if (k == 1)
    {
        cout << x * k << " " << y * k << '\n';
        return;
    }
    if (k == 2)
    {
        cout << x * k << " " << y * k << '\n';
        cout << 0 << " " << 0 << '\n';
        return;
    }
    if (k == 3)
    {
        cout << x * k << " " << y * k << '\n';
        cout << x * k - 1 << " " << y * k - 1 << '\n';
        cout << x * k + 1 << " " << y * k + 1 << '\n';
        return;
    }
    if (k % 2 != 0)
    {
        cout << x * k << " " << y * k << '\n';
        // cout<<"0"<<" "<<"0"<<'\n';
        for (int i = 1; i < k; i++)
        {
            if (i % 2 == 0)
                cout << x * k + i << " " << y * k + i << '\n';
            else
                cout << x * k - i << " " << y * k - i << '\n';
        }
        return;
    }
    if (k % 2 == 0)
    {
        cout << x * k << " " << y * k << '\n';
        cout << "0" << " " << "0" << '\n';
        for (int i = 1; i < k; i++)
        {
            if (i % 2 == 0)
                cout << x * k + i << " " << y * k + i << '\n';
            else
                cout << x * k - i << " " << y * k - i << '\n';
        }
        return;
    }
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