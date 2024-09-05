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
    ll n, od = 0, ev = 0;
    cin >> n;
    vector<ll> arr(n), odd, eve;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0)
            odd.push_back(i + 1);
        else
            eve.push_back(i + 1);
    }
    if (odd.size() >= 3)
    {
        cout << "YES" << '\n';
        for (int i = 0; i < 3; i++)
        {
            cout << odd[i] << " ";
        }
        cout << '\n';
    }
    else if (eve.size() > 1 && odd.size() > 0)
    {
        cout << "YES" << '\n';
        cout << odd[0] << " " << eve[0] << " " << eve[1];
        cout << '\n';
    }
    else
        cout << "NO" << '\n';
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