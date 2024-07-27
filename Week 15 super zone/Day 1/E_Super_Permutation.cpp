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
        ll n;
        cin >> n;
        vector<ll> arr(n);
        if (n == 1)
        {
            cout << "1" << '\n';
            continue;
        }
        else if (n % 2)
            cout << "-1" << '\n';
        else
        {
            ll x = n, y = 1;
            for (int i = 1; i <= n; i++)
            {
                if (i % 2)
                {
                    arr[i - 1] = x;
                    x -= 2;
                }
                else
                {
                    arr[i - 1] = y;
                    y += 2;
                }
            }
            for (auto it : arr)
                cout << it << " ";
            cout << '\n';
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