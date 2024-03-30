#include <bits/stdc++.h>
using namespace std;

int arr[2001][2001];

long long sum(int i, int j, int n, int m)
{
    long long result = 0;
    int indx = 0;
    while (i - indx > -1 && j - indx > -1)
    {
        result += arr[i - indx][j - indx];
        indx++;
    }
    indx = 0;
    while (i - indx > -1 && j + indx < m)
    {
        result += arr[i - indx][j + indx];
        indx++;
    }
    indx = 0;
    while (i + indx < n && j + indx < m)
    {
        result += arr[i + indx][j + indx];
        indx++;
    }
    indx = 0;
    while (i + indx < n && j - indx > -1)
    {
        result += arr[i + indx][j - indx];
        indx++;
    }
    result -= (3 * arr[i][j]);
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans = max(ans, sum(i, j, n, m));
            }
        }
        cout << ans << endl;
    }
    return 0;
}