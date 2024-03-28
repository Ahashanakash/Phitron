#include <bits/stdc++.h>
using namespace std;

int palindrom(vector<int> &v)
{
    int l = 0, r = v.size() - 1;
    while (l < r)
    {
        if (v[l] != v[r])
        {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}

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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int l = 0, r = n - 1, ans = -1, a, b;
        while (l < r)
        {
            if (arr[l] != arr[r])
            {
                ans = 1;
                a = arr[l];
                b = arr[r];
                break;
            }
            l++;
            r--;
        }
        if (ans == -1)
            cout << "YES" << endl;
        else
        {
            vector<int> x, y;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != a)
                    x.push_back(arr[i]);
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != b)
                    y.push_back(arr[i]);
            }
            if (palindrom(x) || palindrom(y))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}