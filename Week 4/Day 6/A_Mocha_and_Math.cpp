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
        int mn;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
                mn = arr[0];
            else
                mn = mn & arr[i];
        }
        cout << mn << endl;
    }
    return 0;
}