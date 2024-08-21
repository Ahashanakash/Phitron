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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> arr(n);
        ll sum = 0;
        if (b >= a)
        {
            sum = a;
            b = a;
        }
        else
            sum = b;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] + 1 <= a)
                sum += arr[i];
            else
                sum += a - 1;
        }
        cout << sum << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}