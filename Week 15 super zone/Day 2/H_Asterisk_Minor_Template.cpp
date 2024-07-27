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
        string a, b;
        cin >> a >> b;
        bool x = false;

        if (a[0] == b[0])
        {
            cout << "YES\n";
            cout << a[0] << '*' << "\n";
            continue;
        }
        if (a.back() == b.back())
        {
            cout << "YES\n";
            cout << '*' << a.back() << "\n";
            continue;
        }
        for (int i = 0; i < a.size() - 1; i++)
        {
            for (int j = 0; j < b.size() - 1; j++)
            {
                if (a[i] == b[j] && a[i + 1] == b[j + 1])
                {
                    cout << "YES\n";
                    cout << '*' << a[i] << a[i + 1] << '*' << "\n";
                    x = true;
                    break;
                }
            }
            if (x)
                break;
        }
        if (!x)
            cout << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}