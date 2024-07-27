//week 15
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;

// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

bool vowel(char c)
{
    if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
        return 1;
    else
        return 0;
}

void solve()
{
    string s, t;
    cin >> s;
    // getchar();
    cin >> t;
    ll v = 0;
    if (s.size() != t.size())
    {
        cout << "No" << '\n';
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (vowel(s[i]) && vowel(t[i]))
                continue;
            else if (!vowel(s[i]) && !vowel(t[i]))
                continue;
            else
            {
                v++;
                break;
            }
        }
        if (v == 0)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}