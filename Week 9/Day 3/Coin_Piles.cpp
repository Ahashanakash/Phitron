#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        if (x > y)
            swap(x, y);
        if (y / 2 > x)
            cout << "NO" << '\n';
        else
        {
            x = x % 3;
            y = y % 3;
            if (x > y)
                swap(x, y);
            if ((x == 0 && y == 0) || (x == 1 && y == 2))
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
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