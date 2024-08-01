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
        ll n, a = 0, b = 0, u = 0, d = 0;
        cin >> n;
        vector<ll> m1(n), m2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> m1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> m2[i];
        }
        for (int i = 0; i < m1.size(); i++)
        {
            if (m1[i] > m2[i])
                a += m1[i];
            else if (m1[i] < m2[i])
                b += m2[i];
            else
            {
                if (m1[i] == 1)
                    d++;
                else if (m1[i] == -1)
                    u++;
            }
        }
        while (u > 0)
        {
            if (a > b)
                a--;
            else
                b--;
            u--;
        }
        while (d > 0)
        {
            if (a < b)
                a++;
            else
                b++;
            d--;
        }
        ll ans = min(a, b);
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
