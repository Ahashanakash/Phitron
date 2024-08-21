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
    ll n, k, x = 0, cnt = 0;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (arr[0] == arr[n - 1])
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[0])
                cnt++;
        }
        if (cnt >= k)
        {
            cout << "YES" << '\n';
            return;
        }
        else
        {
            cout << "NO" << '\n';
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[0] == arr[i])
            cnt++;
        if (cnt == k)
        {
            x = i + 1;
            break;
        }
    }
    if (cnt == k && x == n)
    {
        cout << "YES" << '\n';
        return;
    }
    if (cnt != k)
    {
        cout << "NO" << '\n';
        return;
    }
    cnt = 0;
    for (int i = n - 1; i >= x; i--)
    {
        if (arr[n - 1] == arr[i])
            cnt++;
        if (cnt == k)
            break;
    }
    if (cnt != k)
    {
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';
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