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
    vector<ll> arr(n), v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = true;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % arr[0] != 0)
            v.push_back(arr[i]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % v[0] != 0)
            flag = false;
    }
    if (flag)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
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