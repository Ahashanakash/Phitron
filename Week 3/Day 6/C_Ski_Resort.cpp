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
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll cnt = 0, sz = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= q)
            {
                sz++;
                if (i == n - 1 || arr[i + 1] > q)
                {
                    if (sz >= k)
                    {
                        ll x = sz - k + 1;
                        ll sarr = (x * (x + 1)) / 2;
                        cnt += sarr;
                    }
                    sz = 0;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
