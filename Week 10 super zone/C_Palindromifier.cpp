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
    cout<<"3"<<'\n';
    cout<<"R "<<s.size()-1<<'\n';
    cout<<"L "<<s.size()<<'\n';
    cout<<"L "<<"2";
}
int main (){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    solve();
return 0;
}