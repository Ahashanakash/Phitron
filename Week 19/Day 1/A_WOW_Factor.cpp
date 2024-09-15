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
    string s;
    cin >> s;
    ll x = 0, y = 0, z = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'o')
            y += x;
        else if (i > 0 && s[i - 1] == 'v')
        {
            x++;
            z += y;
        }
    }
    cout << z << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}