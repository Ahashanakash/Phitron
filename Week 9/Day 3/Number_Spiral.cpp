#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll row, col;
        cin >> row >> col;
        if (col > row)
        {
            ll ans;
            if (col % 2 != 0)
            {
                ans = (col * col) - row + 1;
                cout << ans << '\n';
            }
            else
            {
                ans = (col-1) * (col-1) + row;
                cout << ans << '\n';
            }
        }
        else
        {
            ll ans;
            if (row % 2 != 0)
            {
                ans = (row-1) * (row-1) + col;
                cout << ans << '\n';
            }
            else
            {
                ans = (row * row) - col + 1;
                cout << ans << '\n';
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