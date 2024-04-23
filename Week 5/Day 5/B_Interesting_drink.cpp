#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x < arr[0])
            cout << "0" << '\n';
        else
        {
            auto it = upper_bound(arr.begin(), arr.end(), x);
            cout << (it - arr.begin()) << '\n';
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}