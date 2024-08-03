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
    ll n, a = 1, b = 1;
    bool flag = true;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    a = arr[0];
    b = arr[1];
    for (int i = 0; i < n; i += 2)
    {
        a = __gcd(arr[i], a);
    }
    if (a > 1)
    {
        flag = true;
        for (int i = 1; i < n; i += 2)
        {
            if (arr[i] % a == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << a << '\n';
            return;
        }
    }
    flag = true;
    for (int i = 1; i < n; i += 2)
    {
        b = __gcd(arr[i], b);
    }
    if (b > 1)
    {
        for (int i = 0; i < n; i += 2)
        {
            if (arr[i] % b == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << b << '\n';
        else
            cout << "0" << '\n';
    }
    else
        cout << "0" << '\n';
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