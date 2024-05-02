#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n, x, y;
    cin >> n >> x >> y;

    auto ok=[&] (ll t, ll n, ll x, ll y)
    {
        if (t < min(x, y))
            return false;

        ll cnt = 1;
        t -= min(x, y);
        cnt += t / x + t / y;

        return cnt >= n;
    };

    ll l = 0, r = max(x, y) * n, mid;

    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid, n, x, y))
            r = mid;
        else
            l = mid;
    }
    cout << r;
}