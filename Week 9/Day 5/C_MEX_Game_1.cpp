#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, cnt = 0;
        cin >> n;
        map<ll, ll> mp;
        set<ll> s;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        for (auto it : mp)
        {
            if (it.second > 1)
            {
                s.insert(it.first);
                continue;
            }
            if (cnt == 1)
            {
                cnt--;
                continue;
            }
            else
            {
                s.insert(it.first);
                cnt = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s.find(i) == s.end())
            {
                cnt = i;
                break;
            }
        }
        cout << cnt << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}