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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        for (int sum = 1; sum <= 25; sum++)
        {
            ll cnt = 0;
            for (int i = 0, j = n - 1; i < j;)
            {
                if (arr[i] + arr[j] > sum)
                    j--;
                else if (arr[i] + arr[j] < sum)
                    i++;
                else
                {
                    cnt++;
                    i++, j--;
                }
            }
            ans = max(ans, cnt);
        }

        cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}