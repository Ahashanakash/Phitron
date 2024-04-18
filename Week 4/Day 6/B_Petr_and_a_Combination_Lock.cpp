#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    bool check = false;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < (1 << n); i++)
    {
        int a = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                a += arr[j];
            else
                a -= arr[j];
        }
        if (a % 360 == 0)
        {
            cout << "YES" << endl;
            check = true;
            break;
        }
    }
    if (!check)
        cout << "NO" << endl;
    return 0;
}