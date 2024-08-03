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
    ll a,b,l,n; cin >> a >> b >> l;
        set<ll>st;
        while(1)
        {
            n=l;
            while(1)
            {
                st.insert(n);
                if(n%b!=0) break;
                n/=b;
            }
            if(l%a!=0)
                break;
            l/=a;
        }
        cout << st.size() << endl;
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