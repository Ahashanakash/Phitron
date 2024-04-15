#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAX = (1 << 15);
vector<int> all_palindrome;

void mark_palindrome()
{
    for (int i = 0; i < MAX; i++)
    {
        string s = to_string(i);
        int size = s.length();
        bool ok = true;
        for (int i = 0; i < (size / 2); i++)
        {
            if (s[i] != s[size - i - 1])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            all_palindrome.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    mark_palindrome();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(MAX), a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }

        ll ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < all_palindrome.size(); j++)
            {
                int current = (a[i] ^ all_palindrome[j]);
                ans += cnt[current];
            }
        }

        cout << (ans / 2) << endl;
    }
    return 0;
}