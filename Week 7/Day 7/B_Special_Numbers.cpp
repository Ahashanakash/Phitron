#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll func(ll b, ll n)
{
    ll ans = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            ans = (ans * b) % 1000000007;
            n--;
        }
        else
        {
            b = (b * b) % 1000000007;
            n /= 2;
        }
    }
    return ans % 1000000007;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        while (k)
        {
            if (k % 2 == 0)
                s.push_back('0');
            else
                s.push_back('1');
            k /= 2;
        }
        ll ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                ans += func(n, i);
            ans %= 1000000007;
        }
        cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}