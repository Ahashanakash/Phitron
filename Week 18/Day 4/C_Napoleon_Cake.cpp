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
    ll n, a = 0;
    cin >> n;
    vector<ll> arr(n), v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        a = max(a, arr[i]);
        if (a > 0)
            v[i] = 1;
        a--;
    }

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << '\n';
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