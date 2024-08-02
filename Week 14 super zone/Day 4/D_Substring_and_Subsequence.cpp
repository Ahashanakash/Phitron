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
        string a, b;
        cin >> a >> b;
        ll ans = 0;
        for (int i = 0; i < b.size(); i++)
        {
            ll x = 0, y = i, j = 0;
            while (j < a.size() && y < b.size())
            {
                if (a[j] == b[y])
                {
                    y++;
                    x++;
                }
                j++;
            }
            ans = max(ans, x);
        }
        cout << (a.size() + b.size()) - ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}