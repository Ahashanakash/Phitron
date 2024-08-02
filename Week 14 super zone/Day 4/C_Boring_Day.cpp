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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll sum = 0, ans = 0, s = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > r)
            {
                sum = 0;
                s = i + 1;
                continue;
            }
            sum += arr[i];
            while (sum > r)
            {
                sum -= arr[s];
                s++;
            }
            if (sum >= l && sum <= r)
            {
                ans++;
                sum = 0;
                s = i + 1;
            }
        }
        cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}