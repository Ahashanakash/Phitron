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
    ll n, a, b;
    cin >> n >> a >> b;
    if (b <= a)
    {
        cout << n * a << '\n';
        return;
    }
    ll x, y=b-a;
    if (y<=n)
    {
        x=(b*y)-(y*(y-1))/2;
        n=n-y;
        x+=n*a;
    }
    else
    {
        y=n;
        x=(b*y)-(y*(y-1))/2;
    }
    cout<<x<<'\n';
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