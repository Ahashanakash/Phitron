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
        string s;
        cin >> s;
        int cnt = 0, brack = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')' && cnt <= 0)
            {
                brack++;
            }
            else if (s[i] == '(')
            {
                cnt++;
            }
            else
                cnt--;
        }
        cout << brack << endl;
    }
    return 0;
}