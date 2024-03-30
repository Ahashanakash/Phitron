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
        ll n, q;
        cin >> n >> q;
        vector<ll> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> pref(n + 1);

        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + arr[i];
        }
        while (q--)
        {
            ll l, r, v;
            cin >> l >> r >> v;
            ll sum = pref[n];
            sum = sum - (pref[r] - pref[l - 1]);
            sum = sum + ((r - l + 1) * v);
            if (sum % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}