#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, sum;
    cin >> n >> sum;
    vector<pair<ll, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    bool flag = false;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        ll sum1 = sum - arr[i].first;
        for (int j = i + 1, k = n - 1; j < k; j++)
        {
            while (arr[j].first + arr[k].first > sum1)
                k--;
                
                if (j < k && arr[j].first + arr[k].first == sum1)
                {
                    cout << arr[i].second << " " << arr[j].second << " " << arr[k].second;
                    flag = true;
                    break;
                }
            
            if (flag)
                break;
        }
        if (flag)
            break;
    }
    if (!flag)
        cout << "IMPOSSIBLE";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}