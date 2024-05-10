#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<ll> v, v1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
                v1.push_back(arr[i] * (-1));
            else if (arr[i] > 0)
                v.push_back(arr[i]);
        }

        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end());

        ll ans = 0, x = 0, y = 0;
        if (!v.empty())
        {
            if (v.size() < k)
            {
                x = v[v.size() - 1];
                ans += x;
            }
            else
            {
                x = v[v.size() - 1];
                for (int i = 0; i < v.size(); i++)
                {
                    if (i == v.size() - 1)
                    {
                        ans += v[i];
                    }
                    else if ((v.size() - i - 1) % k == 0)
                    {
                        ans += v[i] * 2;
                    }
                }
            }
        }
        if (v1.empty() == false)
        {
            if (v1.size() < k)
            {
                y = v1[v1.size() - 1];
                ans += y;
            }
            else
            {
                y = v1[v1.size() - 1];
                for (int i = 0; i < v1.size(); i++)
                {
                    if (i == v1.size() - 1)
                    {
                        ans += v1[i];
                    }
                    else if ((v1.size() - i - 1) % k == 0)
                    {
                        ans += v1[i] * 2;
                    }
                }
            }
        }
        ans += min(x, y);
        cout << ans << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}