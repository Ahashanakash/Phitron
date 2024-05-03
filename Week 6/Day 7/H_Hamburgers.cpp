#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    string re;
    ll nb, ns, nc, pb, ps, pc,r;
    ll c[3];

    cin >> re;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    ll len = re.length();
    memset(c, 0, sizeof(c));
    for (int i = 0; i < len; i++)
    {
        if (re[i] == 'B')
            c[0]++;
        else if (re[i] == 'S')
            c[1]++;
        else
            c[2]++;
    }
    auto ok = [&](ll x)
    {
        ll br = c[0] * x, sr = c[1] * x, cr = c[2] * x;
        ll difb = max(br - nb, 0LL), difs = max(sr - ns, 0LL), difc = max(cr - nc, 0LL);
        if ((difb * pb + difc * pc + difs * ps) > r)
        {
            return false;
        }
        else
        {
            return true;
        }
    };
    ll left = 0, right = 1e13;
    while (left + 1 < right)
    {
        ll mid = (left + right) / 2;
        if (ok(mid))
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    cout << left << '\n';
}