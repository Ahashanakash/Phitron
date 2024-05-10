#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        vector<ll> C, sm;
        vector<bool> v(s.size() + 2, true);

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                if (!sm.empty())
                {
                    v[sm.back()] = false;
                    sm.pop_back();
                }
                v[i] = false;
            }
            else if (s[i] == 'B')
            {
                if (!C.empty())
                {
                    v[C.back()] = false;
                    C.pop_back();
                }
                v[i] = false;
            }
            else if (s[i] >= 'A' and s[i] <= 'Z')
            {
                C.push_back(i);
            }
            else
            {
                sm.push_back(i);
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (v[i])
            {
                cout << s[i];
            }
        }
        cout << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}