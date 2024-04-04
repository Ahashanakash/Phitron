#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        vector<ll> arr_1(n), arr_2(n), arr_3(n);
        vector<pair<ll, ll>> v1, v2, v3;
        for (int i = 0; i < n; i++)
        {
            cin >> arr_1[i];
            v1.push_back(make_pair(arr_1[i], i));
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr_2[i];
            v2.push_back(make_pair(arr_2[i], i));
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr_3[i];
            v3.push_back(make_pair(arr_3[i], i));
        }
        sort(v1.rbegin(), v1.rend());
        sort(v2.rbegin(), v2.rend());
        sort(v3.rbegin(), v3.rend());

        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                for (ll k = 0; k < 3; k++)
                {
                    if (v1[i].second != v2[j].second && v1[i].second != v3[k].second && v2[j].second != v3[k].second)
                    {
                        ans = max(v1[i].first + v2[j].first + v3[k].first, ans);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}