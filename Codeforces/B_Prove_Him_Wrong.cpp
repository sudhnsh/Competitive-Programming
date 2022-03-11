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
    ll n;
    cin>>n;
    if(n>19)
    {
        cout<<"NO\n";
        return;
    }
    vector<ll> v(n);
    ll ff=1;
    rep(i,0,n)
    {
        v[i]=ff;
        ff*=3;
    }
    cout<<"YES\n";
    rep(i,0,n)
    {
        cout<<v[i]<<' ';
    }
    cout<<'\n';
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