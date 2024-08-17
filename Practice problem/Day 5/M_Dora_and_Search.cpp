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
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll l = 0, r = n - 1, x = 1, y = n;
    while (l <= r)
    {
        if (arr[l] == x)
        {
            x++;
            l++;
        }
        else if (arr[l] == y)
        {
            y--;
            l++;
        }
        else if (arr[r] == x)
        {
            x++;
            r--;
        }
        else if (arr[r] == y)
        {
            y--;
            r--;
        }
        else
            break;
    }

    if (l <= r)
        cout << l + 1 << " " << r + 1 << '\n';
    else
        cout << -1 << '\n';
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