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
    ll n, mx = LLONG_MIN;
    cin >> n;
    vector<ll> arr(n), v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n % 2 != 0)
    {
        cout << "NO" << '\n';
        return;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n / 2; i++)
    {
        v.push_back(arr[i]);
        v.push_back(arr[n / 2 + i]);
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
            continue;
        else if (v[i] < v[i - 1] && v[i] < v[i + 1])
            continue;
        else
        {
            mx = 1;
            break;
        }
    }

    if (mx == 1)
        cout << "NO" << '\n';
    else
    {
        cout << "YES" << '\n';
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << '\n';
    }
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