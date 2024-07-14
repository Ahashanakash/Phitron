#include <iostream>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                arr[i] = 2;
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (arr[i] % arr[i - 1] == 0)
            {
                arr[i] += 1;
            }
            cout << arr[i - 1] << " ";
        }
        cout << arr[n - 1] << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}