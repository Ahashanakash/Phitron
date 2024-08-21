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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> arr(n, false);
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        ll j = i;
        while (j >= 1 && arr[j]==false && s[j - 1] == 'A' && s[j] == 'B')
        {
            ans++;
            arr[j] = true;
            swap(s[j - 1], s[j]);
            j--;
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}