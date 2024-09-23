#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;

//template <typename T>
//using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long


void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    
    x = (x + k - 1) / k;
    y = (y + k - 1) / k;
    
    cout << max(2LL * x - 1LL, 2LL * y) << '\n';
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