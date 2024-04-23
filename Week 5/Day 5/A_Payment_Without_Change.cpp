#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, S;
        cin >> a >> b >> n >> S;
        ll ans = S / n;
        if (a * n == S)
            cout << "YES" << '\n';
        else
        {
            if (a < ans)
            {
                ans = (a * n) + b;
                if (ans >= S)
                    cout << "YES" << '\n';
                else
                    cout << "NO" << '\n';
            }
            else if (a >= ans)
            {
                ans = (ans * n) + b;
                if (ans >= S)
                    cout << "YES" << '\n';
                else
                    cout << "NO" << '\n';
            }
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