#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n-1);
    int cnt = 1;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] != cnt)
        {
            cout << cnt;
            return 0;
        }
        cnt++;
    }
    cout<<cnt;

    return 0;
}