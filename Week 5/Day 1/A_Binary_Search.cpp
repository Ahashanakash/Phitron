#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        int k;
        cin >> k;
        int left = 0, right = n - 1, mid, ans = -1;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (arr[mid] == k)
            {
                ans = 1;
                break;
            }
            else if (k < arr[mid])
            {
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        if (ans == -1)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}