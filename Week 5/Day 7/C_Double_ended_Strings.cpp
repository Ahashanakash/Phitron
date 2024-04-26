#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, ss;
        cin >> s >> ss;
        ll ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 1; j <= s.size(); j++)
            {
                string s1 = s.substr(i, j);
                if (ss.find(s1) != string::npos)
                    ans = max(ans, (ll)s1.size());
            }
        }
        cout << s.size() + ss.size() - 2 * ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}