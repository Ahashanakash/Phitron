#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string s;
    cin >> s;
    unordered_map<char, ll> mp;
    for (auto i : s)
    {
        mp[i]++;
    }
    ll cnt = 0;
    char ch;
    for (auto i : mp)
    {
        if (i.second % 2 != 0)
        {
            cnt++;
            ch = i.first;
        }
    }
    if (cnt > 1)
        cout << "NO SOLUTION";
    else
    {
        string ss = "";
        for (auto it : mp)
        {
            for (int i = 1; i <= it.second / 2; i++)
            {
                cout<<it.first;
                ss += it.first;
            }
        }
        //cout << ss;
        if (s.size() % 2)
            cout << ch;
        reverse(ss.begin(), ss.end());
        cout << ss;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}