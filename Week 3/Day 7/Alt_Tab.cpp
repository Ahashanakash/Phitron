#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    stack<string> st;
    set<string> ss;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        if (ss.find(st.top()) == ss.end())
        {
            ss.insert(st.top());
            string nw = st.top();
            cout << nw[nw.size() - 2] << nw[nw.size() - 1];
        }
        st.pop();
    }

    return 0;
}