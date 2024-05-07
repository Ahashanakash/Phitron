#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll zero = 0, one = 0, cost = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (zero > 0)
                    zero--;
                else
                    break;
            }
            else
            {
                if (one > 0)
                    one--;
                else
                    break;
            }
        }
        cout << one + zero << '\n';
        
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}