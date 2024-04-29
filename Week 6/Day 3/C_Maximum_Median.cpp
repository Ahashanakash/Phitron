#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, op;
    cin >> n >> op;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    auto ok = [&](ll m)
    {
        ll cnt = 0;
        for (int i = n / 2; i < n; i++)
        {
            if (arr[i] < m)
            {
                cnt += (m - arr[i]);
            }
        }
        return cnt <= op;
    };

    ll left = 1, right = 2e9, mid, ans = 0;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (ok(mid))
        {
            ans = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
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