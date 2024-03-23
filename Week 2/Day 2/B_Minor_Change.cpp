#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, s1;
    cin >> s >> s1;
    long long cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s1[i])
        {
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}