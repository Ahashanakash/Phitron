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
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll sum = 0, i = 0;
        set<ll> s;

        while (i < n)
        {
            if (arr[i] < 0)
            {
                while (arr[i] < 0 && i < n)
                {
                    s.insert(arr[i]);
                    i++;
                }
            }
            else
            {
                if (arr[i] > 0)
                {
                    while (arr[i] > 0 && i < n)
                    {
                        s.insert(arr[i]);
                        i++;
                    }
                }
            }
            auto it = s.rbegin();
            sum += *it;
            s.clear();
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