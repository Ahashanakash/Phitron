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
        int n;
        cin >> n;
        int arr[n + 5][n];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        map<int, int> mp1;
        map<int, int> mp2;
        for (int i = 1; i <= n; i++)
        {
            mp1[arr[i][n - 1]] = i;
            mp2[arr[i][n - 1]]++;
        }
        int indx = 0, ans;
        for (auto i : mp2)
        {
            if (i.second == 1)
                indx = i.first;
            else
                ans = i.first;
        }
        for (int i = 1; i < n; i++)
        {
            cout << arr[mp1[indx]][i] << " ";
        }
        cout << ans << endl;
    }

    return 0;
}