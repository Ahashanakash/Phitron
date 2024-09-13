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
    string s1, s2, s3, s4;
    bool flag = true;
    cin >> s1 >> s2;
    ll x = s1.size(), y = s2.size();
    ll n = ((x * y) / __gcd(x, y)) / x;
    ll m = ((x * y) / __gcd(x, y)) / y;
    s3 = s1, s4 = s2;
    for (int i = 1; i < n; i++)
    {
        s1 += s3;
    }
    for (int i = 1; i < m; i++)
    {
        s2 += s4;
    }
    x = s1.size(), y = s2.size();
    for (int i = 0; i < x; i++)
    {
        if (s1[i] != s2[i])
        {
            cout << "-1" << '\n';
            flag = false;
            break;
        }
    }
    if (flag)
        cout << s1 << '\n';
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