#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n + 3);
        ll ans = 0;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
            
        for (int i = 1; i <= n; i++)
        {
            ll idx = 0;
            for (int j = 2; j <= i + 1; j++)
            {
                if (arr[i] % j != 0)
                {
                    idx = 1;
                    break;
                }
            }
            if (idx == 0)
            {
                ans = 1;
                break;
            }
        }
        if (ans == 1)
            cout << "NO" << '\n';
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