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
    set<ll> s, ss;
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> arr(n), v(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= k)
            s.insert(arr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
        if (v[i] <= k)
            ss.insert(v[i]);
    }
    bool flag = true;
    
    if (s.size() * 2 < k || ss.size() * 2 < k)
        flag = false;

    for (int i = 1; i <= k; i++)
    {
        if (s.find(i) == s.end() && ss.find(i) == ss.end())
        {
            flag = false;
            break;
        }
    }
    if (flag)
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