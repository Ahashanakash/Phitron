#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, cost, m, last, l;
        string s;
        cin >> s;

        n = s.size();
        vector<ll> idx[26];
        vector<ll> arr;
        m = 0;

        for (int i = 0; i < n; i++)
        {
            idx[s[i] - 97].push_back(i + 1);
        }

        cost = abs(s[0] - s[n - 1]);
        if (s[n - 1] > s[0])
        {
            for (int i = s[0] - 97; i <= s[n - 1] - 97; i++)
            {
                l = idx[i].size();
                m = m + l;

                for (int j = 0; j < l; j++)
                {
                    arr.push_back(idx[i][j]);
                }
            }
        }
        else
        {
            for (int i = s[0] - 97; i >= s[n - 1] - 97; i--)
            {
                l = idx[i].size();
                m = m + l;

                for (int j = 0; j < l; j++)
                {
                    arr.push_back(idx[i][j]);
                }
            }
        }

        cout << cost << " " << m << "\n";

        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }

        cout << "\n";
    }
}