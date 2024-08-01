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
        vector<ll> arr, freq(10);
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            x %= 10;
            if (freq[x] < 3)
            {
                freq[x]++;
                arr.push_back(x);
            }
        }

        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                for (int k = j + 1; k < arr.size(); k++)
                {
                    if ((arr[i] + arr[j] + arr[k]) % 10 == 3)
                    {
                        cout << "YES" << '\n';
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            if (flag)
                break;
        }
        if (!flag)
            cout << "NO" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}