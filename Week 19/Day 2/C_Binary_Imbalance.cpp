#include <iostream>
using namespace std;

void solve()
{
    int n; cin >> n;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        char c; cin >> c;
        if (c == '0') flag = true;
    }
    (flag) ? cout << "YES" << '\n': cout << "NO" << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}