#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<char, int> mp;
        string s;
        cin >> s;
        for (auto i : s)
        {
            mp[i]++;
        }
        int cnt = 0;
        for (auto i : mp)
        {
            if (i.second % 2 != 0)
            {
                cnt++;
            }
        }
        if (cnt - 1 < 0)
        {
            cnt = 0;
        }
        else
            cnt = cnt - 1;
        if (k >= cnt && k <= n)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}