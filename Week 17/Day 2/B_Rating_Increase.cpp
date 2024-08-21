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
    string s;
    cin >> s;
    ll x = 0, y = 0, z = 10;
    for (int i = 0; i < s.size(); i++)
    {
        x *= 10;
        x += s[i] - '0';
        if (i < s.size() && s[i + 1] != '0')
        {
            z = i + 1;
            break;
        }
    }
    for (int i = z; i < s.size(); i++)
    {
        y = y * 10;
        y = y + s[i] - '0';
    }
    if (y <= x)
        cout << "-1" << '\n';
    else
        cout << x << " " << y << '\n';
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}