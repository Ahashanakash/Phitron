#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> arr(m + 1);
    for (int i = 0; i <= m; i++)
    {
        cin >> arr[i];
    }

    vector<vector<int>> almask;
    for (int mask = 0; mask <= m; mask++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            if ((arr[mask] >> j) & 1)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        almask.push_back(v);
    }

    int ans = 0;
    vector<int> fedor_mask = almask[m];
    for (int i = 0; i < almask.size() - 1; i++)
    {
        vector<int> v = almask[i];
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (fedor_mask[j] != v[j])
            {
                cnt++;
            }
        }
        if (cnt <= k)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
