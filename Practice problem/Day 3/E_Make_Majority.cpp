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
        string s;
        cin >> s;
        ll zero = 0, one = 0;
        if (s[0] == '0')
            zero++;
        else
            one++;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == '1' && s[i] == '0')
                zero++;
            if (s[i] == '1')
                one++;
        }
        if (zero >= one)
            cout << "No" << '\n';
        else
            cout << "Yes" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}