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
        map<char, int> check;
        for (int i = 0; i < s.size(); i++)
        {
            check[s[i]]++;
        }

        if (check.size() == 1)
            cout << "NO" << '\n';
        else if (check.size() == 2)
        {
            int x = 0;
            for (auto it = check.begin(); it != check.end(); it++)
            {
                if (it->second == 1)
                {
                    cout << "NO" << '\n';
                    x++;
                    break;
                }
            }
            if (x == 0)
                cout << "YES" << '\n';
        }
        else
            cout << "YES" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}