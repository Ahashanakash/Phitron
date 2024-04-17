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
        int n, b, ans = -1;
        cin >> n >> b;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] & b) == b)
                ans = ans & arr[i];
        }
        if (ans == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}