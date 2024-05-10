#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 1e9;
        for (int i = 'a'; i <= 'z'; i++)
        {
            ll cnt = 0, left = 0, right = n - 1;
            while (left <= right)
            {
                if (s[left] != s[right])
                {
                    if (s[left] == i)
                    {
                        left++;
                        cnt++;
                    }
                    else if (s[right] == i)
                    {
                        right--;
                        cnt++;
                    }
                    else
                    {
                        cnt = 1e9;
                        break;
                    }
                }
                else
                {
                    left++;
                    right--;
                }
            }
            ans = min(ans, cnt);
        }
        if (ans == 1e9)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}