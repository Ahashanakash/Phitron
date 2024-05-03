#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll m, n;
vector<ll> t, y, z, ans;

bool good(ll time) {
    ll res = 0;
    for(ll i=0; i<n; i++) {
        ll ballon = time/(t[i]*z[i] + y[i]);
        ll rem = time - ballon * (t[i]*z[i] + y[i]);
        ballon *= z[i];
        if(rem >= t[i]) {
            if(rem/t[i] > z[i]) {
                ballon += z[i];
            }
            else ballon += (rem/t[i]);
        }
        ans[i] = ballon;
        res += ans[i];
    }
    return res >= m;
}

int main() {
    cin >> m >> n;
    t.resize(n); y.resize(n); z.resize(n), ans.resize(n);
    for(ll i=0; i<n; i++) {
        cin >> t[i] >> z[i] >> y[i];
    }
    if(m == 0) {
        cout << 0 << endl;
        for(ll i=0; i<n; i++) {
            cout << "0 ";
        }
        return 0;
    }
    ll left = 0, right = 1e7, count = 0;
    while(left+1 < right) {
        count++;
        ll mid = (left+right)/2;
        if(good(mid)) {
            right = mid;
        }
        else {
            left = mid;
        }
    }
    cout << right << "\n";
    ll time = right;
    for(ll i=0; i<n; i++) {
        ll ballon = time/(t[i]*z[i] + y[i]);
        ll rem = time - ballon * (t[i]*z[i] + y[i]);
        ballon *= z[i];
        if(rem >= t[i]) {
            if(rem/t[i] > z[i]) {
                ballon += z[i];
            }
            else ballon += (rem/t[i]);
        }
        ans[i] = ballon;
    }
    ll com = 0;
    for(ll i=0; i<n; i++) {
        if(com + ans[i] > m) {
            if(m > 0) {
                cout << m-com << " ";
                m = 0;
            }
            else cout << "0 ";
        }
        else cout << ans[i] << " ";
        com += ans[i];
    }
    cout << "\n";
    return 0;
}