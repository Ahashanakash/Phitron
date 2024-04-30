#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        ll ans;
        auto ok = [&](ll x) -> bool
        {
            int cnt = 1;
            for (int l = 0, r = l + 1; r < n;)
            {
                if (arr[l] + x + x >= arr[r])
                {
                    r++;
                }
                else
                {
                    cnt++;
                    l = r;
                    r = l;
                }
            }
            return cnt < 4;
        };

        ll left = 0, right = 1e18;

        while (left <= right)
        {
            ll mid = left + (right - left) / 2LL;

            if (ok(mid))
            {
                ans = mid;
                right = mid - 1LL;
            }
            else
            {
                left = mid + 1LL;
            }
        }

        cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}