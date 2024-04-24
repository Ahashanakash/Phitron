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
        vector<ll> arr(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> v(31);
        for (int i = 0; i < 31; i++)
        {
            v[i] = 0;
        }
        for (ll i = 0; i < 31; i++)
        {
            ll num = (1ll << i);
            for (ll j = 0; j < n; j++)
            {
                if ((arr[j] & num) != 0)
                    v[i]++;
            }
        }
        for (ll k = 1; k <= n; k++)
        {
            bool check = 0;
            for (ll i = 0; i < 31; i++)
            {
                if ((v[i] % k) != 0)
                {
                    check = 1;
                    break;
                }
            }
            if (check == 0)
                cout << k << " ";
        }
        cout << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}