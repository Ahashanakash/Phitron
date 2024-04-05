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
        int n;
        cin >> n;
        vector<int> arr(n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans = ans ^ arr[i];
        }

        int mn = ans;

        for (int i = 0; i < n; i++)
        {
            int total = ans ^ arr[i];
            mn = min(total, mn);
        }

        cout << mn << endl;
    }
    return 0;
}