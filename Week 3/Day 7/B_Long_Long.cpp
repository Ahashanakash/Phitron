#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0, cnt = 0, x = 0;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i <= n; i++)
        {
            if (i < n)
                sum += abs(arr[i]);
            if (x)
            {
                if (arr[i] > 0 || i == n)
                {
                    x = 0;
                    cnt++;
                }
            }
            else
            {
                if (arr[i] < 0)
                    x = 1;
            }
        }
        cout << sum << " " << cnt << endl;
    }
    return 0;
}