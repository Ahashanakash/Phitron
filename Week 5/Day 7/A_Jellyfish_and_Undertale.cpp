#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> arr(n);
        ll sum = 0;
        if (b >= a)
        {
            sum = a;
            b = a;
        }
        else
            sum = b;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] + 1 <= a)
                sum += arr[i];
            else
                sum += a - 1;
        }
        cout << sum << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}