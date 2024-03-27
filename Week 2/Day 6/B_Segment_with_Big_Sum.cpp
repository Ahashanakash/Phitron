#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll l = 0, r = 0, ans = n+1, sum = 0;

    while (r < n)
    {
        sum += arr[r];
        while (sum >= k && l<n)
        {
            ans = min(ans, r - l + 1);
            sum -= arr[l];
            l++;
        }
        r++;
    }
    if (ans==n+1)cout<<"-1";
    else cout<<ans;
    
    return 0;
}