#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, q, d, x;
        cin >> n >> k >> q;
        vector<ll> arr(k + 1), brr(k + 1);
        arr[0] = 0;
        brr[0] = 0;
        for (int i = 1; i <= k; i++)
            cin >> arr[i];
        for (int i = 1; i <= k; i++)
            cin >> brr[i];
        while (q--)
        {
            cin >> d;
            if (d == n)
            {
                cout << brr[k] << " ";
                continue;
            }
            x = upper_bound(arr.begin(), arr.end(), d) - arr.begin();
            x--;
            ll ans = ((brr[x + 1] - brr[x]) * (d - arr[x])) / (arr[x + 1] - arr[x]);
            ans += brr[x];
            cout << ans << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}