#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] == 0)
        {
            cout << "0" << '\n';
            continue;
        }
        vector<ll> v(16);
        ll mn = LLONG_MAX;
        for (int j = 0; j <= 15; j++)
        {
            ll a = arr[i] + j, y = 0;
            while (a % 2 == 0)
            {
                y++;
                a = a / 2;
            }
            v[i] = j + 15 - y;
            mn = min(mn, v[i]);
        }
        cout << mn << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define int long long
// #define endl "\n"
#define double long double
// #define INT_MIN -1000000000000000
#define INT_MAX 1e18

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;

    while (t--)
    {
        int mod = 32768;
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] == 0)
            {
                cout << 0 << " ";
                continue;
            }
            int dp[16], ans = INT_MAX;

            for (int j = 0; j <= 15; j++)
            {
                int x = a[i] + j;
                int c = 0;
                while (x % 2 == 0)
                    c++, x = x / 2;

                dp[i] = j + 15 - c;
                ans = min(ans, dp[i]);
            }
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}