#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        ll k;
        cin >> k;
        ll left = 0, right = n - 1, mid, ans = n;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (arr[mid] >= k)
            {
                right = mid - 1;
                ans = mid;
            }
            else
            {
                left = mid + 1;
            }
        }

        cout << ans + 1 << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}