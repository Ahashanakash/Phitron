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
        ll n, ans = 0;
        cin >> n;
        map<tuple<ll, ll, ll>, ll> mp;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        for (ll i = 0; i + 2 < n; i++)
        {
            ans += (mp[{arr[i], arr[i + 1], -1}] + mp[{arr[i], -1, arr[i + 2]}] + mp[{-1, arr[i + 1], arr[i + 2]}] - 3 * mp[{arr[i], arr[i + 1], arr[i + 2]}]);
            mp[{arr[i], arr[i + 1], -1}]++;
            mp[{arr[i], -1, arr[i + 2]}]++;
            mp[{-1, arr[i + 1], arr[i + 2]}]++;
            mp[{arr[i], arr[i + 1], arr[i + 2]}]++;
        }
        cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}