#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for (char l = 'a'; l <= 'z'; l++)
    {
        if (s.find(l) == string::npos)
        {
            cout << l;
            return 0;
        }
    }

    cout << "None";

    return 0;
}