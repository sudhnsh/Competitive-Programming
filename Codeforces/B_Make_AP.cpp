#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define rrep(i, n, a) for (ll i = a; i > n; i--)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vpair vector<pair<ll, ll>>
#define mod 1000000007
// by sudhnsh
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll d = c - b;
    ll m;
    if (b - d == c - 2 * d)
    {
        ll A = b - d;
        ll m = A / a;
        if (A == m * a)
        {
            if(m>0)
            {
                cout<<"YES\n";
                return;
            }
        }
    }
    ll d2 = c - a;
    d = (c - a) / 2;
    if (d2 % 2 == 0)
    {
        ll B = a + d;
         m = B / b;
        if (B == b * m)
        {
            if (m > 0)
            {
                cout << "YES\n";
                return;
            }
        }
    }
    d = b - a;
    if (a == (b - d))
    {
        ll C = a + 2 * d;
        m = C / c;
        if (C == c * m)
        {
            if (m > 0)
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
    
}
int main()
{
    ffst;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}