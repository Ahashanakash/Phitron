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
    ll n, sum1 = 0;
    cin >> n;
    bool flag = false;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.rbegin(), arr.rend());
    bool a = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == sum1)
        {
            a = true;
            break;
        }
        sum1 += arr[i];
    }

    if (a)
    {
        swap(arr[n - 1], arr[0]);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == sum)
            {
                cout << "NO" << '\n';
                return;
            }
            sum += arr[i];
        }
    }
    cout << "YES" << '\n';
    for (auto &&i : arr)
    {
        cout << i << " ";
    }
    cout << '\n';
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