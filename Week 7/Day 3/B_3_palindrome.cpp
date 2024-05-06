#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool palindrom(string s, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    if (n == 1)
        cout << "a" << '\n';
    else if (n == 2)
        cout << "aa" << '\n';
    else
    {
        s.push_back('a');
        s.push_back('a');
        for (int i = 2; i < n; i++)
        {
            if (s[i - 2] == 'a' && s[i - 1] == 'a')
            {
                s.push_back('b');
            }
            else if (s[i - 2] == 'a' && s[i - 1] == 'b')
                s.push_back('b');
            else
                s.push_back('a');
        }
        cout<<s;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}