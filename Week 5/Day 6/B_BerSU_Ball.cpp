#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, m;
    vector<ll> arr(100);
    vector<ll> brr(100);
    ll sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    sort(arr.rbegin(), arr.rend());

    sort(brr.rbegin(), brr.rend());

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((arr[i] == brr[j]) || (arr[i] + 1 == brr[j]) || (arr[i] - 1 == brr[j]))
            {
                sum += 1;
                brr[j] = -2;
                break;
            }
        }
    }

    cout << sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}