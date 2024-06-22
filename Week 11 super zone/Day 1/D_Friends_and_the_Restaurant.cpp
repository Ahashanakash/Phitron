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
        ll n, cnt = 0;
        cin >> n;
        vector<ll> arr(n), v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] = v[i] - arr[i];
        }

        sort(v.rbegin(), v.rend());
        for (int i = 0, j = n - 1; i < j;)
        {
            if (v[i] + v[j] < 0)
                j--;
            else
            {
                i++, j--;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}