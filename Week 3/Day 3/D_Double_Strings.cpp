#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        set<string> s(a.begin(), a.end());

        string ans(n, '0');

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < a[i].size(); j++)
            {
                string x = a[i].substr(0, j);
                string y = a[i].substr(j);

                if (s.find(x) != s.end() && s.find(y) != s.end())
                {
                    ans[i] = '1';
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
