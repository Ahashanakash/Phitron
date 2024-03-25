#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int mx = 0;
        for (auto i : mp)
        {
            mx = max(mx, i.second);
        }

        int cnt = 0;

        while (mx < n)
        {
            int rem = n - mx;
            cnt++;
            cnt += min(mx, rem);
            mx += min(mx, rem);
        }
        cout << cnt << endl;
    }
    return 0;
}