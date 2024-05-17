#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll l, r;
    cin >> l >> r;
    cout << "YES" << '\n';
    for (ll i = l; i < r + 1; i += 2)
        cout << i << ' ' << i + 1 << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}