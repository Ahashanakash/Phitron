#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long ans = 0;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans += arr[i];
    }
    if (ans % 2 == 0)
    {
        cout << ans;
    }
    else
    {
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if ((ans - arr[i]) % 2 == 0)
            {
                cout << ans - arr[i];
                return 0;
            }
        }
    }

    return 0;
}