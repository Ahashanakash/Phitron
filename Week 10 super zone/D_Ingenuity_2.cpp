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
        ll n, x = 0, y = 0;

        string s;
        cin >> n >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N')
                y++;
            else if (s[i] == 'S')
                y--;
            else if (s[i] == 'W')
                x--;
            else
                x++;
        }
        if (abs(x) % 2 == 1 || abs(y) % 2 == 1)
            cout << "NO\n";
        else if (n == 2 && x == 0 && y == 0)
            cout << "NO\n";
        else
        {
            ll j = 0, i = 0, a = 1, b = 1;
            string m = "RH";
            string ss = "";
            for (auto ch : s)
            {
                if (ch == 'N')
                    ss += m[j], j = 1 - j;
                else if (ch == 'S')
                    ss += m[i], i = 1 - i;
                else if (ch == 'W')
                    ss += m[a], a = 1 - a;
                else
                    ss += m[b], b = 1 - b;
            }
            cout << ss << '\n';
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