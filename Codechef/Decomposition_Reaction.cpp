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
    ll n, m;
    cin >> n >> m;
    vector<ll> in(n);
    rep(i, 0, n)
    {
        cin >> in[i];
    }
    ll temp1, temp2;
    ll a,b;
    rep(i, 0, m)
    {
        cin >> temp1 >> temp2;
 
        rep(j, 0, temp2)
        {
            cin >> a >> b;
            in[b-1]+=(in[temp1-1]*a);
            in[b-1]%=mod;
        }
        in[temp1-1]=0;
    }
    rep(i, 0, n)
    {
        cout << in[i] % mod << '\n';
    }
}
int main()
{
    ffst;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}