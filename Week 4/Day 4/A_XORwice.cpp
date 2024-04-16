#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        ll ans;
        if (n == m)
        {
            cout << "0" << endl;
        }
        else
        {
            ll x;
            x = max(n, m);
            ans = (n ^ x) + (m ^ x);
            cout << ans << endl;
        }
    }
    return 0;
}