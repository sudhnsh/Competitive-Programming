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
   ll n,x;
   cin>>n>>x;
   vector<ll> v(n);
   map<ll,ll> mp;
    rep(i,0,n)
    {
       cin>>v[i];
    }
    ll count=n;
    rep(i,0,n)
    {
        mp[v[i]]++;
    }
    sort(v.begin(),v.end());
    rep(i,0,n)
    {
        if(mp[v[i]]<=0)
        {
            continue;
        }
        mp[v[i]]--;
        if(mp[v[i]*x]>0)
        {
            mp[v[i]*x]--;
            count-=2;
        }
        else if(mp[v[i]/x]>0&&v[i]%x==0)
        {
            mp[v[i] / x]--;
            count -= 2;
        }
    }
    cout<<count<<'\n';
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