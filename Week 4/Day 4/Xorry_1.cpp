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
        int n;
        cin >> n;
        int a = 1, b = 0, cnt = 0;
        while (a * 2 <= n)
        {
            a = a * 2;
            cnt++;
        }
        for (int i = cnt - 1; i >= 0; i--)
        {
            if (n & 1 << i)
            {
                b = b | (1 << i);
            }
        }
        cout << b << " " << a << endl;
    }
    return 0;
}