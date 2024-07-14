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
        ll n, sum = 0;
        bool ok = true;
        cin >> n;
        vector<ll> arr(n);
        multiset<ll> ms;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ms.insert(arr[i]);
            sum += arr[i];
        }

        priority_queue<ll> pq;
        pq.push(sum);

        while (!pq.empty())
        {
            ll d = pq.top();
            pq.pop();

            if (ms.find(d) != ms.end())
            {
                ms.erase(ms.find(d));
                continue;
            }
            if (d == 1)
            {
                ok = false;
                break;
            }
            ll h = d / 2, h1 = d - h;
            pq.push(h);
            pq.push(h1);

            if (pq.size() > n + 2)
            {
                ok = false;
                break;
            }
        }
        if (ok && ms.empty())
            cout << "YES" << '\n';
        else
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
