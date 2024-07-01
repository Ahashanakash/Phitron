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
        int n;
        cin >> n;
        string s;
        cin >> s;
        s = "1" + s;
        vector<ll> vis(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (s[i] == '1')
                vis[i] = 2;
        }

        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (vis[j] == 0)
                {
                    vis[j] = 1;
                    ans += i;
                }
                else if (vis[j] == 2)
                {
                    break;
                }
            }
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