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
        ll n, k;
        cin >> n >> k;
        vector<ll> arr;
        ll x = n - k;
        ll a = (x + 1) / 2;
        ll b = x / 2;
        arr.push_back(1);
        arr.push_back(n);
        ll k2 = k / 2;
        for (int i = 1; i < k / 2; i++)
        {
            ll d1, d2;
            if (a % k2 != 0)
            {
                d1 = (a / k2) + 1;
                a -= ((a / k2) + 1);
            }
            else
            {
                d1 = (a / k2);
                a -= ((a / k2));
            }
            if (b % k2 != 0)
            {
                d2 = (b / k2) + 1;
                b -= ((b / k2) + 1);
            }
            else
            {
                d2 = (b / k2);
                b -= ((b / k2));
            }
            arr.push_back(arr[arr.size() - 2] + d1 + 1);
            arr.push_back(arr[arr.size() - 2] - (d2 + 1));
            k2--;
        }
        for (int i = k; i < n; i++)
        {
            if (i % 2 == 0)
                arr.push_back(arr[i - k] + 1);
            else
                arr.push_back(arr[i - k] - 1);
        }
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout<<'\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}