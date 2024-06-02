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
        ll n, cnt = 0;
        cin >> n;
        pbds<ll> p;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            p.insert(x);
            auto it = find(p.begin(), p.end(), x);
            ll a = distance(p.begin(), it);
            cnt = cnt + (p.size() - (a + 1));
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