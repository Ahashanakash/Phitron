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
        string s, ss;
        cin >> s >> ss;
        bool x=false;
        for (int i = 0; i < n; i++)
        {
            if ((s[i] == 'G' && ss[i] == 'R')|| (s[i] == 'R' && ss[i] == 'G'))
            {
                cout << "NO" << endl;
                x=true;
                break;
            }
            else if ((s[i] == 'B' && ss[i] == 'R')||(s[i] == 'R' && ss[i] == 'B'))
            {
                cout << "NO" << endl;
                x=true;
                break;
            }
        }
        if (!x)
        {
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}