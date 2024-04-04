#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> graph[1000000];
vector<ll> leaf;

void dfs(int current, int parent)
{
    bool visit = false;
    for (int child : graph[current])
    {
        if (child != parent)
        {
            visit = true;
            dfs(child, current);
            leaf[current] += leaf[child];
        }
    }
    if (!visit)
    {
        leaf[current] = 1;
    }
}
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
        for (int i = 0; i <= n; i++)
        {
            graph[i].clear();
        }
        leaf.assign(n + 2, 0);
        for (int i = 1; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        dfs(1, -1);
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            ll ans = leaf[x] * leaf[y];
            cout << ans << endl;
        }
    }

    return 0;
}