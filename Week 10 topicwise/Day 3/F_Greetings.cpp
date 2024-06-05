#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll q, cnt = 0;
        cin >> q;
        vector<pair<ll, ll>> arr;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            arr.push_back({x, y});
        }
        sort(arr.rbegin(),arr.rend());
        pbds<ll>p;
        for (int i = 0; i < arr.size(); i++)
        {
            cnt+=p.order_of_key(arr[i].second);
            p.insert(arr[i].second);
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