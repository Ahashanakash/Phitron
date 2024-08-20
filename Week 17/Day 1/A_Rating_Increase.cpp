#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long


void solve()
{
    string s;
    cin>>s;
    if (s[0]>48 && s[1]>48)
    {
        cout<<s[0]<<" ";
        for (int i = 1; i < s.size(); i++)
        {
            cout<<s[i];
        }
        cout<<'\n';
    }
    else if(s[1]==0)
    {
        
    }
    
}
int main (){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    solve();
}
return 0;
}