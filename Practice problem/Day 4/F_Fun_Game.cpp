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
    ll n;
    cin >> n;

    string s, ss;
    cin >> s >> ss;

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            break;
        if (ss[i] == '1')
        {
            flag = false;
            break;
        }
    }
    (flag) ? cout << "YES" << '\n' : cout << "NO" << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ss;
    cin >> ss;
    while (ss--)
    {
        solve();
    }
    return 0;
}