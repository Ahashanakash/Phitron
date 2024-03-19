#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        long long mx = 0;
        cin >> n;
        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (long long i = 0; i < n; i++)
        {
            if (arr[i] > i + 1)
            {
                if (arr[i] - (i + 1) > mx)
                {
                    mx = arr[i] - (i + 1);
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}