#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int arr[n];
    int brr[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    int i = 0, j = 0, cnt = 0;
    while (j < m)
    {
        while (arr[i] < brr[j] && i < n)
        {
            cnt++;
            i++;
        }
        cout << cnt << " ";
        j++;
    }
    cout<<endl;
    return 0;
}