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
        vector<ll> arr(n);
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        sort(arr.begin(), arr.end());
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            ll val = arr[i];
            if (mp[arr[i]] != 0)
            {
                cnt++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}