#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    map<ll, ll> mp;
    for (int i = 1; i <= 10001; i++)
    {
        mp[i * 1LL * i * i] = 1;
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        bool found = false;
        for (int i = 1; i <= 10001; i++)
        {
            if (mp.find(x - i * 1LL * i * i) != mp.end())
            {
                cout << "YES"<<'\n';
                found = true;
                break;
            }
        }
        if (!found)
            cout << "NO"<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
