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
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 2; i++)
    {
        auto it = s.substr(i, 3);
        if (it == "map" || it == "pie")
        {
            cnt++;
            i += 2;
        }
    }
    cout << cnt << '\n';
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