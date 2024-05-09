#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll func(vector<ll> arr, int n)
{
    ll ans = 0, x = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            x++;
        else
            ans += x;
    }
    return ans;
}

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

        ll ans = func(arr, n);
        ll idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                arr[i] = 1;
                idx = i;
                break;
            }
        }
        ans = max(ans, func(arr, n));
        if (idx != -1)
        {
            arr[idx] = 0;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 1)
            {
                arr[i] = 0;
                break;
            }
        }
        ans = max(ans, func(arr, n));
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