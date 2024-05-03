#include <bits/stdc++.h>

using namespace std;

#define ll long long

string t, p;
vector<ll> arr;

bool check(ll x) {
    ll i = 0, j = 0;
    string temp = "";
    unordered_set<ll> set;
    for(ll k=1; k<=x; k++) {
        set.insert(arr[k]-1);
    }
    ll lt = t.size();
    for(ll i=0; i<lt; i++) {
        if(set.find(i) == set.end()) {
            temp += t[i];
        }
    }

    ll ltemp = temp.size(), lp = p.size();
    while( i < ltemp && j < lp ) {
        while(i < ltemp && temp[i] != p[j]) i++;
        if(temp[i] == p[j]) {
            i++; j++;
        }
    }
    return j == lp;
}
int main() {
    cin >> t;
    cin >> p;
    long long lt = t.size(), lp = p.size();
    arr.resize(lt+1);
    for(ll i=1; i<=lt; i++) {
        cin >> arr[i];
    }
 
    if(lp == 0) {
        cout << lt << endl;
        return 0;
    }
    ll l = 0, r = lt-lp + 1;
    while(l+1 < r) {
        ll mid = (l+r)/2;
        if(check(mid) == true) {
            l = mid;
        }
        else {
            r = mid;
        }
    }
    cout << l << "\n";
}