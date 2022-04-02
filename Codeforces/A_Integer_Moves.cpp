#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define rrep(i, n, a) for (ll i = a; i > n; i--)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vpair vector<pair<ll, ll>>
#define m 1000000007
// by sudhnsh
vector<ll> v;
void square()
{
    for (int i = 1; i <= 100; i++)
    {
        v.push_back(i * i);
    }
}
void solve()
{
    ll x, y;
    cin >> x >> y;
    // cout<<(ll)sqrt((x*x)+(y*y))<<' '<<((x*x)+(y*y))<<' ';
    ll t = (x * x) + (y * y);
    if (x == 0 && y == 0)
    {
        cout << 0 << '\n';
        return;
    }
    rep(i, 0, v.size())
    {
        if (t == v[i])
        {
            cout << 1 << '\n';
            return;
        }
    }
    cout << 2 << '\n';
}
int main()
{
    ffst;
    square();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}