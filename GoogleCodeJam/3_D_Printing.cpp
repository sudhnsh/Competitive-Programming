#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
// by sudhnsh
void solve()
{
    ll c[3], m[3], y[3], k[3];
    rep(i, 0, 3)
    {
        cin >> c[i] >> m[i] >> y[i] >> k[i];
    }
    sort(c, c + 3);
    sort(m, m + 3);
    sort(y, y + 3);
    sort(k, k + 3);
    ll fin = 0;
    if (c[0] + m[0] + y[0] + k[0] >= 1000000)
    {
        if (fin + c[0] <= 1000000)
        {
            cout << c[0] << ' ';
            fin += c[0];
        }
        else
        {
            cout << 1000000 << ' ' << 0 << ' ' << 0 << ' ' << 0 << ' ' << '\n';
            return;
        }
        if (fin + m[0] <= 1000000)
        {
            cout << m[0] << ' ';
            fin += m[0];
        }
        else
        {
            cout << 1000000 - fin << ' ' << 0 << ' ' << 0 << ' ' << '\n';
            return;
        }
        if (fin + y[0] <= 1000000)
        {
            cout << y[0] << ' ';
            fin += y[0];
        }
        else
        {
            cout << 1000000 - fin << ' ' << 0 << ' ' << '\n';
            return;
        }
        if (fin + k[0] <= 1000000)
        {
            cout << k[0] << ' ';
            fin += k[0];
        }
        else
        {
            cout << 1000000 - fin << '\n';
            return;
        }
    }
    else
    {
        cout << "IMPOSSIBLE";
    }
}
int main()
{
    ffst;
    ll t;
    cin >> t;
    rep(i, 0, t)
    {
        cout << "Case #" << i + 1 << ": ";
        solve();
        cout << '\n';
    }
    return 0;
}