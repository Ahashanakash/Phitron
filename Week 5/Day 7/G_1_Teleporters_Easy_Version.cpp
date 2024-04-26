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
        ll x;
        cin >> x;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] += i + 1;
        }

        sort(arr.begin(), arr.end());
        int ans = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + arr[i] > x)
                break;
            sum += arr[i];
            ans++;
        }
        cout << ans << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}