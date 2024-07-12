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
        ll n, cnt = 0, cnt1 = 0;
        cin >> n;
        unordered_map<ll, ll> mp;
        while (n--)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        for (auto i : mp)
        {
            if (i.second > 1)
            {
                cnt++;
                cnt1++;
            }
            else
            {
                if (cnt > cnt1)
                    cnt1++;
                else
                    cnt++;
            }
        }
        cnt1++;
        cout << min(cnt, cnt1) << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}