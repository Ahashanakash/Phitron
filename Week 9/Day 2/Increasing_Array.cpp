#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, cnt = 0;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            cnt = cnt + (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
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