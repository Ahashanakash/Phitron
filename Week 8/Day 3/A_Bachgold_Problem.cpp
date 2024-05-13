#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    vector<ll> v;
    ll sum = 0;
    ll i;
    if (n & 1)
        i = 3;
    else
        i = 2;
    while (sum != n)
    {
        if (sum + i <= n)
            sum += i;
        v.push_back(i);
        i = 2;
    }
    cout << v.size() << '\n';
    for (auto &&i : v)
    {
        cout << i << " ";
    }
    v.clear();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}