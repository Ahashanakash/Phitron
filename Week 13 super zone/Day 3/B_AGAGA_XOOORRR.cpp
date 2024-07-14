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
        ll n, x = 0, y = 0, cnt = 0;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            x = x ^ arr[i];
        }
        if (x == 0)
        {
            cout << "YES" << '\n';
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            y = y ^ arr[i];
            if (y == x)
            {
                y = 0;
                cnt++;
            }
        }
        if (cnt >= 2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}