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
    int n;
    cin >> n;
    vector<ll> arr(100005);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
    }
    ll ans = 0;
    for (int i = 2; i < 100005; i++)
    {
        ll a = 0;
        for (int j = i; j < 100005; j += i)
            a += arr[j];
        ans = max(ans, a);
    }

    cout << max(ans, 1LL) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
