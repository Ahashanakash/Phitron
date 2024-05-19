#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<ll> s;
    ll cnt = 0, start = 0, i = 0, j = 0;

    while (i < n && j < n)
    {
        while (j < n && !s.count(arr[j]))
        {
            s.insert(arr[j]);
            cnt = max(cnt, j - i + 1);
            j++;
        }
        while (j < n && s.count(arr[j]))
        {
            s.erase(arr[i]);
            i++;
        }
    }

    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
