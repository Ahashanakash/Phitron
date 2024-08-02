#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;

// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

void solve()
{
    ll n, x = 0;
    cin >> n;
    vector<ll> arr;
    for (ll k = 30; k >= 0; k--)
    {
      if (n >> k & 1)
      {
        x = k;
        break;
      }
    }
    for (int i = 0; i <= x; i++)
      arr.push_back(1 << i);

    ll y = 1 << x;
    for (int i = x - 1; i >= 0; i--)
    {
      if (n >> i & 1)
      {
        y += 1 << i;
        arr.push_back(y);
      }
    }
    reverse(arr.begin(), arr.end());
    cout << arr.size() << '\n';
    for (auto y : arr)
    {
      cout << y << ' ';
    }
    cout << '\n';
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