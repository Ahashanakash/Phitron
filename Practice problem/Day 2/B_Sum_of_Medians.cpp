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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n * k);
    for (int i = 0; i < n * k; i++)
    {
        cin >> arr[i];
    }
    ll x = n - (n - 1) / 2, sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[n * k - x * (i + 1)];
    }
    cout << sum << '\n';
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