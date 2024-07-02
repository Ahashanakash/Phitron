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
        int n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        ll ans = -1;

        if (k == 1)
        {
            ans = arr[0];
            for (int i = 1; i < n; i++)
            {
                ans = min(ans, arr[i] - arr[i - 1]);
            }
            cout << ans << '\n';
        }
        else if (k == 2)
        {
            ll ans = arr[0];
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    ll val = abs(arr[j] - arr[i]);

                    ans = min(ans, val);

                    ll indx = -1, l = 0, r = n - 1;
                    while (l <= r)
                    {
                        ll mid = l + (r - l) / 2;
                        if (arr[mid] >= val)
                        {
                            indx = mid;
                            r = mid - 1;
                        }
                        else
                            l = mid + 1;
                    }
                    if (indx == -1)
                        ans = min({ans, val - arr[n - 1]});
                    else
                        ans = min(ans, arr[indx] - val);
                    if (indx == 0)
                        ans = min(ans, arr[0] - val);
                    
                    else
                        ans = min(ans, abs(val - arr[indx - 1]));
                }
            }

            cout << ans << '\n';
        }
        else if (k > 2)
        {
            cout << 0 << '\n';
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