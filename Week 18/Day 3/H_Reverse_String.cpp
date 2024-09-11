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
    string s, ss;
    cin >> s >> ss;
    ll p, cnt = 0, cnt1 = 0, q = 0, ok = 0;
    string s1 = "", s2 = "";
    for (int k = 0; k < s.size(); k++)
    {
        if (s[k] == ss[0])
        {
            cnt = 0;
            cnt1 = 0;
            for (int i = k, p = 0; i < s.size(); i++)
            {
                cnt1 = 0;
                if (s[i] != ss[p])
                    break;
                if (s[i] == ss[p])
                    cnt++;
                if (s[i - 1] == ss[p + 1])
                {
                    for (int j = i - 1, q = p + 1; j >= 0 && q < ss.size(); j--)
                    {
                        if (s[j] == ss[q])
                        {
                            cnt1++;
                            q++;
                        }
                        else
                            break;
                    }
                }
                if (cnt + cnt1 == ss.size())
                    break;
                    p++;
            }
            if (cnt + cnt1 == ss.size())
                break;
        }
    }
    if (cnt + cnt1 == ss.size())
        cout << "YES"<<'\n';
    else
        cout << "NO"<<'\n';
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