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
    ll n,b,x,y;
    cin>>n>>b>>x>>y;
    vector<ll> v(n+1,0);
    rep(i,1,n+1)
    {
        if((v[i-1]+x)>b)
        {
            v[i]=v[i-1]-y;
        }
        else
        {
            v[i]=v[i-1]+x;        
        }   
    }
    ll sum=0;
    rep(i,0,n+1)
    {
        sum+=v[i];
    }
    cout<<sum<<'\n';
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