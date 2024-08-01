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
        ll n, m, k, y = 0, cnt = 0;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        ll x = m - 1;
        for (int i = 0; i < s.size(); i++)
        {
            char a = s[i];
            if (a == 'L')
            {
                x = m;
                x--;
                continue;
            }
            if (a == 'W')
            {
                if (x <= 0)
                    y++;
            }
            else
            {
                if (x <= 0)
                    cnt++;
            }
            x--;
        }

        if (y > k)
            cnt++;
        if (cnt != 0)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}