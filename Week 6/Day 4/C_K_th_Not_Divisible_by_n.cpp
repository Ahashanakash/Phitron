#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (k < n)
        {
            cout << k << '\n';
            continue;
        }
        ll ans = k + k / (n - 1);
        if (ans % n == 0)
            cout << --ans << '\n';
        else
            cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}