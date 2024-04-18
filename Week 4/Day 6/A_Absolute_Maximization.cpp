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
        vector<ll> arr(n);
        int a = -1, b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            a &= arr[i];
            b |= arr[i];
        }
        cout << b - a << endl;
    }
    return 0;
}