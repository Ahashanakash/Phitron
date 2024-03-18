#include<bits/stdc++.h>
using namespace std;

int main (){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long a,b,t,ans=0;
    cin>>a>>b>>t;
    for (int i = 0; i <= t; i++)
    {
        for (int j = 0; j <= t; j++)
        {
            if ((a*i)+(b*j)== t)
            {
                cout<<"Yes";
                return 0;
            }
            else continue;
        }
        
    }
    cout<<"No";
    
return 0;
}