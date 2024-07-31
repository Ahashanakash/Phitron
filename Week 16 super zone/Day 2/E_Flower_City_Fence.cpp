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
        vector<ll> arr(n);
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll i = 0, j = n;
        while (i < n)
        {
            while (j > 0 && arr[j - 1] <= i)
                j--;
            if (arr[i] != j)
            {
                cout << "NO"<<'\n';
                flag = true;
                break;
            }
            if (flag)
                break;
            i++;
        }
        if (!flag)
            cout << "YES\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}