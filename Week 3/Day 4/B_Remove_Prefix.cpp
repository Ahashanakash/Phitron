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
        long long n, cnt = 0,sz=0;
        cin >> n;
        map<long long, long long> mp;
        vector<long long>v(n);

        for (long long i = 0; i < n; i++)
        {
            
            cin >> v[i];
            mp[v[i]]++;
            if (mp[v[i]] > 1)
            {
                cnt++;
            }
        }
        for (long long i = 0; i < v.size(); i++)
        {
            if(cnt==0)break;
            else if (mp[v[i]]>1)
            {
                mp[v[i]]--;
                cnt--;
                sz++;
                
            }
            else sz++;
        }
        cout<<sz<<endl;
    }
    return 0;
}