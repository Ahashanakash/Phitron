#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<ll, ll> cnt;
        for (int i = 0; i < n; i++)
        {

            for (int j = 2; j * j <= arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    while (arr[i] % j == 0)
                    {
                        cnt[j]++;
                        arr[i] /= j;
                    }
                }
            }
            if (arr[i] > 1)
            {
                cnt[arr[i]]++;
            }
        }

        bool ok = true;

        for (auto [x, y] : cnt)
        {
            if (y % n != 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}