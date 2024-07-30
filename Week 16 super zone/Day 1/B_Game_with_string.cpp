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
    ll cnt = 0;
    while (1)
    {
        bool flag = false;
        for (int i = 0; s[i]!=NULL; i++)
        {
            if (s[i] == s[i + 1])
            {
                s.erase(i, 2);
                flag = true;
                cnt++;
                break;
            }
        }
        if (!flag)
            break;
    }
    if (cnt % 2 == 0)
        cout << "No" << '\n';
    else
        cout << "Yes" << '\n';
}
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        solve();
        return 0;
    }