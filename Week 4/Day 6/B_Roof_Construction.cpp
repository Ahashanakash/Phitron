#include <bits/stdc++.h>
using namespace std;

#define ll long long

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
        int a = 1;
        while (a * 2 < n)
        {
            a <<= 1;
        }
        for (int i = a - 1; i >= 0; i--)
        {
            cout << i << " ";
        }
        cout << a;
        for (int i = a + 1; i < n; i++)
        {
            cout << " " << i;
        }
        cout << endl;
    }
}