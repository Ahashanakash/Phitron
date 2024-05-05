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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> v(n);
        for (int i = 0; i < n - 1; i++)
        {
            v[i] = abs(arr[i] - arr[i + 1]);
        }
        int mn = min(v[0], v[n - 2]);
        for (int i = 1; i < n - 1; i++)
        {
            int x = max(v[i - 1], v[i]);
            mn = min(mn, x);
        }
        cout << mn << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}