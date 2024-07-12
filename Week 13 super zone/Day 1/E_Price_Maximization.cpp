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
        ll n, k, ans = 0;
        cin >> n >> k;

        vector<ll> arr(n), brr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            ans += arr[i] / k;
            if (arr[i] % k > 0)
                brr.push_back(arr[i] % k);
        }

        sort(brr.begin(), brr.end());

        ll l = 0, r = brr.size() - 1;
        while (l < r)
        {
            if (brr[l] + brr[r] >= k)
            {
                l++;
                r--;
                ans++;
            }
            else
                l++;
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