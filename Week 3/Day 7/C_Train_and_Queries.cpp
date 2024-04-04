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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]].push_back(i);
        }
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            if (mp[x].empty() || mp[y].empty())
                cout << "NO" << endl;

            else if (x == y)
                cout << "YES" << endl;

            else if (mp[x].front() < mp[y].back())
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
