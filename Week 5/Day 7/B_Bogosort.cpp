#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.rbegin(), arr.rend());

        // vector<ll> v(n);
        // int j = 0;
        // for (int i = 0; i < n; i += 2)
        // {
        //     v[i] = arr[j++];
        // }
        // for (int i = 1; i < n; i += 2)
        // {
        //     v[i] = arr[j++];
        // }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
