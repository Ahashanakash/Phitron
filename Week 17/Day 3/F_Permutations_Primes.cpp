#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;

// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
        cout << "1" << '\n';
    else if (n == 2)
        cout << "1" << " " << "2" << '\n';
    else
    {
        ll cnt = 4;
        vector<ll> arr(n);
        arr[0] = 2, arr[n - 1] = 3, arr[n / 2] = 1;
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] == 1)
                continue;
            else
                arr[i] = cnt++;
        }
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}