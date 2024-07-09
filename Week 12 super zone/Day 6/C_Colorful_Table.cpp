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
        ll n, k;
        cin >> n >> k;
        vector<pair<ll, ll>> arr(n);
        map<ll, ll> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
            arr[i].second = i + 1;
        }

        sort(arr.begin(), arr.end());

        vector<ll> a(n), b(n);
        ll maxi = 0, z = LLONG_MAX;

        for (int i = n - 1; i >= 0; i--)
        {
            maxi = max(maxi, arr[i].second);
            a[i] = maxi;
            z = min(z, arr[i].second);
            b[i] = z;
        }

        for (int i = 0; i < n; i++)
        {
            ll x = a[i] - b[i] + 1;
            ll val = arr[i].first;
            mp[val] = max(mp[val], x * 2);
        }

        for (int i = 1; i <= k; i++)
        {
            cout << mp[i] << " ";
        }
        cout << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
