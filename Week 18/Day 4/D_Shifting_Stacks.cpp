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
    ll n, sum = 0;
    bool flag = false;
    cin >> n;
    vector<ll>arr (n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (sum < (i * (i - 1) / 2))
            flag = true;
    }
    if (!flag)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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