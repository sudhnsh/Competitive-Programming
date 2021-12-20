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
    ll x,y;
    cin>>x>>y;
    ll area=0;
    ll k;
    rep(i,0,4)
    {
    cin>>k;
    vector<ll> v(k);
    rep(j,0,k)
    {
        cin>>v[j];
    }

    if(i>1)
    {
       // cout << (x * (v[k - 1] - v[0]))<<' ';
        area = max(area, (x * (v[k - 1] - v[0])));
    }
    else
    {
       // cout << (y * (v[k - 1] - v[0])) << ' ';
        area = max(area, (y * (v[k - 1] - v[0])));
    }
    
    }
    cout<<area<<'\n';

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