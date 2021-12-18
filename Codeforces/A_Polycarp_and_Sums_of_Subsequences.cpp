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
void solve()
{
    ll v[7];
    rep(i,0,7)
    {
        cin>>v[i];
    }
    ll a=v[0];
    ll b=v[1];
    ll c=v[6]-a-b;
    cout<<a<<' '<<b<<' '<<c<<'\n';

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