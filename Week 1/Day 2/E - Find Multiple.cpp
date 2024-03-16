#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b, c;
    cin >> a >> b >> c;
    long long i = 1;
    int cnt = 0;

    while (c * i <= b)
    {
        if (c * i >= a)
        {
            cnt++;
            break;
        }
        i++;
    }
    if (cnt > 0)
    {
        cout << c * i;
    }
    else
    {
        cout << "-1";
    }

    return 0;
}