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
        ll n, m;
        cin >> n >> m;

        vector<ll> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            a[i]--;
        }
        sort(a.begin(), a.end());

        vector<ll> b;
        for (int i = 0; i < m - 1; i++)
        {
            b.push_back(a[i + 1] - a[i] - 1);
        }
        b.push_back(a[0] + n - a[m - 1] - 1);

        sort(b.rbegin(), b.rend());

        ll ans = 0, cur = 0;
        for (auto x : b)
        {
            if (x - 2 * cur <= 0)
            {
                break;
            }
            if (x - 2 * cur <= 2)
            {
                cur++;
                ans++;
            }
            else
            {
                ans += x - 2 * cur - 1;
                cur += 2;
            }
        }
        cout << n - ans << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}