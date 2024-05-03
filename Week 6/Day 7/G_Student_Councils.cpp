#include <bits/stdc++.h>
using namespace std;
#define ll long long

int k, n;
vector<ll> arr;

bool ok(ll m)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > m)
            sum += m;
        else
            sum += arr[i];
    }
    return (sum / m) >= k;
}

int main()
{

    cin >> k >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll l = 0, r = 25 * 1e9 + 10;
    while (l + 1 < r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << "\n";
    return 0;
}