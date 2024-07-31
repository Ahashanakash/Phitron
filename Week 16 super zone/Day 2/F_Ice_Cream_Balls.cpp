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
        ll n;
        cin >> n;
        ll l = 1, r = 2000000005, ans, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2LL;
            if ((mid * (mid - 1)) / 2LL <= n)
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        ll c = (ans * (ans - 1)) / 2LL;
        cout << n - c + ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}