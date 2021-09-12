#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// #define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vll vector<ll>
#define m 1000000007
//by sudhnsh
void solve()
{
    ll n,x;
    cin>>n>>x;
    vll v(n);
    map<ll,ll> mp;
    ll a=1,b=0;
    rep(i,0,n)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    if(x==0)
    {
        rep(i,0,n)
        {
            a=max(mp[v[i]],a);
        }
        cout<<a<<' '<<b<<'\n';
        return;
    }
    rep(i,0,n)
    {
        if(v[i]==0)
        {
            if(mp[v[i]]>a)
            {
                a=mp[v[i]];
                b=0;
            }
        }
        if(mp[v[i]]+mp[(v[i]^x)]>a&&x!=0&&v[i]!=0)
            {
                a=mp[v[i]]+mp[(v[i]^x)];
                b=min(mp[v[i]],mp[(v[i]^x)]);
            }
        else if(mp[v[i]]+mp[(v[i]^x)]==a&&x!=0&&v[i]!=0)
            {
                b=min(b,(ll)(min(mp[v[i]],mp[(v[i]^x)])));
            }
    }
    cout<<a<<' '<<b<<'\n';

}
int main()
{ 
ll t;
cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}