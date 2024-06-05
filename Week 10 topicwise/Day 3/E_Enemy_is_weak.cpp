#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
int main()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll> arr1(n), arr(n);
    pbds<ll> p1;
    pbds<ll> p2;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        p1.insert(arr[i]);
        arr1[i] = p1.size() - p1.order_of_key(arr[i]) - 1;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        p2.insert(arr[i]);
        ans += p2.order_of_key(arr[i]) * arr1[i];
    }
    cout << ans;
}