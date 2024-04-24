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
        ll pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 0)
                pos += arr[i];
            else
            {
                if (pos + arr[i] >= 0)
                    pos += arr[i];
                else
                {
                    arr[i] += pos;
                    pos = 0;
                    neg += arr[i];
                }
            }
        }
        cout << neg * (-1) << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}