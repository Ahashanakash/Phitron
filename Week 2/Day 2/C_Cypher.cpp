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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            cin >> v[i];
        }
        vector<int> vv;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                if (v[i][j] == 'U')
                {
                    arr[i]--;
                }
                else
                    arr[i]++;
                if (arr[i] == 10)
                {
                    arr[i] = 0;
                }
                if (arr[i] == -1)
                {
                    arr[i] = 9;
                }
            }
            vv.push_back(arr[i]);
        }
        for (auto z : vv)
        {
            cout<<z<<" ";
        }
        cout<<endl;
    }
    return 0;
}