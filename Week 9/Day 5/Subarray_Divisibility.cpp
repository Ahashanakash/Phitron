#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0, cnt = 0;
    map<ll, ll> mp;
    mp[0]++;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i] % n;
        sum = (sum + n) % n;
        cnt += mp[sum];
        mp[sum]++;
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