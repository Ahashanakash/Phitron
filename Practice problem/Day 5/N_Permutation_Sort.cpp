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
    ll n, mn = LLONG_MAX, mx = LLONG_MIN;
    cin >> n;
    vector<ll> arr(n), v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < mn)
            mn = arr[i];
        if (arr[i] > mx)
            mx = arr[i];
    }
    v = arr;
    sort(v.begin(), v.end());
    if (v == arr)
        cout << 0 << '\n';
    else if (arr[0] == mn || arr[n - 1] == mx)
    {
        cout << 1 << '\n';
    }
    else if (arr[0] == mx && arr[n - 1] == mn)
        cout << 3 << '\n';
    else
        cout << 2 << '\n';
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