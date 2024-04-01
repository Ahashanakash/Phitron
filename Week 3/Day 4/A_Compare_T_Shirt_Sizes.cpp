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
        string s, ss;
        cin >> s >> ss;
        ll sz = 1, sz2 = 1;
        ll m=5,l=10;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'X') sz++;
            else if (s[i]=='S')
            {
                sz*=-1;
            }
            else if(s[i]=='L') sz+=10;
            else if(s[i]=='M')sz+=m;
        }
        for (int i = 0; i < ss.size(); i++)
        {
            if (ss[i] == 'X') sz2++;
            else if (ss[i]=='S')
            {
                sz2*=-1;
            }
            else if(ss[i]=='L') sz2+=10;
            else if(ss[i]=='M')sz2+=m;
        }
        if (sz>sz2) cout<<">"<<endl;
        else if(sz==sz2)cout<<"="<<endl;
        else cout<<"<"<<endl;
        
    }
    return 0;
}