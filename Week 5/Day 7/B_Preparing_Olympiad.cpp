#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = 1; i < (1 << n); ++i)
    { 
        int total = 0;
        int mn = INT_MAX;
        int mx = INT_MIN;
        int cnt1 = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                total += arr[j];
                mn = min(mn, arr[j]);
                mx = max(mx, arr[j]);
                cnt1++;
            }
        }
        if (total >= l && total <= r && (mx - mn) >= x && cnt1 >= 2)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
