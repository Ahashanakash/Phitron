#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}

ll lcm(ll a, ll b)
{
    return ((a / gcd(a, b)) * b);
}

void solve()
{
    ll n, a, b, p, q, ans = 0, overlap;
    cin >> n >> a >> b >> p >> q;

    ans += ((n / a) * p);
    ans += ((n / b) * q);
    overlap = (n / lcm(a, b));
    ans -= (overlap * (p + q));
    ans += (overlap * max(p, q));

    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
