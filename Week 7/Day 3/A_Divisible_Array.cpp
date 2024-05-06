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
        int sum = 0;
        if (n == 1)
            cout << "1" << '\n';
        else if (n == 2)
            cout << "2 4" << '\n';
        else
        {
            sum = (n * (n + 1)) / 2;
            if (sum % n == 0)
            {
                for (int i = 1; i <= n; i++)
                {
                    cout << i << " ";
                }
                cout << '\n';
            }
            else
            {
                cout << (sum % n) + 1 << " ";
                for (int i = 2; i <= n; i++)
                {
                    cout << i << " ";
                }
                cout << '\n';
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}