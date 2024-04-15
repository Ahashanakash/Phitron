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
        int n;
        cin >> n;
        ll ans = 1;
        while (ans < n)
        {
            if (ans * 2 > n)
                break;

            ans *= 2;
        }
        cout << ans - 1 << "\n";
    }
    return 0;
}
