#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b, t, i = 1, ans = 0;
    cin >> a >> b >> t;
    if (t < a)
    {
        cout << "0";
    }
    else
    {
        while (i * a <= t)
        {
            ans += b;
            i++;
        }
        cout << ans;
    }

    return 0;
}