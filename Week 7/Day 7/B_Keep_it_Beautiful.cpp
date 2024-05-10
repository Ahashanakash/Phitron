#include <bits/stdc++.h>
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
        vector<ll> arr(n), brr;
        string s ;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (brr.empty())
            {
                s.push_back('1');
                brr.push_back(arr[i]);
            }
            else
            {
                if (flag)
                {
                    if (arr[i] < brr.back())
                        s.push_back('0');
                    else
                    {
                        if (arr[i] > brr[0])
                            s.push_back('0');
                        else
                        {
                            s.push_back('1');
                            brr.push_back(arr[i]);
                        }
                    }
                }
                else
                {
                    if (arr[i] >= brr.back())
                    {
                        s.push_back('1');
                        brr.push_back(arr[i]);
                    }
                    else
                    {
                        if (arr[i] > brr[0])
                            s.push_back('0');
                        else
                        {
                            flag = true;
                            s.push_back('1');
                            brr.push_back(arr[i]);
                        }
                    }
                }
            }
        }

        cout << s << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}