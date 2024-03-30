#include<bits/stdc++.h>
using namespace std;

int main (){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       string s; cin>>n>>s;
       for (int i = 0; i < n; i++)
       {
            s[i]=tolower(s[i]);
       }
       string s1="meow",s2="";
       for (int i = 0; i < n; i++)
       {
            if(s2.empty()|| s2.back()!=s[i])
            s2.push_back(s[i]);
       }
       if(s2==s1)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       
   } 
return 0;
}