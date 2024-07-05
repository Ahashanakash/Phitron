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
        ll n, x = -1, k = LLONG_MIN;
        cin >> n;
        vector<ll> arr(n);
        unordered_map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            k = max(k, mp[arr[i]]);
        }

        if (k == n)
            cout << "NO" << '\n';
        else
        {
            cout << "YES" << '\n';
            for (int i = 1; i < n; i++)
            {
                if (arr[i] != arr[0])
                {
                    x = i;
                    break;
                }
            }

            for (int i = 1; i < n; i++)
            {
                if (arr[i] != arr[0])
                    cout << "1" << " " << i + 1 << '\n';
                else
                    cout << x + 1 << " " << i + 1 << '\n';
            }
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