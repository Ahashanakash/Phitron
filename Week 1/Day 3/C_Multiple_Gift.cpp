#include<bits/stdc++.h>
using namespace std;

int main (){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long x,y,cnt=0,i=1;
    cin>>x>>y;
    while (x*i<=y)
    {
        cnt++;
        i*=2;
    }
    cout<<cnt;
    
return 0;
}