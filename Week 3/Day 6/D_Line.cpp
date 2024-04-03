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
        string s;
        cin >> s;
        vector<ll> v;
        ll val = 0, mn = 0;

        for (int i = 0; i < n; i++)
        {
            ll l = i;
            ll r = n - i - 1;
            if (s[i] == 'L')
            {
                if (r > l)
                {
                    mn++;
                    val += r;
                    v.push_back(r - l);
                }
                else
                    val += l;
            }
            else
            {
                if (l > r)
                {
                    mn++;
                    v.push_back(l - r);
                    val += l;
                }
                else
                    val += r;
            }
        }

        vector<ll> ans(n + 1);

        for (int i = mn; i <= n; i++)
        {
            ans[i] = val;
        }

        sort(v.rbegin(), v.rend());

        for (int i = mn - 1; i >= 1; i--)
        {
            val -= v.back();
            v.pop_back();
            ans[i] = val;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}