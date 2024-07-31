#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;

// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

int palindrom(vector<ll> &v)
{
    int l = 0, r = v.size() - 1;
    while (l < r)
    {
        if (v[l] != v[r])
        {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
        ll l = 0, r = n - 1, ans = -1, a, b;
        while (l < r)
        {
            if (arr[l] != arr[r])
            {
                ans = 1;
                a = arr[l];
                b = arr[r];
                break;
            }
            l++;
            r--;
        }
        if (ans == -1)
            cout << "YES" << '\n';
        else
        {
            vector<ll> x, y;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != a)
                    x.push_back(arr[i]);
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != b)
                    y.push_back(arr[i]);
            }
            if (palindrom(x) || palindrom(y))
            {
                cout << "YES" << '\n';
            }
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}