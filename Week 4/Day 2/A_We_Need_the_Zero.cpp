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
        vector<ll> arr(n);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            ans=ans^arr[i];
        }
        
        if (n % 2 == 0)
        {
            if (ans == 0)
            {
                cout << ans << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}