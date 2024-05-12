#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool prime(ll n)
{
    if (n == 1)
    {
        return false;
    }

    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool ans(ll n)
{
    ll x = sqrtl(n);
    return (x * x) == n;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (prime(sqrtl(arr[i])) && ans(arr[i]))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}