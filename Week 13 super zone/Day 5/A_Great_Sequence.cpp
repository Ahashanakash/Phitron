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
        ll n, x, j, cnt = 0;
        cin >> n >> x;
        vector<ll> v(n);
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            ll a = mp[v[i]];
            if (a > 0)
            {
                ll b = v[i] * x;
                if (mp[b] > 0)
                    mp[b] = max((ll)0, mp[b] - 1);
                else
                    cnt++;
                    mp[v[i]] = max((ll)0, mp[v[i]] - 1);
            }
        }
        cout << cnt << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}