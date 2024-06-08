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
        ll n, mn = LLONG_MAX, mx = LLONG_MIN, idx_mx, idx_mn;
        bool flag = false;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (abs(arr[i] - arr[i - 1]) >= 2)
            {
                cout << "YES" << '\n' << i << " " << i + 1 << '\n';
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}