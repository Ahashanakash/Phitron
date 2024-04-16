#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, ans;
        cin >> n >> s;
        
        int pal = 0, not_pal = 0, l = 0, r = n - 1;

        while (l < r)
        {
            if (s[l] == s[r])
            {
                pal += 2;
            }
            else
            {
                not_pal++;
            }
            l++;
            r--;
        }

        for (int i = 0; i <= n; i++)
        {
            int total = i;
            total = total - not_pal;

            if (total < 0)
            {
                ans.push_back('0');
            }

            else
            {
                total = max((total % 2), total - pal);
                total = max(0, total - (n % 2));

                if (total == 0)
                {
                    ans.push_back('1');
                }
                else
                {
                    ans.push_back('0');
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}