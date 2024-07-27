#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;

// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll low = 0, high = n, mid, res = -1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        ll x = n - mid;
        ll y = (x * (x + 1)) / 2 - mid;

        if (y == k)
        {
            res = mid;
            break;
        }
        else if (y < k)
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << res << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
