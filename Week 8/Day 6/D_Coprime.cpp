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
    ll n, sum = 0, mx = 0;
    cin >> n;
    vector<ll> arr(n), v(1005);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        v[arr[i]] = i + 1;
        if (arr[i] % 2 == 0)
            sum++;
        mx += arr[i];
    }
    if (sum == n)
    {
        cout << "-1" << '\n';
        return;
    }
    if (mx == n)
    {
        cout << n + n << '\n';
        return;
    }
    mx = 0;
    for (int i = 1000; i >= 1; i--)
    {
        if (v[i] != 0)
        {
            for (int j = 1000; j >= 1; j--)
            {
                if (v[j] != 0)
                {
                    if (i == 1)
                        mx = max(mx, v[i] + v[i]);
                    if (j == 1)
                        mx = max(mx, v[j] + v[j]);
                    if (__gcd(i, j) == 1)
                        mx = max(mx, v[i] + v[j]);
                }
            }
        }
    }

    if (mx == 0)
        cout << "-1" << '\n';
    else
        cout << mx << '\n';
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