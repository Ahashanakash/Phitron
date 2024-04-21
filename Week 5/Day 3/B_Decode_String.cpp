#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, s1;
        cin >> s;
        ll x;
        for (int i = 0; i < n; i++)
        {
            if ((i + 2 < n && s[i + 2] == '0') && (s[i + 3] != '0'))
            {
                x = (s[i] - '0') * 10 + (s[i + 1] - '0');
                s1.push_back(96 + x);
                i += 2;
            }
            else
            {
                x = s[i] - '0';
                s1.push_back(96 + x);
            }
        }
        cout << s1 << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}