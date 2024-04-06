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
        int n;
        cin >> n;
        vector<ll> arr(n), b(33, 0);
        ll ans = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            ll z = arr[i];
            ll c = 0;
            while (z > 0)
            {
                z = z / 2;
                c++;
            }
            b[c]++;
        }
        for (int i = 0; i <= 32; i++)
        {
            if (b[i] >= 2)
                ans = ans + (b[i] * (b[i] - 1) / 2);
        }
        cout << ans << endl;
    }
    return 0;
}