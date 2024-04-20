#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        auto it = lower_bound(arr.begin(),arr.end(),a);
        auto it1= upper_bound(arr.begin(),arr.end(),b);

        cout<<(it1-arr.begin())-(it-arr.begin())<<" ";

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}