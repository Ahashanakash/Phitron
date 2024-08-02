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
    ll n, k, cnt = 0;
    string s;
    cin >> n >> k >> s;
    vector<ll> arr;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            arr.push_back(i + 1);
    }
    if (arr.size() == 0)
    {
        for (int i = 0; i < n; i += (k + 1))
            cnt++;
    }
    else
    {
        ll x = arr[arr.size() - 1] + (k + 1);
        ll y=(arr[0] - (k + 1));
        for (int i = x; i <= n; i += (k + 1))
            cnt++;

        for (int i = 0; i < y; i += (k + 1))
            cnt++;

        for (int i = 0; i < arr.size() - 1; i++)
        {
            ll a = arr[i];
            ll b = arr[i + 1];
            for (int j = a + (k + 1); j <= b - (k + 1); j += (k + 1))
                cnt++;
        }
    }
    cout << cnt << '\n';
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