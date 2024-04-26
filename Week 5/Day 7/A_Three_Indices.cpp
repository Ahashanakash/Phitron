#include <iostream>
#include <vector>
using namespace std;

#define ll long long

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool found = false;
        ll peak_index ;

        for(int i = 1; i < n - 1; i++)
        {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            {
                found = true;
                peak_index = i + 1;
                break;
            }
        }

        if (!found)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << peak_index - 1 << " " << peak_index << " " << peak_index + 1 << "\n";
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
