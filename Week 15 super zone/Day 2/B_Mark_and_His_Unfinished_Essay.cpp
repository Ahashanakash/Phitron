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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, c, q, a, b;
        cin >> n >> c >> q;
        string s;
        cin >> s;
        vector<ll> arr(c + 1), l(c + 1), r(c + 1);
        l[0] = 0;
        r[0] = n;
        for (int i = 1; i <= c; i++)
        {
            cin >> a >> b;
            a--;
            b--;
            l[i] = r[i - 1];
            r[i] = l[i] + (b - a + 1);
            arr[i] = l[i] - a;
        }
        while (q--)
        {
            ll x;
            cin >> x;
            x--;
            for (int i = c; i >= 1; i--)
            {
                if (x >= l[i])
                    x -= arr[i];
            }
            cout << s[x] << '\n';
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}