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

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll mn = arr[0], mnidx = 0;
        bool ok = true;

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] < mn)
            {
                mn = arr[i];
                mnidx = i;
            }
        }

        for (int i = mnidx; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                ok = false;
        }

        if (ok)
            cout << mnidx << '\n';
        else
            cout << "-1" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}