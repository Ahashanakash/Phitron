#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> difference_array(n + 1);
    for (int i = 1; i <= q; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--, r--;
        difference_array[l]++;
        difference_array[r + 1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        difference_array[i] = difference_array[i - 1] + difference_array[i];
    }

    sort(arr.rbegin(), arr.rend());
    sort(difference_array.rbegin(), difference_array.rend());

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (1LL * difference_array[i] * arr[i]);
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}