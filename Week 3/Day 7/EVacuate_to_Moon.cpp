#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, h, ans = 0;
        cin >> n >> m >> h;
        vector<ll> v(n), v1(m);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            
        }
        for (int i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            v1.push_back(x * h);
        }
        sort(v.rbegin(), v.rend());
        sort(v1.rbegin(), v1.rend());
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= v1[i])
                ans += v1[i];
            else
                ans += v[i];
        }
        cout << ans << endl;
    }
    return 0;
}