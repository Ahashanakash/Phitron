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
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<ll> freq(n + 2, 0);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > n)
                continue;
            freq[arr[i]]++;
        }

        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ll x = 0;
            for (ll j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    x += freq[j];
                    if (j * j != i)
                    {
                        x += freq[i / j];
                    }
                }
            }
            ans = max(ans, x);
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