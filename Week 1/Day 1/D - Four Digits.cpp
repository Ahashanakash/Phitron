#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.size() == 4)
        cout << s;
    else if (s.size() == 3)
        cout << "0" << s;

    else if (s.size() == 2)
        cout << "00" << s;

    else if (s.size() == 1)
        cout << "000" << s;

    return 0;
}