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
    ll n, k, sum1 = 0, sum2 = 0;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pbds<ll> l, r;

    for (int i = 0; i < n; i++)
    {
        if (i >= k)
        {
            if (l.find(arr[i - k]) != l.end())
            {
                l.erase(l.find(arr[i - k]));
                sum1 = sum1 - arr[i - k];
            }
            else
            {
                r.erase(r.find(arr[i - k]));
                sum2 = sum2 - arr[i - k];
            }
        }

        ll sz1 = l.size(), sz2 = r.size();

        if (sz1 <= sz2)
        {
            l.insert(arr[i]);
            sum1 = sum1 + arr[i];
        }
        else
        {
            r.insert(arr[i]);
            sum2 = sum2 + arr[i];
        }

        sz1 = l.size(), sz2 = r.size();

        if (sz1 > 0 && sz2 > 0)
        {
            auto mxl = l.rbegin();
            auto mxr = r.begin();

            if (*mxl > *mxr)
            {
                sum1 = sum1 + (*mxr - *mxl);
                sum2 = sum2 + (*mxl - *mxr);
                l.insert(*mxr);
                r.insert(*mxl);
                r.erase(r.find(*mxr));
                l.erase(l.find(*mxl));
            }
        }

        if (i >= (k - 1))
        {
            ll mid = *l.rbegin();
            cout << (sz1 * mid - sum1) + (sum2 - mid * sz2) << " ";
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