#include <bits/stdc++.h>
using namespace std;
#define ll long long

    int k, n;
    vector<int> arr;
    bool ok(ll sum)
    {
        int x = 1;
        ll y = 0;
        bool flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > sum)
            {
                flag = 0;
                break;
            }
            if (y + arr[i] <= sum)
            {
                y += arr[i];
            }
            else
            {
                y = arr[i];
                x++;
            }
        }
        if (flag)
        {
            return x <= k;
        }
        else
        {
            return 0;
        }
    }
int main()
{
    cin >> n >> k;
    arr.resize(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    ll left = 0, right = sum + 100;
    while (left + 1 < right)
    {
        ll mid = (left + right) / 2;
        if (ok(mid))
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    cout << right << "\n";
    return 0;
}