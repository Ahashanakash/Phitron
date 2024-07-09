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
        ll sum = 0, ans = 0, add = 0;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 0)
                sum += arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (arr[i] > 0)
                {
                    add = max(add, sum);
                    sum -= arr[i];
                }
                else
                    add = max(add, sum + arr[i]);
            }
            else
            {
                if (arr[i] > 0)
                {
                    sum -= arr[i];
                    add = max(add, sum);
                }
                else
                    add = max(add, sum);
            }
        }
        ans += add;

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