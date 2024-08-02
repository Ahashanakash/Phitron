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
        ll n, m, x = 0;
        cin >> n >> m;
        if ((n > m) || (n % 2 == 0 && m % 2 != 0))
            cout << "No" << '\n';
        else if (n % 2 != 0)
        {
            cout << "Yes" << '\n';
            for (int i = 0; i < n - 1; i++)
                cout << 1 << " ";
            cout << (m - n + 1) << '\n';
        }
        else if (n % 2 == 0 && m % 2 == 0)
        {
            cout << "Yes" << '\n';
            for (int i = 0; i < n - 2; i++)
                cout << "1" << " ";
            cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << '\n';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}