#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> brr(n);
        ll decoy = -1;
        ll diff;
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
            if (brr[i] != 0 && decoy == -1)
                decoy = i;
        }
        if(arr==brr)
        {
            cout<<"YES"<<'\n';
            continue;
        }
        if (decoy != -1)
        {
            diff = arr[decoy] - brr[decoy];
        }
        else
        {
            cout << "YES" << '\n';
            continue;
        }

        if (diff <= 0)
        {
            cout << "NO" << '\n';
            continue;
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] - brr[i] == diff)
            {
                continue;
            }
            else
            {
                if (brr[i] == 0)
                {
                    if (arr[i] - brr[i] > diff)
                    {
                        flag = false;
                    }
                    else
                        continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag==false)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}