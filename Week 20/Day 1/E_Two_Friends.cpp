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
    ll n;
    cin >> n;
    
    vector<ll> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        p[i]--;
    }
    
    ll ans = 3;
    for (int i = 0; i < n; i++) {
        if (p[p[i]] == i) {
            ans = 2;
        }
    }
    cout << ans << "\n";
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