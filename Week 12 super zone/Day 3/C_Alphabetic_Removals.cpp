#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    string ss = s;
    sort(ss.begin(), ss.end());
    
    multiset<char> remov;
    for (int i = 0; i < k; ++i) {
        remov.insert(ss[i]);
    }
    
    string s3;
    for (char c : s) {
        auto it = remov.find(c);
        if (it != remov.end()) {
            remov.erase(it);
        } 
        else 
            cout<<c;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
