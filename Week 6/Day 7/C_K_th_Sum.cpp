#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n), brr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    auto ok = [&](ll x)
    {
        ll cnt = 0;
        int i = 0, j = 0;
        while (i < n && j < n)
        {
            if (arr[i] + brr[j] >= x)
            {
                j++;
            }
            else
            {
                i++;
                cnt += (n - j);
            }
        }
        return cnt < k;
    };
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    sort(arr.begin(), arr.end());
    sort(brr.rbegin(), brr.rend());
    ll l = 1, r = 2e9 + 10;
    for (int i = 0; i < 80; i++)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << endl;
    return 0;
}