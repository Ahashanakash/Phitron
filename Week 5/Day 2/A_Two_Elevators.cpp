#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, x, y;
        cin >> a >> b >> c;
        // if (a == 1)
        // {
        //     cout << a << '\n';
        // }
        // else
        // {
            if (a > 1)
                x = a - 1;
            else
                x = 1;
            if (b < c)
            {
                y = c + (c - b) - 1;
            }
            else
            {
                y = b - 1;
            }
            if (x == y)
                cout << "3" << '\n';
            else if (x < y)
                cout << "1" << '\n';
            else
                cout << "2" << '\n';
        //}
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}