#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define m 1000000007
// by sudhnsh
void solve()
{
    ll count=1;
    ll n;
    cin >> n;
    vector<ll> v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    map<ll,ll> mp,mp1;
    rep(i,0,n)
    {
        mp[v[i]]++;
    }
    for(auto x:mp)
    {
        count*=(x.second+1);
        count%=m;
    }
    cout<<count-1<<'\n';
}
int main()
{
    // ffst;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}