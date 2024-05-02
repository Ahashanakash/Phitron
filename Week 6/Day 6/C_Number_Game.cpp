#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ok(vector<int> arr, int n, int k)
{
    multiset<ll> s;
    for (auto i : arr)
    {
        s.insert(i);
    }

    for (int i = 1; i <= k; i++)
    {
        if (s.empty())
            return false;
        ll req = k - i + 1LL;
        auto it = s.upper_bound(req);
        if (it == s.begin())
            return false;
        it--;

        s.erase(it);
        if (!s.empty())
        {
            it = s.begin();
            ll v = (*it);
            v += (req);
            s.erase(it);
            s.insert(v);
        }
    }
    return true;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int k;
        int left = 0, right = n;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (ok(arr, n, mid))
            {
                k = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        cout << k << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
