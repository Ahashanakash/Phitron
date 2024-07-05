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
        ll n;
        cin >> n;
        vector<vector<ll>> arr(n);
        unordered_set<ll> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i].resize(x);
            for (int j = 0; j < x; j++)
            {
                cin >> arr[i][j];
                s.insert(arr[i][j]);
            }
        }
        ll mx = 0;
        for (auto x : s)
        {
            unordered_set<ll> st;
            for (int i = 0; i < n; i++)
            {
                bool found = false;
                for (int j = 0; j < arr[i].size(); j++)
                {
                    if (arr[i][j] == x)
                    {
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    for (int j = 0; j < arr[i].size(); j++)
                    {
                        st.insert(arr[i][j]);
                    }
                }
            }
            mx=max(mx,(ll)st.size());
        }
        cout<<mx<<'\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}