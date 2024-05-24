#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0, cnt = 0;
    for (int i = 0, j = 0; i < n; i++)
    {
        sum += arr[i];
        while (sum >= k)
        {
            if (sum == k)
                cnt++;
            sum -= arr[j];
            j++;
        }
    }
    cout << cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}