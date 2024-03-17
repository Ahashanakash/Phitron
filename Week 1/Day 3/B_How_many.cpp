#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, s, t, cnt = 0;
    cin >> s >> t;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            for (int k = 0; k <= s; k++)
            {
                if (i + j + k <= s && i * k * j <= t)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}