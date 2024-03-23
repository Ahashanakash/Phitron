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
        cin.ignore();
        int sum = 529, cnt = 0;
        string s;
        cin >> s;
        if (s.size()!=5)
        {
            cout<<"NO"<<endl;
            continue;
        }
        
        sort(s.begin(),s.end());
        if(s=="Timru") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}