#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    unordered_map<int, int> mp;
    long long ans = 0, l = 0, r = 0;

    for (int i = 0; i < n; ++i)
    {
        if (++mp[v[i]] == 1)
        {
            r++;
            while (r > k)
            {
                if (--mp[v[l]] == 0) r--;
                l++;
            }
        }
        ans += i - l + 1;
    }
    cout << ans << endl;

    return 0;
}
