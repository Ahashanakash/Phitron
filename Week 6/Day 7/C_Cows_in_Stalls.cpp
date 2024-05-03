#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    auto ok = [&](ll m)
    {
        bool flag = 1;
        ll cnt = 1;
        for (int i = 0; i < n; i++)
        {
            int j = i + 1;
            while (j < n && arr[i] + m > arr[j])
                j++;
            if (j == n)
                break;
            cnt++;
            i = j - 1;
        }
        return cnt >= k;
    };
    ll l = 0, r = arr[n - 1] - arr[0] + 10;
    while (l + 1 < r)
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