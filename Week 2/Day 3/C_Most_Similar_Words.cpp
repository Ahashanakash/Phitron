#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long arr[n] = {0};
        vector<string> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long mn = LLONG_MAX;
        for (long long i = 0; i < n - 1; i++)
        {
            for (long long k = i + 1; k < n; k++)
            {
                long long sum = 0;
                for (long long j = 0; j < m; j++)
                {
                    sum += abs(v[i][j] - v[k][j]);
                }
                mn = min(sum, mn);
            }
        }

        cout << mn << endl;
    }
    return 0;
}