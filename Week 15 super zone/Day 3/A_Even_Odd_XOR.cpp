#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;

// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, j;
        cin >> n;
        vector<ll> arr[] = {{2, 1, 3, 0}, {2, 0, 4, 5, 3}, {4, 1, 2, 12, 3, 8}, {2, 1, 3}};
        j = n % 4;
        for (int i = 0; i < arr[j].size(); i++)
            cout << arr[j][i] << " ";

        n -= arr[j].size();
        for (int i = 0; i < n; i++)
            cout << 100 + i << " ";
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