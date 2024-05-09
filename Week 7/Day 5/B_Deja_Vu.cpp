#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<ll> brr(q);
        for (int i = 0; i < q; i++)
            cin >> brr[i];

        set<ll> s;

        for (int i = 0; i < q; i++)
        {
            if (s.count(brr[i]))
                continue;
            s.insert(brr[i]);
            for (ll j = 0; j < n; j++)
            {
                if (arr[j] % (1 << brr[i]) == 0)
                    arr[j] += (1 << (brr[i] - 1));
            }
        }

        for (auto i : arr)
            cout << i << " ";
        cout << '\n';
    }
}

int main()
{
    solve();
    return 0;
}