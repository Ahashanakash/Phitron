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
        ll cnt = 0, sum = 0, mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += abs(arr[i]);
            if (arr[i] < 0)
            {
                cnt++;
            }
            mn = min(mn, abs(arr[i]));
        }
        if (cnt & 1)
            cout << sum - (2 * mn) << '\n';
        else
        {
            cout << sum << '\n';
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}