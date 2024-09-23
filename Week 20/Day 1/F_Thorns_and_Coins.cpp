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
    ll n, i, j, cnt = 0, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '@')
            ans++;
        else if (s[i] == '*')
            cnt++;
        if (cnt > 0 && s[i] != '*')
            cnt = 0;
        if (cnt > 1)
            break;
    }
    cout << ans << endl;
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