#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());

    map<char, vector<ll>> pos_s, pos_r;
    for (int i = 0; i < n; i++)
    {
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }

    vector<ll> v(n);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < pos_s[ch].size(); i++)
        {
            v[pos_r[ch][i]] = pos_s[ch][i];
        }
    }

    pbds<ll> p;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += p.order_of_key(v[i]);
        p.insert(v[i]);
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}