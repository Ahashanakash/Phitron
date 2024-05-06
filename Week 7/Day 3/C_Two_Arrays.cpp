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
        vector<ll> brr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != brr[i])
            {
                arr[i]++;
            }
        }
        if (arr == brr)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}