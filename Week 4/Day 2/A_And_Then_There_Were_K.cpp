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
        ll n;
        cin >> n;
        ll andd = n;
        ll ans ;
        for (int i = n - 1; i >= 0; i--)
        {
            andd = andd & i;
            if (andd == 0)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}