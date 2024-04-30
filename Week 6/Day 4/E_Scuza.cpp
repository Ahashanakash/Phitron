#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> arr(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> pre(n + 2, 0);
        for (int i = 1; i <= n; i++)
        {
            pre[i] = (arr[i] + pre[i - 1]);
        }
        vector<ll> v(q);
        vector<pair<ll, int>> k(q);
        for (int i = 0; i < q; i++)
        {
            cin >> k[i].first;
            k[i].second = i;
        }
        sort(k.begin(), k.end());
        ll idx = 0;
        for (int i = 0; i < q; i++)
        {
            while (true)
            {
                if (idx == n or arr[idx + 1] > k[i].first)
                    break;
                idx++;
            }
            v[k[i].second] = pre[idx];
        }

        for (int i = 0; i < q; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}