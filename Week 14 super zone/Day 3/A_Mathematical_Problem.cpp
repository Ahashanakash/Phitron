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
    string s;
    cin >> s;
    ll ans = 1e9 + 9;
    for (int i = 0; i < n - 1; i++)
    {
        ll num = (s[i] - '0') * 10 + (s[i + 1] - '0'), sum = 0;
        for (int j = 0; j < i; j++)
        {
            if (s[j] == '0')
            {
                cout << '0' << '\n';
                return;
            }
            if (s[j] >= '2')
                sum += s[j] - '0';
        }
        for (int j = i + 2; j < n; j++)
        {
            if (s[j] == '0')
            {
                cout << "0" << '\n';
                return;
            }
            if (s[j] >= '2')
                sum += s[j] - '0';
        }
        if (num == 1 && sum > 0)
            num = sum;
        else
            num += sum;
        ans = min(ans, num);
    }
    cout << ans << '\n';
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
