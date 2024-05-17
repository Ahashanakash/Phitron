#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n = 1000000;
vector<ll> arr;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;

        ll ans = 1, j = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] - 1 >= x)
            {
                ans *= arr[i];
                j = arr[i];
                break;
            }
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] - j >= x)
            {
                ans *= arr[i];
                j = arr[i];
                break;
            }
        }
        cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<bool> prime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            arr.push_back(i);
    }
    solve();
    return 0;
}