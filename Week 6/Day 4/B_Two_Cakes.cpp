#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;

    ll left = 1, right = min(a, b);
    ll ans = 1;

    while (left <= right)
    {
        ll mid = (left + right) / 2;
        if (a / mid + b / mid >= n)
        {
            left = mid + 1;
            ans = mid;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
