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
        int ar[n];
        map<ll, ll> mp, mp1;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        vector<ll> v;
        for (auto i : mp)
        {
            ll x = i.first;
            ll y = i.second;
            if (x <= n)
            {
                for (int i = 1; i < y; i++)
                    v.push_back(x);
                mp1[x] = 1;
            }
            else
            {
                for (int i = 1; i <= y; i++)
                    v.push_back(x);
            }
        }

        ll cnt = 1, ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = cnt; j <= n; j++)
            {
                if (mp1[j] == 1)
                    cnt++;
                else
                    break;
            }
            int x = (v[i] - 1) / 2;
            if (cnt <= x)
            {
                cnt++;
                ans++;
            }
            else
            {
                ans = -1;
                break;
            }
        }
        cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}