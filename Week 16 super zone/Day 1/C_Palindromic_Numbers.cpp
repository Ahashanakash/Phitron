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
        ll n;
        cin >> n;
        string s, ss = "";
        cin >> s;
        if (s[0] == '9')
        {
            reverse(s.begin(), s.end());
            ll x = 0;
            for (int i = 0; i < n; i++)
            {
                ll a = s[i] - '0';
                a += x;
                if (a > 1)
                {
                    ss += to_string(11 - a);
                    x = 1;
                }
                else
                {
                    x = 0;
                    ss += to_string(1 - a);
                }
            }
            reverse(ss.begin(), ss.end());
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                ll a = s[i] - '0';
                ss += to_string(9 - a);
            }
        }

        cout << ss << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}