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
        ll int n, k, cnt = 0;
        cin >> n >> k;
        vector<ll> arr(n);
        bool odd = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i <= n - k; i++)
        {
            for (int j = i; j < i + k; j++)
            {
                if (arr[j] % 2 != 0)
                {
                    odd = true;
                    break;
                }
            }
            if (odd)
                cnt++;
            odd = false;
        }
        cout << cnt << endl;
    }
    return 0;
}