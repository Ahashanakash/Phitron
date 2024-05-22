#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, q;
    cin >> n >> q;
    multiset<ll> ms;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ms.insert(x);
    }
    while (q--)
    {
        ll x;
        cin >> x;
        auto it = ms.upper_bound(x);
        if (it == ms.begin())
        {
            cout << "-1" << '\n';
        }
        else
        {
            cout << *(--it) << '\n';
            ms.erase(it);
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