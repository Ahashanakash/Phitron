#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, cnt, cnt2;
        cin >> n >> k;
        vector<ll> arr(n), brr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        brr = arr;
        sort(brr.begin(), brr.end());
        cnt = n;
        for (int i = 0; i < n; i++)
        {
            if (brr[i] != i)
            {
                cnt = i;
                break;
            }
        }
        ll x;
        for (int i = 0; i < n; i++)
        {
            x = arr[i];
            arr[i] = cnt;
            cnt = x;
        }
        arr.push_back(cnt);

        cnt2 = (k - 1) % (n + 1);
        for (int i = (n + 1 - cnt2); i < (n + 1); i++)
        {
            cout << arr[i] << " ";
        }
        for (int i = 0; i < (n - cnt2); i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}