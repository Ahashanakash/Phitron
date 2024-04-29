#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    auto ok = [&](ll m)
    {
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            total += (m / arr[i]);
            if (total >= t)
                return true;
        }
        return false;
    };

    ll left = 1, right = 1e18, mid, ans;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (ok(mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}