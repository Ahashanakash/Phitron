#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> arr;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
            if (n / i != i)
                arr.push_back(n / i);
        }
    }
    sort(arr.begin(), arr.end());
    if (k > arr.size())
        cout << "-1" << '\n';
    else
        cout << arr[k - 1] << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}