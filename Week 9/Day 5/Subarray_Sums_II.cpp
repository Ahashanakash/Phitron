#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, k, sum = 0, cnt = 0;
    cin >> n >> k;
    map<ll, ll> mp;
    mp[sum] = 1;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        cnt += mp[sum - k];
        mp[sum]++;
    }
    cout << cnt << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}