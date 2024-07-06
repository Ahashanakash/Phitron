#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        if (n == 2)
        {
            for (auto i : arr)
            {
                cout << i << " ";
            }
            cout << '\n';
            continue;
        }
        ll b, mn = LLONG_MAX;
        for (int i = 1; i < n; i++)
        {
            if ((arr[i] - arr[i - 1]) < mn)
            {
                mn = arr[i] - arr[i - 1];
                b = i;
            }
        }
        for (int i = b; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        for (int i = 0; i <= b - 1; i++)
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