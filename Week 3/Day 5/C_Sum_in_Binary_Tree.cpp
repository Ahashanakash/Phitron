#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;
        while (n != 1)
        {
            sum += n;
            n /= 2;
        }
        cout << sum + 1 << endl;
    }
    return 0;
}